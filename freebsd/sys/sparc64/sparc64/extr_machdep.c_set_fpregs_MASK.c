
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_gsr; int tf_fsr; int tf_fprs; } ;
struct thread {struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {int pcb_ufp; } ;
struct fpreg {int fr_gsr; int fr_fsr; int fr_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(struct thread *VAR_1, struct fpreg *VAR_2)
{
 struct trapframe *VAR_3;
 struct pcb *VAR_4;

 VAR_4 = VAR_1->td_pcb;
 VAR_3 = VAR_1->td_frame;
 VAR_3->tf_fprs &= ~VAR_0;
 FUNC_0(VAR_2->fr_regs, VAR_4->pcb_ufp, sizeof(VAR_4->pcb_ufp));
 VAR_3->tf_fsr = VAR_2->fr_fsr;
 VAR_3->tf_gsr = VAR_2->fr_gsr;
 return (0);
}
