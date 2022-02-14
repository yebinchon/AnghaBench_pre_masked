
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; int npc; } ;



void FUNC_0(struct pt_regs *VAR_0, unsigned long VAR_1)
{
 VAR_0->pc = VAR_1;
 VAR_0->npc = VAR_0->pc + 4;
}
