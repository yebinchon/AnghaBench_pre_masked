
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_4__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct TYPE_12__ {int prot; int pa; } ;
struct pvo_entry {int pvo_vaddr; TYPE_1__ pvo_pte; } ;
typedef TYPE_5__* pmap_t ;
typedef int mmu_t ;
typedef int int64_t ;
struct TYPE_14__ {int wired_count; } ;
struct TYPE_16__ {TYPE_3__ pm_stats; int pmap_pvo; } ;
struct TYPE_13__ {int mdpg_attrs; } ;
struct TYPE_15__ {TYPE_2__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct pvo_entry*,int ) ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct pvo_entry*) ;
 int VAR_5 ;
 struct pvo_entry* FUNC_5 (int ,int *,struct pvo_entry*) ;
 struct pvo_entry* FUNC_6 (int ,int *,struct pvo_entry*) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,struct pvo_entry*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*) ;

void
FUNC_11(mmu_t VAR_8, pmap_t VAR_9, vm_offset_t VAR_10, vm_offset_t VAR_11)
{
 struct pvo_entry VAR_12, *VAR_13;
 vm_page_t VAR_14;
 int64_t VAR_15;

 VAR_12.pvo_vaddr = VAR_10;
 FUNC_2(VAR_9);
 for (VAR_13 = FUNC_6(VAR_7, &VAR_9->pmap_pvo, &VAR_12);
     VAR_13 != ((void*)0) && FUNC_4(VAR_13) < VAR_11;
     VAR_13 = FUNC_5(VAR_7, &VAR_9->pmap_pvo, VAR_13)) {
  if ((VAR_13->pvo_vaddr & VAR_5) == 0)
   FUNC_8("moea64_unwire: pvo %p is missing PVO_WIRED",
       VAR_13);
  VAR_13->pvo_vaddr &= ~VAR_5;
  VAR_15 = FUNC_0(VAR_8, VAR_13, 0 );
  if ((VAR_13->pvo_vaddr & VAR_4) &&
      (VAR_13->pvo_pte.prot & VAR_6)) {
   if (VAR_15 < 0)
    VAR_15 = VAR_0;
   VAR_14 = FUNC_1(VAR_13->pvo_pte.pa & VAR_2);

   VAR_15 |= FUNC_7(&VAR_14->md.mdpg_attrs);
   if (VAR_15 & VAR_0)
    FUNC_10(VAR_14);
   if (VAR_15 & VAR_1)
    FUNC_9(VAR_14, VAR_3);
  }
  VAR_9->pm_stats.wired_count--;
 }
 FUNC_3(VAR_9);
}
