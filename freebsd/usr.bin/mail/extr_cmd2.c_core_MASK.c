
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int FUNC_8 (char*) ;

int
FUNC_9(void)
{
 int VAR_2;

 switch (VAR_2 = FUNC_5()) {
 case -1:
  FUNC_8("fork");
  return (1);
 case 0:
  FUNC_3();
  FUNC_2(1);
 }
 FUNC_6("Okie dokie");
 (void)FUNC_4(VAR_0);
 FUNC_7(VAR_2);
 if (FUNC_1(VAR_1) && FUNC_0(VAR_1))
  FUNC_6(" -- Core dumped.\n");
 else
  FUNC_6(" -- Can't dump core.\n");
 return (0);
}
