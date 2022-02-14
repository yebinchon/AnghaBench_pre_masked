
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; int ps; } ;


 int FUNC_0 (unsigned long) ;

void
FUNC_1(struct pt_regs * VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 VAR_0->pc = VAR_1;
 VAR_0->ps = 8;
 FUNC_0(VAR_2);
}
