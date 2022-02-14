
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_long ;
struct trapframe {int tf_tstate; scalar_t__ tf_tpc; scalar_t__ tf_tnpc; void** tf_out; } ;
struct thread {struct trapframe* td_frame; struct trapframe* td_pcb; struct proc* td_proc; } ;
struct TYPE_3__ {int * md_utrap; int * md_sigtramp; } ;
struct proc {TYPE_2__* p_sysent; TYPE_1__ p_md; } ;
struct pcb {int tf_tstate; scalar_t__ tf_tpc; scalar_t__ tf_tnpc; void** tf_out; } ;
struct image_params {scalar_t__ entry_addr; } ;
struct frame {int dummy; } ;
struct TYPE_4__ {void* sv_psstrings; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct trapframe*,int) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct thread *VAR_4, struct image_params *VAR_5, u_long VAR_6)
{
 struct trapframe *VAR_7;
 struct pcb *VAR_8;
 struct proc *VAR_9;
 u_long VAR_10;


 VAR_9 = VAR_4->td_proc;
 VAR_9->p_md.md_sigtramp = ((void*)0);
 if (VAR_9->p_md.md_utrap != ((void*)0)) {
  FUNC_2(VAR_9->p_md.md_utrap);
  VAR_9->p_md.md_utrap = ((void*)0);
 }

 VAR_8 = VAR_4->td_pcb;
 VAR_7 = VAR_4->td_frame;
 VAR_10 = FUNC_1(VAR_6, 16);
 FUNC_0(VAR_8, sizeof(*VAR_8));
 FUNC_0(VAR_7, sizeof(*VAR_7));
 VAR_7->tf_out[0] = VAR_6;
 VAR_7->tf_out[3] = VAR_9->p_sysent->sv_psstrings;
 VAR_7->tf_out[6] = VAR_10 - VAR_0 - sizeof(struct frame);
 VAR_7->tf_tnpc = VAR_5->entry_addr + 4;
 VAR_7->tf_tpc = VAR_5->entry_addr;




 VAR_7->tf_tstate = VAR_1 | VAR_3 | VAR_2;
}
