
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct TYPE_7__ {int pa; } ;
struct pvo_entry {TYPE_3__ pvo_pte; } ;
typedef int * pmap_t ;
typedef int mmu_t ;
struct TYPE_8__ {TYPE_2__* td_proc; } ;
struct TYPE_6__ {TYPE_1__* p_vmspace; } ;
struct TYPE_5__ {int vm_pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__* VAR_3 ;
 struct pvo_entry* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int *,int,int,scalar_t__) ;
 int FUNC_6 (int) ;

void
FUNC_7(mmu_t VAR_4, pmap_t VAR_5, vm_offset_t VAR_6, vm_size_t VAR_7)
{
 struct pvo_entry *VAR_8;
 vm_offset_t VAR_9;
 vm_paddr_t VAR_10;
 vm_size_t VAR_11;

 if (FUNC_3(VAR_5 == ((void*)0)))
  VAR_5 = &VAR_3->td_proc->p_vmspace->vm_pmap;

 FUNC_1(VAR_5);
 while (VAR_7 > 0) {
  VAR_9 = FUNC_6(VAR_6+1);
  VAR_11 = FUNC_0(VAR_9 - VAR_6, VAR_7);
  VAR_8 = FUNC_4(VAR_5, VAR_6 & ~VAR_0);
  if (VAR_8 != ((void*)0) && !(VAR_8->pvo_pte.pa & VAR_1)) {
   VAR_10 = (VAR_8->pvo_pte.pa & VAR_2) | (VAR_6 & VAR_0);
   FUNC_5(VAR_4, VAR_5, VAR_6, VAR_10, VAR_11);
  }
  VAR_6 += VAR_11;
  VAR_7 -= VAR_11;
 }
 FUNC_2(VAR_5);
}
