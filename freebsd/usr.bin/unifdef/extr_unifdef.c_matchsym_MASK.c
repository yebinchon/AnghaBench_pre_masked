
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_0, const char *VAR_1)
{
 while (*VAR_0 != '\0' && *VAR_1 != '\0')
  if (*VAR_0 != *VAR_1)
   return (((void*)0));
  else
   ++VAR_0, ++VAR_1;
 if (*VAR_0 == '\0' && FUNC_0(*VAR_1))
  return(VAR_1);
 else
  return(((void*)0));
}
