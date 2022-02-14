
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct TYPE_5__ {int pa; } ;
struct pvo_entry {TYPE_1__ pvo_pte; scalar_t__ pvo_vaddr; } ;
typedef int mmu_t ;
typedef int boolean_t ;
struct TYPE_6__ {int pmap_pvo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct pvo_entry* FUNC_2 (int ,int *,struct pvo_entry*) ;
 struct pvo_entry* FUNC_3 (int ,int *,struct pvo_entry*) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_4 (int,int) ;
 int VAR_7 ;

boolean_t
FUNC_5(mmu_t VAR_8, vm_paddr_t VAR_9, vm_size_t VAR_10)
{
 struct pvo_entry *VAR_11, VAR_12;
 vm_offset_t VAR_13;
 int VAR_14 = 0;

 if (VAR_5 && FUNC_4(VAR_9, VAR_10) == 0)
  return (0);

 FUNC_0(VAR_6);
 VAR_13 = VAR_9 & ~VAR_0;
 VAR_12.pvo_vaddr = VAR_1 + VAR_13;
 for (VAR_11 = FUNC_2(VAR_7, &VAR_6->pmap_pvo, &VAR_12);
     VAR_13 < VAR_9 + VAR_10; VAR_13 += VAR_4,
     VAR_11 = FUNC_3(VAR_7, &VAR_6->pmap_pvo, VAR_11)) {
  if (VAR_11 == ((void*)0) || (VAR_11->pvo_pte.pa & VAR_3) != VAR_13) {
   VAR_14 = VAR_2;
   break;
  }
 }
 FUNC_1(VAR_6);

 return (VAR_14);
}
