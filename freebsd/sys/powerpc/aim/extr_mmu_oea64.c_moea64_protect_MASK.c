
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
struct pvo_entry {scalar_t__ pvo_vaddr; } ;
typedef TYPE_2__* pmap_t ;
typedef int mmu_t ;
struct TYPE_13__ {TYPE_1__* p_vmspace; } ;
struct TYPE_12__ {int pmap_pvo; } ;
struct TYPE_11__ {TYPE_2__ vm_pmap; } ;


 int FUNC_0 (int ,char*,TYPE_2__*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct pvo_entry*) ;
 struct pvo_entry* FUNC_5 (int ,int *,struct pvo_entry*) ;
 struct pvo_entry* FUNC_6 (int ,int *,struct pvo_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_7 (int ,TYPE_2__*,struct pvo_entry*,int) ;
 int FUNC_8 (int ,TYPE_2__*,scalar_t__,scalar_t__) ;
 int VAR_5 ;

void
FUNC_9(mmu_t VAR_6, pmap_t VAR_7, vm_offset_t VAR_8, vm_offset_t VAR_9,
    vm_prot_t VAR_10)
{
 struct pvo_entry *VAR_11, *VAR_12, VAR_13;

 FUNC_0(VAR_0, "moea64_protect: pm=%p sva=%#x eva=%#x prot=%#x", VAR_7,
     VAR_8, VAR_9, VAR_10);

 FUNC_1(VAR_7 == &VAR_3->p_vmspace->vm_pmap || VAR_7 == VAR_4,
     ("moea64_protect: non current pmap"));

 if ((VAR_10 & VAR_2) == VAR_1) {
  FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9);
  return;
 }

 FUNC_2(VAR_7);
 VAR_13.pvo_vaddr = VAR_8;
 for (VAR_11 = FUNC_6(VAR_5, &VAR_7->pmap_pvo, &VAR_13);
     VAR_11 != ((void*)0) && FUNC_4(VAR_11) < VAR_9; VAR_11 = VAR_12) {
  VAR_12 = FUNC_5(VAR_5, &VAR_7->pmap_pvo, VAR_11);
  FUNC_7(VAR_6, VAR_7, VAR_11, VAR_10);
 }
 FUNC_3(VAR_7);
}
