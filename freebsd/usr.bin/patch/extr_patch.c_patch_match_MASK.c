
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LINENUM ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,char const*,unsigned short) ;
 scalar_t__ FUNC_5 (char const*,char const*,unsigned short) ;

__attribute__((used)) static bool
FUNC_6(LINENUM VAR_3, LINENUM VAR_4, LINENUM VAR_5)
{
 LINENUM VAR_6 = 1 + VAR_5;
 LINENUM VAR_7;
 LINENUM VAR_8 = FUNC_2() - VAR_5;
 const char *VAR_9;
 const char *VAR_10;
 unsigned short VAR_11;


 if (VAR_6 > VAR_8)
  return 0;
 for (VAR_7 = VAR_3 + VAR_4 + VAR_5; VAR_6 <= VAR_8; VAR_6++, VAR_7++) {
  VAR_9 = FUNC_0(VAR_7, VAR_4 >= 0);
  if (VAR_9 == ((void*)0))
   return 0;
  VAR_10 = FUNC_3(VAR_6);
  VAR_11 = FUNC_1(VAR_6);
  if (VAR_0) {
   if (!FUNC_4(VAR_9, VAR_10, VAR_11))
    return 0;
  } else if (FUNC_5(VAR_9, VAR_10, VAR_11))
   return 0;
  if (VAR_7 == VAR_1) {






   if (VAR_2) {
    if (VAR_10[VAR_11 - 1] == '\n')
     return 0;
   } else {
    if (VAR_10[VAR_11 - 1] != '\n')
     return 0;
   }
  }
 }
 return 1;
}
