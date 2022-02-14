
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char**,int ) ;

int FUNC_1(char **VAR_0, int *VAR_1)
{
 char *VAR_2 = *VAR_0;

 if (!VAR_2 || !(*VAR_2))
  return 0;
 *VAR_1 = FUNC_0(VAR_2, VAR_0, 0);
 if (VAR_2 == *VAR_0)
  return 0;
 if (**VAR_0 == ',') {
  (*VAR_0)++;
  return 2;
 }
 if (**VAR_0 == '-')
  return 3;

 return 1;
}
