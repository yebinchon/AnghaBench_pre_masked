
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

int
FUNC_1(const char *VAR_0)
{
 const char *VAR_1;

 for (VAR_1 = FUNC_0(VAR_0, '*'); VAR_1; VAR_1 = FUNC_0(VAR_1 + 1, '*'))
  if ((VAR_1 == VAR_0 || VAR_1[-1] == '.') &&
      (VAR_1[1] == '\0' || VAR_1[1] == '.'))
   return 1;
 return 0;
}
