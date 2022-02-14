
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {uintptr_t* pcb_s; uintptr_t pcb_ra; uintptr_t pcb_sp; int tf_sstatus; scalar_t__* tf_a; scalar_t__* tf_t; } ;
struct TYPE_2__ {int md_spinlock_count; int md_saved_sstatus_ie; } ;
struct thread {int td_kstack_pages; TYPE_1__ td_md; struct trapframe* td_frame; struct trapframe* td_pcb; scalar_t__ td_kstack; } ;
struct proc {int dummy; } ;
struct pcb {uintptr_t* pcb_s; uintptr_t pcb_ra; uintptr_t pcb_sp; int tf_sstatus; scalar_t__* tf_a; scalar_t__* tf_t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct trapframe*) ;
 int FUNC_1 (struct trapframe*,struct trapframe*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_2(struct thread *VAR_7, struct proc *VAR_8, struct thread *VAR_9, int VAR_10)
{
 struct pcb *VAR_11;
 struct trapframe *VAR_12;

 if ((VAR_10 & VAR_1) == 0)
  return;



 VAR_11 = (struct pcb *)(VAR_9->td_kstack +
     VAR_9->td_kstack_pages * VAR_0) - 1;

 VAR_9->td_pcb = VAR_11;
 FUNC_1(VAR_7->td_pcb, VAR_11, sizeof(*VAR_11));

 VAR_12 = (struct trapframe *)FUNC_0((struct trapframe *)VAR_11 - 1);
 FUNC_1(VAR_7->td_frame, VAR_12, sizeof(*VAR_12));


 VAR_12->tf_t[0] = 0;


 VAR_12->tf_a[0] = 0;
 VAR_12->tf_a[1] = 0;
 VAR_12->tf_sstatus |= (VAR_3);
 VAR_12->tf_sstatus &= ~(VAR_4);

 VAR_9->td_frame = VAR_12;


 VAR_9->td_pcb->pcb_s[0] = (uintptr_t)VAR_5;
 VAR_9->td_pcb->pcb_s[1] = (uintptr_t)VAR_9;
 VAR_9->td_pcb->pcb_ra = (uintptr_t)VAR_6;
 VAR_9->td_pcb->pcb_sp = (uintptr_t)VAR_9->td_frame;


 VAR_9->td_md.md_spinlock_count = 1;
 VAR_9->td_md.md_saved_sstatus_ie = (VAR_2);
}
