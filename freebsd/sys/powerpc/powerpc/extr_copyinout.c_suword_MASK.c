
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_3__* td_pcb; TYPE_2__* td_proc; } ;
typedef int * pmap_t ;
typedef int jmp_buf ;
struct TYPE_6__ {int * pcb_onfault; } ;
struct TYPE_5__ {TYPE_1__* p_vmspace; } ;
struct TYPE_4__ {int vm_pmap; } ;


 struct thread* VAR_0 ;
 scalar_t__ FUNC_0 (int *,void volatile*,void**,int,int *) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(volatile void *VAR_1, long VAR_2)
{
 struct thread *VAR_3;
 pmap_t VAR_4;
 jmp_buf VAR_5;
 long *VAR_6;

 VAR_3 = VAR_0;
 VAR_4 = &VAR_3->td_proc->p_vmspace->vm_pmap;

 VAR_3->td_pcb->pcb_onfault = &VAR_5;
 if (FUNC_1(VAR_5)) {
  VAR_3->td_pcb->pcb_onfault = ((void*)0);
  return (-1);
 }

 if (FUNC_0(VAR_4, VAR_1, (void **)&VAR_6, sizeof(*VAR_6), ((void*)0))) {
  VAR_3->td_pcb->pcb_onfault = ((void*)0);
  return (-1);
 }

 *VAR_6 = VAR_2;

 VAR_3->td_pcb->pcb_onfault = ((void*)0);
 return (0);
}
