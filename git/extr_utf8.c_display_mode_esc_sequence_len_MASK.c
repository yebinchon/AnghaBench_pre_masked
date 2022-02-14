
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

size_t FUNC_1(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;
 if (*VAR_1++ != '\033')
  return 0;
 if (*VAR_1++ != '[')
  return 0;
 while (FUNC_0(*VAR_1) || *VAR_1 == ';')
  VAR_1++;
 if (*VAR_1++ != 'm')
  return 0;
 return VAR_1 - VAR_0;
}
