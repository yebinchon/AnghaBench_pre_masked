
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_long ;
struct trapframe {int dummy; } ;
struct TYPE_2__ {int md_spinlock_count; scalar_t__ md_saved_pil; } ;
struct thread {TYPE_1__ td_md; struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {void* pcb_sp; void* pcb_pc; } ;
struct frame {void** fr_local; } ;


 void* VAR_0 ;
 int FUNC_0 (struct trapframe*,struct trapframe*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_1(struct thread *VAR_3, struct thread *VAR_4)
{
 struct trapframe *VAR_5;
 struct frame *VAR_6;
 struct pcb *VAR_7;

 FUNC_0(VAR_4->td_frame, VAR_3->td_frame, sizeof(struct trapframe));

 VAR_7 = VAR_3->td_pcb;
 VAR_5 = VAR_3->td_frame;
 VAR_6 = (struct frame *)VAR_5 - 1;
 VAR_6->fr_local[0] = (u_long)VAR_1;
 VAR_6->fr_local[1] = (u_long)VAR_3;
 VAR_6->fr_local[2] = (u_long)VAR_5;
 VAR_7->pcb_pc = (u_long)VAR_2 - 8;
 VAR_7->pcb_sp = (u_long)VAR_6 - VAR_0;


 VAR_3->td_md.md_spinlock_count = 1;
 VAR_3->td_md.md_saved_pil = 0;
}
