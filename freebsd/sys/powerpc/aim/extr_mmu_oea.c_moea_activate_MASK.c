
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; TYPE_3__* td_proc; } ;
typedef TYPE_6__* pmap_t ;
typedef int mmu_t ;
struct TYPE_13__ {int pm_active; struct TYPE_13__* pmap_phys; } ;
struct TYPE_12__ {int usr_vsid; } ;
struct TYPE_11__ {TYPE_5__ aim; } ;
struct TYPE_10__ {TYPE_2__* p_vmspace; } ;
struct TYPE_9__ {TYPE_6__ vm_pmap; } ;
struct TYPE_8__ {TYPE_4__ pcb_cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int ) ;

void
FUNC_4(mmu_t VAR_4, struct thread *VAR_5)
{
 pmap_t VAR_6, VAR_7;





 VAR_6 = &VAR_5->td_proc->p_vmspace->vm_pmap;
 VAR_7 = VAR_6->pmap_phys;

 FUNC_0(FUNC_1(VAR_2), &VAR_6->pm_active);
 FUNC_2(VAR_3, VAR_7);

 FUNC_3(VAR_1 << VAR_0, VAR_5->td_pcb->pcb_cpu.aim.usr_vsid);
}
