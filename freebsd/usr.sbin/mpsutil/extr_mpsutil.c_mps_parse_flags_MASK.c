
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int FUNC_0 (char) ;

int
FUNC_1(uintmax_t VAR_0, const char *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;

 if (VAR_0 == 0)
  return (VAR_6);


 VAR_5 = VAR_6;
 while (*VAR_1) {
  VAR_4 = *VAR_1++;
  if (VAR_0 & (1 << (VAR_4 - 1))) {
   FUNC_0(VAR_6 != VAR_5 ? ',' : '<');
   for (; (VAR_4 = *VAR_1) > ' '; ++VAR_1)
    FUNC_0(VAR_4);
  } else
   for (; *VAR_1 > ' '; ++VAR_1)
    continue;
 }
 if (VAR_6 != VAR_5)
  FUNC_0('>');

 return (VAR_6);
}
