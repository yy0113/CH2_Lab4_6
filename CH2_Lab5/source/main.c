#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	float pouplation = 6763;
	float rate = 0.0118;
	float newPop = pouplation;
	float newPop2 = pouplation;
	int year;

	printf("%15s%30s%25s\n","Years from now","Pouplation(in millions)","Increase (in millions)");

	for ( year = 1; year <=75; year++)
	{
		newPop2 = newPop;
		newPop =newPop2*rate+newPop2;

		printf("%15d%30.2f%25.2f\n",year,newPop,newPop-newPop2);
	}

	system("pause");
	return 0;

}