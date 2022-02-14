
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {scalar_t__ td_frame; TYPE_1__* td_pcb; } ;
struct TYPE_2__ {uintptr_t* pcb_s; uintptr_t pcb_ra; uintptr_t pcb_sp; } ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct thread *VAR_1, void (*VAR_2)(void *), void *VAR_3)
{

 VAR_1->td_pcb->pcb_s[0] = (uintptr_t)VAR_2;
 VAR_1->td_pcb->pcb_s[1] = (uintptr_t)VAR_3;
 VAR_1->td_pcb->pcb_ra = (uintptr_t)VAR_0;
 VAR_1->td_pcb->pcb_sp = (uintptr_t)VAR_1->td_frame;
}
