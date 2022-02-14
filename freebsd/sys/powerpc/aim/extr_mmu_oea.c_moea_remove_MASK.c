
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct pvo_entry {scalar_t__ pvo_vaddr; } ;
typedef TYPE_1__* pmap_t ;
typedef int mmu_t ;
struct TYPE_5__ {int pmap_pvo; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct pvo_entry*) ;
 struct pvo_entry* FUNC_3 (int ,int *,struct pvo_entry*) ;
 struct pvo_entry* FUNC_4 (int ,int *,struct pvo_entry*) ;
 int FUNC_5 (struct pvo_entry*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(mmu_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{
 struct pvo_entry *VAR_6, *VAR_7, VAR_8;

 FUNC_6(&VAR_0);
 FUNC_0(VAR_3);
 VAR_8.pvo_vaddr = VAR_4;
 for (VAR_6 = FUNC_4(VAR_1, &VAR_3->pmap_pvo, &VAR_8);
     VAR_6 != ((void*)0) && FUNC_2(VAR_6) < VAR_5; VAR_6 = VAR_7) {
  VAR_7 = FUNC_3(VAR_1, &VAR_3->pmap_pvo, VAR_6);
  FUNC_5(VAR_6, -1);
 }
 FUNC_1(VAR_3);
 FUNC_7(&VAR_0);
}
