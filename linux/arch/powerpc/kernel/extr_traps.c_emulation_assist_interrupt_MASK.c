
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;

void FUNC_1(struct pt_regs *VAR_1)
{
 VAR_1->msr |= VAR_0;
 FUNC_0(VAR_1);
}
