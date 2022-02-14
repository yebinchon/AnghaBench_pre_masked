
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct pvo_entry {int pvo_vaddr; } ;
typedef TYPE_2__* pmap_t ;
typedef int mmu_t ;
struct TYPE_6__ {int wired_count; } ;
struct TYPE_7__ {TYPE_1__ pm_stats; int pmap_pvo; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct pvo_entry*) ;
 int VAR_0 ;
 struct pvo_entry* FUNC_3 (int ,int *,struct pvo_entry*) ;
 struct pvo_entry* FUNC_4 (int ,int *,struct pvo_entry*) ;
 int FUNC_5 (char*,struct pvo_entry*) ;
 int VAR_1 ;

void
FUNC_6(mmu_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{
 struct pvo_entry VAR_6, *VAR_7;

 FUNC_0(VAR_3);
 VAR_6.pvo_vaddr = VAR_4;
 for (VAR_7 = FUNC_4(VAR_1, &VAR_3->pmap_pvo, &VAR_6);
     VAR_7 != ((void*)0) && FUNC_2(VAR_7) < VAR_5;
     VAR_7 = FUNC_3(VAR_1, &VAR_3->pmap_pvo, VAR_7)) {
  if ((VAR_7->pvo_vaddr & VAR_0) == 0)
   FUNC_5("moea_unwire: pvo %p is missing PVO_WIRED", VAR_7);
  VAR_7->pvo_vaddr &= ~VAR_0;
  VAR_3->pm_stats.wired_count--;
 }
 FUNC_1(VAR_3);
}
