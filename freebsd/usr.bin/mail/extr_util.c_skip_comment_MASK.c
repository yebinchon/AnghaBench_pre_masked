
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0)
{
 int VAR_1 = 1;

 for (; VAR_1 > 0 && *VAR_0; VAR_0++) {
  switch (*VAR_0) {
  case '\\':
   if (VAR_0[1])
    VAR_0++;
   break;
  case '(':
   VAR_1++;
   break;
  case ')':
   VAR_1--;
   break;
  }
 }
 return (VAR_0);
}
