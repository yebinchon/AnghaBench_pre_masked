
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_offset_t ;
struct TYPE_3__ {int pte_hi; int pte_lo; } ;
struct TYPE_4__ {TYPE_1__ pte; } ;
struct pvo_entry {TYPE_2__ pvo_pte; } ;
typedef int pmap_t ;
typedef int mmu_t ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pvo_entry* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int *) ;

vm_page_t
FUNC_5(mmu_t VAR_6, pmap_t VAR_7, vm_offset_t VAR_8, vm_prot_t VAR_9)
{
 struct pvo_entry *VAR_10;
 vm_page_t VAR_11;

 VAR_11 = ((void*)0);
 FUNC_1(VAR_7);
 VAR_10 = FUNC_3(VAR_7, VAR_8 & ~VAR_0, ((void*)0));
 if (VAR_10 != ((void*)0) && (VAR_10->pvo_pte.pte.pte_hi & VAR_4) &&
     ((VAR_10->pvo_pte.pte.pte_lo & VAR_1) == VAR_3 ||
      (VAR_9 & VAR_5) == 0)) {
  VAR_11 = FUNC_0(VAR_10->pvo_pte.pte.pte_lo & VAR_2);
  if (!FUNC_4(VAR_11))
   VAR_11 = ((void*)0);
 }
 FUNC_2(VAR_7);
 return (VAR_11);
}
