
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct trapframe {int tf_sepc; int tf_ra; int tf_sp; int * tf_a; } ;
struct thread {struct pcb* td_pcb; struct trapframe* td_frame; } ;
struct pcb {int pcb_fpflags; } ;
struct image_params {int entry_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct trapframe*,int ,int) ;

void
FUNC_2(struct thread *VAR_1, struct image_params *VAR_2, u_long VAR_3)
{
 struct trapframe *VAR_4;
 struct pcb *VAR_5;

 VAR_4 = VAR_1->td_frame;
 VAR_5 = VAR_1->td_pcb;

 FUNC_1(VAR_4, 0, sizeof(struct trapframe));

 VAR_4->tf_a[0] = VAR_3;
 VAR_4->tf_sp = FUNC_0(VAR_3);
 VAR_4->tf_ra = VAR_2->entry_addr;
 VAR_4->tf_sepc = VAR_2->entry_addr;

 VAR_5->pcb_fpflags &= ~VAR_0;
}
