
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct TYPE_3__ {int pte_lo; } ;
struct TYPE_4__ {TYPE_1__ pte; } ;
struct pvo_entry {TYPE_2__ pvo_pte; } ;
typedef int mmu_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pvo_entry* FUNC_3 (int ,int,int *) ;

vm_paddr_t
FUNC_4(mmu_t VAR_4, vm_offset_t VAR_5)
{
 struct pvo_entry *VAR_6;
 vm_paddr_t VAR_7;




 if (VAR_5 < VAR_2) {
  return (VAR_5);
 }

 FUNC_1(VAR_3);
 VAR_6 = FUNC_3(VAR_3, VAR_5 & ~VAR_0, ((void*)0));
 FUNC_0(VAR_6 != ((void*)0), ("moea_kextract: no addr found"));
 VAR_7 = (VAR_6->pvo_pte.pte.pte_lo & VAR_1) | (VAR_5 & VAR_0);
 FUNC_2(VAR_3);
 return (VAR_7);
}
