
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct pt_regs*) ;
 int FUNC_1 (int ) ;
 struct pt_regs* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (struct pt_regs*) ;

void FUNC_5(int VAR_4)
{
 struct pt_regs *VAR_5 = FUNC_2();

 VAR_2++;

 if (FUNC_3(VAR_5) != VAR_0) {

  FUNC_0("Oops", VAR_5);
  FUNC_1(VAR_1);
 } else if (VAR_3)
  FUNC_4(VAR_5);
}
