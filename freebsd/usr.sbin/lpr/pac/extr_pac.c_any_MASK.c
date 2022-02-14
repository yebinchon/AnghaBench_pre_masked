
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, const char VAR_1[])
{
 register int VAR_2 = VAR_0;
 register const char *VAR_3 = VAR_1;

 while (*VAR_3)
  if (*VAR_3++ == VAR_2)
   return(1);
 return(0);
}
