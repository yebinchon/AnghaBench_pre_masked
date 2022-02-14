
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int * fixreg; int srr0; } ;
struct pcb {int pcb_sp; int pcb_lr; } ;



void
FUNC_0(struct trapframe *VAR_0, struct pcb *VAR_1)
{

 VAR_1->pcb_lr = VAR_0->srr0;
 VAR_1->pcb_sp = VAR_0->fixreg[1];
}
