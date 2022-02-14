
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;

char *
FUNC_6(char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3;

 FUNC_2();
 while ((VAR_2 = FUNC_1())) {
  if (!FUNC_3(VAR_0, VAR_2)) {
   FUNC_0();
   return (FUNC_4(VAR_0));
  }

  if ((VAR_1 = FUNC_5(VAR_2, '/')) && FUNC_3(VAR_0, VAR_1 + 1) == 0) {
   VAR_3 = FUNC_4(VAR_2);
   FUNC_0();
   return (VAR_3);
  }
 }
 FUNC_0();
 return (((void*)0));
}
