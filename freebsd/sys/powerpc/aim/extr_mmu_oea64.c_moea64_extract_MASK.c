
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct TYPE_2__ {int pa; } ;
struct pvo_entry {TYPE_1__ pvo_pte; } ;
typedef int pmap_t ;
typedef int mmu_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvo_entry*) ;
 struct pvo_entry* FUNC_3 (int ,int) ;

vm_paddr_t
FUNC_4(mmu_t VAR_1, pmap_t VAR_2, vm_offset_t VAR_3)
{
 struct pvo_entry *VAR_4;
 vm_paddr_t VAR_5;

 FUNC_0(VAR_2);
 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  VAR_5 = 0;
 else
  VAR_5 = (VAR_4->pvo_pte.pa & VAR_0) | (VAR_3 - FUNC_2(VAR_4));
 FUNC_1(VAR_2);

 return (VAR_5);
}
