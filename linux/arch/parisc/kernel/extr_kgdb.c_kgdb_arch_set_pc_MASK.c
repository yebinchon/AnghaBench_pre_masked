
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* iaoq; } ;



void FUNC_0(struct pt_regs *VAR_0, unsigned long VAR_1)
{
 VAR_0->iaoq[0] = VAR_1;
 VAR_0->iaoq[1] = VAR_1 + 4;
}
