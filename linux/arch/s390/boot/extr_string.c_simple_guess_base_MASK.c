
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static unsigned int FUNC_2(const char *VAR_0)
{
 if (VAR_0[0] == '0') {
  if (FUNC_0(VAR_0[1]) == 'x' && FUNC_1(VAR_0[2]))
   return 16;
  else
   return 8;
 } else {
  return 10;
 }
}
