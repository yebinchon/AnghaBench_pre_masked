
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ usr_vsid; } ;
struct TYPE_5__ {TYPE_1__ aim; } ;
struct trapframe {int cr; int pcb_sp; TYPE_2__ pcb_cpu; void* pcb_lr; void** pcb_context; void* pcb_toc; scalar_t__* fixreg; } ;
struct TYPE_6__ {int md_spinlock_count; int md_saved_msr; } ;
struct thread {int td_kstack; int td_kstack_pages; TYPE_3__ td_md; struct trapframe* td_frame; struct trapframe* td_pcb; } ;
struct proc {int dummy; } ;
struct pcb {int cr; int pcb_sp; TYPE_2__ pcb_cpu; void* pcb_lr; void** pcb_context; void* pcb_toc; scalar_t__* fixreg; } ;
struct callframe {void* cf_arg1; void* cf_arg0; void* cf_func; void* cf_toc; } ;
typedef void* register_t ;


 int FUNC_0 (int ,char*,struct thread*,struct proc*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct trapframe*,struct trapframe*,int) ;
 struct thread* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct callframe*,int ,int) ;
 int VAR_7 ;
 struct thread VAR_8 ;

void
FUNC_4(struct thread *VAR_9, struct proc *VAR_10, struct thread *VAR_11, int VAR_12)
{
 struct trapframe *VAR_13;
 struct callframe *VAR_14;
 struct pcb *VAR_15;

 FUNC_1(VAR_9 == VAR_4 || VAR_9 == &VAR_8,
     ("cpu_fork: p1 not curproc and not proc0"));
 FUNC_0(VAR_1, "cpu_fork: called td1=%p p2=%p flags=%x",
     VAR_9, VAR_10, VAR_12);

 if ((VAR_12 & VAR_3) == 0)
  return;

 VAR_15 = (struct pcb *)((VAR_11->td_kstack +
     VAR_11->td_kstack_pages * VAR_2 - sizeof(struct pcb)) & ~0x2fUL);
 VAR_11->td_pcb = VAR_15;


 FUNC_2(VAR_9->td_pcb, VAR_15, sizeof(struct pcb));






 VAR_13 = (struct trapframe *)VAR_15 - 1;
 FUNC_2(VAR_9->td_frame, VAR_13, sizeof(*VAR_13));


 VAR_13->fixreg[VAR_0] = 0;
 VAR_13->fixreg[VAR_0 + 1] = 0;
 VAR_13->cr &= ~0x10000000;

 VAR_11->td_frame = VAR_13;

 VAR_14 = (struct callframe *)VAR_13 - 1;
 FUNC_3(VAR_14, 0, sizeof(struct callframe));



 VAR_14->cf_func = (register_t)VAR_5;
 VAR_14->cf_arg0 = (register_t)VAR_11;
 VAR_14->cf_arg1 = (register_t)VAR_13;

 VAR_15->pcb_sp = (register_t)VAR_14;
 FUNC_1(VAR_15->pcb_sp % 16 == 0, ("stack misaligned"));




 VAR_15->pcb_lr = (register_t)VAR_6;
 VAR_15->pcb_context[0] = VAR_15->pcb_lr;






 VAR_11->td_md.md_spinlock_count = 1;
 VAR_11->td_md.md_saved_msr = VAR_7;




}
