
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*,void*) ;
 int FUNC_2 () ;
 void** VAR_1 ;
 size_t FUNC_3 () ;
 struct pt_regs* FUNC_4 (struct pt_regs*) ;
 void** VAR_2 ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct pt_regs *VAR_3)
{
 struct pt_regs *VAR_4 = FUNC_4(VAR_3);
 void *VAR_5, *VAR_6, *VAR_7;


 VAR_5 = (void *)(FUNC_2() & ~(VAR_0 - 1));
 VAR_6 = VAR_1[FUNC_3()];
 VAR_7 = VAR_2[FUNC_3()];


 if (FUNC_5(VAR_5 == VAR_6 || VAR_5 == VAR_7)) {
  FUNC_0(VAR_3);
  FUNC_4(VAR_4);
  return;
 }

 FUNC_1(VAR_3, VAR_6);

 FUNC_4(VAR_4);
}
