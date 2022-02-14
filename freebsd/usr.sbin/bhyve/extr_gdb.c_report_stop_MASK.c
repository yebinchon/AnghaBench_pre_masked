
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(void)
{

 FUNC_5();
 if (VAR_1 == -1)
  FUNC_1('S');
 else
  FUNC_1('T');
 FUNC_0(VAR_0);
 if (VAR_1 != -1) {
  FUNC_3("thread:");
  FUNC_2(VAR_1 + 1);
  FUNC_1(';');
 }
 VAR_1 = -1;
 FUNC_4();
}
