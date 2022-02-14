
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (char const*,char**,int ) ;

int
FUNC_1(const char *VAR_0, int *VAR_1)
{
 unsigned long VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_0(VAR_0, &VAR_3, 0);
 if (*VAR_3 != '\0')
   return (-1);

 *VAR_1 = (int)VAR_2;
 return (0);
}
