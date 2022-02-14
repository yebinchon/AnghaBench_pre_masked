
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

void FUNC_5(struct pt_regs *VAR_0)
{
 if (FUNC_4(VAR_0)) {
  FUNC_0(!FUNC_2(), "entry code didn't wake RCU");
 } else {






  FUNC_3();
 }

 FUNC_1();


 FUNC_0(!FUNC_2(), "ist_enter didn't work");
}
