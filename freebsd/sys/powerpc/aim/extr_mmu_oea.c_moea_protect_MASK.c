
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
struct TYPE_14__ {int pte_lo; } ;
struct TYPE_12__ {TYPE_5__ pte; } ;
struct pvo_entry {scalar_t__ pvo_vaddr; TYPE_2__ pvo_pte; } ;
struct pte {int dummy; } ;
typedef TYPE_3__* pmap_t ;
typedef int mmu_t ;
struct TYPE_15__ {TYPE_1__* p_vmspace; } ;
struct TYPE_13__ {int pmap_pvo; } ;
struct TYPE_11__ {TYPE_3__ vm_pmap; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct pvo_entry*) ;
 struct pvo_entry* FUNC_4 (int ,int *,struct pvo_entry*) ;
 struct pvo_entry* FUNC_5 (int ,int *,struct pvo_entry*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_6 (struct pte*,TYPE_5__*,scalar_t__) ;
 struct pte* FUNC_7 (struct pvo_entry*,int) ;
 int FUNC_8 (int ,TYPE_3__*,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void
FUNC_12(mmu_t VAR_9, pmap_t VAR_10, vm_offset_t VAR_11, vm_offset_t VAR_12,
    vm_prot_t VAR_13)
{
 struct pvo_entry *VAR_14, *VAR_15, VAR_16;
 struct pte *VAR_17;

 FUNC_0(VAR_10 == &VAR_4->p_vmspace->vm_pmap || VAR_10 == VAR_5,
     ("moea_protect: non current pmap"));

 if ((VAR_13 & VAR_3) == VAR_2) {
  FUNC_8(VAR_9, VAR_10, VAR_11, VAR_12);
  return;
 }

 FUNC_10(&VAR_7);
 FUNC_1(VAR_10);
 VAR_16.pvo_vaddr = VAR_11;
 for (VAR_14 = FUNC_5(VAR_8, &VAR_10->pmap_pvo, &VAR_16);
     VAR_14 != ((void*)0) && FUNC_3(VAR_14) < VAR_12; VAR_14 = VAR_15) {
  VAR_15 = FUNC_4(VAR_8, &VAR_10->pmap_pvo, VAR_14);





  VAR_17 = FUNC_7(VAR_14, -1);



  VAR_14->pvo_pte.pte.pte_lo &= ~VAR_1;
  VAR_14->pvo_pte.pte.pte_lo |= VAR_0;




  if (VAR_17 != ((void*)0)) {
   FUNC_6(VAR_17, &VAR_14->pvo_pte.pte, VAR_14->pvo_vaddr);
   FUNC_9(&VAR_6);
  }
 }
 FUNC_11(&VAR_7);
 FUNC_2(VAR_10);
}
