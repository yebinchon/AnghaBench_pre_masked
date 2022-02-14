
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char**,char*,char*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char const*) ;

void
FUNC_9(char *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 static const char *VAR_9 = "0123456789";

 VAR_3 = FUNC_6(VAR_0);
 VAR_4 = FUNC_6(VAR_1);

 if (((VAR_5 = FUNC_5(VAR_0, VAR_9)) == 0) || (VAR_5 == VAR_3) ||
     (FUNC_7(VAR_0, VAR_1, VAR_5) != 0) ||
     ((int)FUNC_8(VAR_0 + VAR_5, VAR_9) != (VAR_3 - VAR_5)) ||
     ((int)FUNC_8(VAR_1 + VAR_5, VAR_9) != (VAR_4 - VAR_5)) ||
     ((VAR_6 = FUNC_2(VAR_0 + VAR_5)) > ((VAR_7 = FUNC_2(VAR_1 + VAR_5))))) {
  FUNC_3("malformed charmap range");
  return;
 }

 VAR_0[VAR_5] = 0;

 for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8++) {
  char *VAR_10;
  (void) FUNC_1(&VAR_10, "%s%0*u", VAR_0, VAR_3 - VAR_5, VAR_8);
  if (VAR_10 == ((void*)0)) {
   FUNC_3("out of memory");
   return;
  }

  FUNC_0(VAR_10, VAR_2, 1);
  VAR_2++;
 }
 FUNC_4(VAR_0);
 FUNC_4(VAR_1);
}
