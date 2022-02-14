
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
typedef TYPE_3__* pmap_t ;
typedef int mmu_t ;
struct TYPE_6__ {int pm_active; } ;
struct TYPE_5__ {TYPE_1__* p_vmspace; } ;
struct TYPE_4__ {TYPE_3__ vm_pmap; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(mmu_t VAR_2, struct thread *VAR_3)
{
 pmap_t VAR_4;

 VAR_4 = &VAR_3->td_proc->p_vmspace->vm_pmap;
 FUNC_0(FUNC_1(VAR_0), &VAR_4->pm_active);
 FUNC_2(VAR_1, ((void*)0));
}
