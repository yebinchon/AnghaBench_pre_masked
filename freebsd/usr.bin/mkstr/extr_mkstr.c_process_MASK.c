
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

void
FUNC_5(void)
{
 int VAR_1;

 for (;;) {
  VAR_1 = FUNC_1();
  if (VAR_1 == VAR_0)
   return;
  if (VAR_1 != 'e') {
   FUNC_4(VAR_1);
   continue;
  }
  if (FUNC_2("error(")) {
   FUNC_3("error(");
   VAR_1 = FUNC_1();
   if (VAR_1 != '"')
    FUNC_4(VAR_1);
   else
    FUNC_0();
  }
 }
}
