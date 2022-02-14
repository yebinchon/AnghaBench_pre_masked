
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_sp; int tf_tpc; } ;
struct pcb {int pcb_sp; int pcb_pc; } ;



void
FUNC_0(struct trapframe *VAR_0, struct pcb *VAR_1)
{

 VAR_1->pcb_pc = VAR_0->tf_tpc;
 VAR_1->pcb_sp = VAR_0->tf_sp;
}
