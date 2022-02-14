
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, unsigned int *VAR_1)
{
 if (*VAR_1 == 0) {
  if (VAR_0[0] == '0') {
   if (FUNC_0(VAR_0[1]) == 'x' && FUNC_1(VAR_0[2]))
    *VAR_1 = 16;
   else
    *VAR_1 = 8;
  } else
   *VAR_1 = 10;
 }
 if (*VAR_1 == 16 && VAR_0[0] == '0' && FUNC_0(VAR_0[1]) == 'x')
  VAR_0 += 2;
 return VAR_0;
}
