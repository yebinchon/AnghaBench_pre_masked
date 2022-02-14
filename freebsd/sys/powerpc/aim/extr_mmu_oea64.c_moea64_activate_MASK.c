
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct thread {TYPE_3__* td_pcb; TYPE_5__* td_proc; } ;
typedef TYPE_6__* pmap_t ;
typedef int mmu_t ;
struct TYPE_14__ {int userslb; } ;
struct TYPE_13__ {int pmap_phys; int pm_slb; int pm_active; } ;
struct TYPE_12__ {TYPE_4__* p_vmspace; } ;
struct TYPE_11__ {TYPE_6__ vm_pmap; } ;
struct TYPE_8__ {int usr_vsid; } ;
struct TYPE_9__ {TYPE_1__ aim; } ;
struct TYPE_10__ {TYPE_2__ pcb_cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int ) ;

void
FUNC_4(mmu_t VAR_5, struct thread *VAR_6)
{
 pmap_t VAR_7;

 VAR_7 = &VAR_6->td_proc->p_vmspace->vm_pmap;
 FUNC_0(FUNC_1(VAR_3), &VAR_7->pm_active);






 FUNC_2(VAR_4, VAR_7->pmap_phys);
 FUNC_3(VAR_1 << VAR_0, VAR_6->td_pcb->pcb_cpu.aim.usr_vsid);

}
