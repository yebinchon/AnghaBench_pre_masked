
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_sepc; int tf_tp; int tf_gp; int tf_sp; int tf_ra; int tf_a; int tf_s; int tf_t; } ;
struct pcb {int pcb_sepc; int pcb_tp; int pcb_gp; int pcb_sp; int pcb_ra; int pcb_a; int pcb_s; int pcb_t; } ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(struct trapframe *VAR_0, struct pcb *VAR_1)
{

 FUNC_0(VAR_1->pcb_t, VAR_0->tf_t, sizeof(VAR_0->tf_t));
 FUNC_0(VAR_1->pcb_s, VAR_0->tf_s, sizeof(VAR_0->tf_s));
 FUNC_0(VAR_1->pcb_a, VAR_0->tf_a, sizeof(VAR_0->tf_a));

 VAR_1->pcb_ra = VAR_0->tf_ra;
 VAR_1->pcb_sp = VAR_0->tf_sp;
 VAR_1->pcb_gp = VAR_0->tf_gp;
 VAR_1->pcb_tp = VAR_0->tf_tp;
 VAR_1->pcb_sepc = VAR_0->tf_sepc;
}
