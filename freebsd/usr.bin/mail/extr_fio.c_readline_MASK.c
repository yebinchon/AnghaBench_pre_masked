
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*) ;

int
FUNC_3(FILE *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0);
 if (FUNC_1(VAR_1, VAR_2, VAR_0) == ((void*)0))
  return (-1);
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 > 0 && VAR_1[VAR_3 - 1] == '\n')
  VAR_1[--VAR_3] = '\0';
 if (VAR_3 > 0 && VAR_1[VAR_3 - 1] == '\r')
  VAR_1[--VAR_3] = '\0';
 return (VAR_3);
}
