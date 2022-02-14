
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct TYPE_3__ {int pte_lo; } ;
struct TYPE_4__ {TYPE_1__ pte; } ;
struct pvo_entry {TYPE_2__ pvo_pte; } ;
typedef int pmap_t ;
typedef int mmu_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct pvo_entry* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(mmu_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4, vm_size_t VAR_5)
{
 struct pvo_entry *VAR_6;
 vm_offset_t VAR_7;
 vm_paddr_t VAR_8;
 vm_size_t VAR_9;

 FUNC_1(VAR_3);
 while (VAR_5 > 0) {
  VAR_7 = FUNC_5(VAR_4);
  VAR_9 = FUNC_0(VAR_7 - VAR_4, VAR_5);
  VAR_6 = FUNC_3(VAR_3, VAR_4 & ~VAR_0, ((void*)0));
  if (VAR_6 != ((void*)0)) {
   VAR_8 = (VAR_6->pvo_pte.pte.pte_lo & VAR_1) |
       (VAR_4 & VAR_0);
   FUNC_4(VAR_8, VAR_9);
  }
  VAR_4 += VAR_9;
  VAR_5 -= VAR_9;
 }
 FUNC_2(VAR_3);
}
