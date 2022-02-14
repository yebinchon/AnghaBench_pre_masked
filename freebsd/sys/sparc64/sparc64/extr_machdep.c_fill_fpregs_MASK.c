
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_gsr; int tf_fsr; } ;
struct thread {struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {int pcb_ufp; } ;
struct fpreg {scalar_t__* fr_pad; int fr_gsr; int fr_fsr; int fr_regs; } ;


 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(struct thread *VAR_0, struct fpreg *VAR_1)
{
 struct trapframe *VAR_2;
 struct pcb *VAR_3;

 VAR_3 = VAR_0->td_pcb;
 VAR_2 = VAR_0->td_frame;
 FUNC_0(VAR_3->pcb_ufp, VAR_1->fr_regs, sizeof(VAR_1->fr_regs));
 VAR_1->fr_fsr = VAR_2->tf_fsr;
 VAR_1->fr_gsr = VAR_2->tf_gsr;
 VAR_1->fr_pad[0] = 0;
 return (0);
}
