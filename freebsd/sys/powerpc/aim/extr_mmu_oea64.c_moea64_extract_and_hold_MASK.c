
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_offset_t ;
struct TYPE_2__ {int prot; int pa; } ;
struct pvo_entry {TYPE_1__ pvo_pte; } ;
typedef int pmap_t ;
typedef int mmu_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pvo_entry* FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

vm_page_t
FUNC_5(mmu_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4, vm_prot_t VAR_5)
{
 struct pvo_entry *VAR_6;
 vm_page_t VAR_7;

 VAR_7 = ((void*)0);
 FUNC_1(VAR_3);
 VAR_6 = FUNC_3(VAR_3, VAR_4 & ~VAR_0);
 if (VAR_6 != ((void*)0) && (VAR_6->pvo_pte.prot & VAR_5) == VAR_5) {
  VAR_7 = FUNC_0(VAR_6->pvo_pte.pa & VAR_1);
  if (!FUNC_4(VAR_7))
   VAR_7 = ((void*)0);
 }
 FUNC_2(VAR_3);
 return (VAR_7);
}
