
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vscr; } ;
struct TYPE_5__ {scalar_t__ usr_vsid; } ;
struct TYPE_6__ {TYPE_1__ aim; } ;
struct trapframe {int cr; TYPE_3__ pcb_vec; TYPE_2__ pcb_cpu; void* pcb_lr; void** pcb_context; void* pcb_toc; void* pcb_sp; scalar_t__* fixreg; } ;
struct TYPE_8__ {int md_spinlock_count; int md_saved_msr; } ;
struct thread {TYPE_4__ td_md; struct trapframe* td_frame; struct trapframe* td_pcb; } ;
struct pcb {int cr; TYPE_3__ pcb_vec; TYPE_2__ pcb_cpu; void* pcb_lr; void** pcb_context; void* pcb_toc; void* pcb_sp; scalar_t__* fixreg; } ;
struct callframe {void* cf_arg1; void* cf_arg0; void* cf_func; } ;
typedef void* register_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct trapframe*,struct trapframe*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct callframe*,int ,int) ;
 int VAR_7 ;

void
FUNC_2(struct thread *VAR_8, struct thread *VAR_9)
{
 struct pcb *VAR_10;
 struct trapframe *VAR_11;
 struct callframe *VAR_12;

 VAR_10 = VAR_8->td_pcb;


 FUNC_0(VAR_9->td_pcb, VAR_10, sizeof(*VAR_10));


 VAR_11 = VAR_8->td_frame;
 FUNC_0(VAR_9->td_frame, VAR_11, sizeof(struct trapframe));
 VAR_11->fixreg[VAR_0] = 0;
 VAR_11->fixreg[VAR_0 + 1] = 0;
 VAR_11->cr &= ~0x10000000;


 VAR_12 = (struct callframe *)VAR_11 - 1;
 FUNC_1(VAR_12, 0, sizeof(struct callframe));
 VAR_12->cf_func = (register_t)VAR_5;
 VAR_12->cf_arg0 = (register_t)VAR_8;
 VAR_12->cf_arg1 = (register_t)VAR_11;

 VAR_10->pcb_sp = (register_t)VAR_12;




 VAR_10->pcb_lr = (register_t)VAR_6;
 VAR_10->pcb_context[0] = VAR_10->pcb_lr;

 VAR_10->pcb_cpu.aim.usr_vsid = 0;






 VAR_8->td_md.md_spinlock_count = 1;
 VAR_8->td_md.md_saved_msr = VAR_7;
}
