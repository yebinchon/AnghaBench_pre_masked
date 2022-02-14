
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__* gprs; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long*) ;
 int FUNC_4 (struct pt_regs*) ;

void FUNC_5(struct pt_regs *VAR_1)
{
 FUNC_2(VAR_0);
 FUNC_1(VAR_1);

 if (!FUNC_4(VAR_1))
  FUNC_3(((void*)0), (unsigned long *) VAR_1->gprs[15]);
 FUNC_0(VAR_1);
}
