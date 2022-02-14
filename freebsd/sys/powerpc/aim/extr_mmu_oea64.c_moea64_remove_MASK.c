
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct pvo_entry {scalar_t__ pvo_vaddr; } ;
struct pvo_dlist {int dummy; } ;
typedef TYPE_2__* pmap_t ;
typedef int mmu_t ;
struct TYPE_6__ {scalar_t__ resident_count; } ;
struct TYPE_7__ {int pmap_pvo; TYPE_1__ pm_stats; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct pvo_entry*) ;
 struct pvo_entry* FUNC_3 (int ,int *,struct pvo_entry*) ;
 struct pvo_entry* FUNC_4 (int ,int *,struct pvo_entry*) ;
 int FUNC_5 (struct pvo_dlist*) ;
 struct pvo_entry* FUNC_6 (struct pvo_dlist*) ;
 int FUNC_7 (struct pvo_dlist*) ;
 int FUNC_8 (struct pvo_dlist*,struct pvo_entry*,int ) ;
 int FUNC_9 (struct pvo_dlist*,int ) ;
 int FUNC_10 (struct pvo_entry*) ;
 int FUNC_11 (int ,struct pvo_entry*) ;
 int FUNC_12 (int ,struct pvo_entry*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_13(mmu_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{
 struct pvo_entry *VAR_6, *VAR_7, VAR_8;
 struct pvo_dlist VAR_9;




 if (VAR_3->pm_stats.resident_count == 0)
  return;

 VAR_8.pvo_vaddr = VAR_4;

 FUNC_7(&VAR_9);

 FUNC_0(VAR_3);
 for (VAR_6 = FUNC_4(VAR_1, &VAR_3->pmap_pvo, &VAR_8);
     VAR_6 != ((void*)0) && FUNC_2(VAR_6) < VAR_5; VAR_6 = VAR_7) {
  VAR_7 = FUNC_3(VAR_1, &VAR_3->pmap_pvo, VAR_6);






  FUNC_12(VAR_2, VAR_6);
  FUNC_8(&VAR_9, VAR_6, VAR_0);
 }
 FUNC_1(VAR_3);

 while (!FUNC_5(&VAR_9)) {
  VAR_6 = FUNC_6(&VAR_9);
  FUNC_9(&VAR_9, VAR_0);
  FUNC_11(VAR_2, VAR_6);
  FUNC_10(VAR_6);
 }
}
