
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int vm_memattr_t ;
typedef int uintmax_t ;
struct TYPE_2__ {int prot; int pa; } ;
struct pvo_entry {int pvo_vaddr; TYPE_1__ pvo_pte; } ;
typedef int mmu_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pvo_entry* FUNC_2 (int ) ;
 int FUNC_3 (struct pvo_entry*) ;
 int FUNC_4 (struct pvo_entry*,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,struct pvo_entry*,int *,int *) ;
 struct pvo_entry* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct pvo_entry*) ;
 int FUNC_9 (int ,struct pvo_entry*) ;
 int FUNC_10 (char*,int ,int ,int) ;
 int FUNC_11 (int *) ;

void
FUNC_12(mmu_t VAR_7, vm_offset_t VAR_8, vm_paddr_t VAR_9, vm_memattr_t VAR_10)
{
 int VAR_11;
 struct pvo_entry *VAR_12, *VAR_13;

 do {
  VAR_12 = FUNC_2(0);
  if (VAR_12 == ((void*)0))
   FUNC_11(((void*)0));
 } while (VAR_12 == ((void*)0));
 VAR_12->pvo_pte.prot = VAR_4 | VAR_5 | VAR_3;
 VAR_12->pvo_pte.pa = (VAR_9 & ~VAR_0) | FUNC_5(VAR_9, VAR_10);
 VAR_12->pvo_vaddr |= VAR_2;

 FUNC_0(VAR_6);
 VAR_13 = FUNC_7(VAR_6, VAR_8);
 if (VAR_13 != ((void*)0))
  FUNC_9(VAR_7, VAR_13);
 FUNC_4(VAR_12, VAR_6, VAR_8);
 VAR_11 = FUNC_6(VAR_7, VAR_12, ((void*)0), ((void*)0));
 FUNC_1(VAR_6);


 if (VAR_13 != ((void*)0)) {
  FUNC_8(VAR_7, VAR_13);
  FUNC_3(VAR_13);
 }

 if (VAR_11 != 0 && VAR_11 != VAR_1)
  FUNC_10("moea64_kenter: failed to enter va %#zx pa %#jx: %d", VAR_8,
      (uintmax_t)VAR_9, VAR_11);
}
