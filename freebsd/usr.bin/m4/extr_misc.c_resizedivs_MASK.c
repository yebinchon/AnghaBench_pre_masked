
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int ** VAR_1 ;
 int ** FUNC_0 (int **,int,int,char*,int) ;

void
FUNC_1(int VAR_2)
{
 int VAR_3;

 VAR_1 = FUNC_0(VAR_1, VAR_2, sizeof(FILE *),
     "too many diverts %d", VAR_2);
 for (VAR_3 = VAR_0; VAR_3 < VAR_2; VAR_3++)
  VAR_1[VAR_3] = ((void*)0);
 VAR_0 = VAR_2;
}
