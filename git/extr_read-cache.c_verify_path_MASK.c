
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char const*,unsigned int) ;

int FUNC_8(const char *VAR_2, unsigned VAR_3)
{
 char VAR_4;

 if (FUNC_1(VAR_2))
  return 0;

 goto inside;
 for (;;) {
  if (!VAR_4)
   return 1;
  if (FUNC_2(VAR_4)) {
inside:
   if (VAR_0) {
    if (FUNC_3(VAR_2))
     return 0;
    if (FUNC_0(VAR_3)) {
     if (FUNC_4(VAR_2))
      return 0;
    }
   }
   if (VAR_1) {
    if (FUNC_5(VAR_2))
     return 0;
    if (FUNC_0(VAR_3)) {
     if (FUNC_6(VAR_2))
      return 0;
    }
   }

   VAR_4 = *VAR_2++;
   if ((VAR_4 == '.' && !FUNC_7(VAR_2, VAR_3)) ||
       FUNC_2(VAR_4) || VAR_4 == '\0')
    return 0;
  }
  VAR_4 = *VAR_2++;
 }
}
