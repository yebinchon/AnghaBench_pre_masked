
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct TYPE_4__ {int md_spinlock_count; int md_saved_sstatus_ie; } ;
struct thread {TYPE_1__ td_md; TYPE_2__* td_frame; TYPE_2__* td_pcb; } ;
struct pcb {int dummy; } ;
struct TYPE_5__ {uintptr_t* pcb_s; uintptr_t pcb_ra; uintptr_t pcb_sp; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_1(struct thread *VAR_3, struct thread *VAR_4)
{

 FUNC_0(VAR_4->td_frame, VAR_3->td_frame, sizeof(struct trapframe));
 FUNC_0(VAR_4->td_pcb, VAR_3->td_pcb, sizeof(struct pcb));

 VAR_3->td_pcb->pcb_s[0] = (uintptr_t)VAR_1;
 VAR_3->td_pcb->pcb_s[1] = (uintptr_t)VAR_3;
 VAR_3->td_pcb->pcb_ra = (uintptr_t)VAR_2;
 VAR_3->td_pcb->pcb_sp = (uintptr_t)VAR_3->td_frame;


 VAR_3->td_md.md_spinlock_count = 1;
 VAR_3->td_md.md_saved_sstatus_ie = (VAR_0);
}
