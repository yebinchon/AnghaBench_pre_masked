
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

int
FUNC_1(char *VAR_0, char *VAR_1[], int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_0(VAR_0, VAR_1[VAR_3]) == 0)
   return (VAR_3);
 return (-1);
}
