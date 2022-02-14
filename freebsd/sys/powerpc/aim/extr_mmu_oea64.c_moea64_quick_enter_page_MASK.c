
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef struct pvo_entry* vm_offset_t ;
typedef int uint64_t ;
struct TYPE_3__ {int pa; } ;
struct pvo_entry {TYPE_1__ pvo_pte; } ;
typedef int mmu_t ;
struct TYPE_4__ {int qmap_lock; int qmap_pvo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pvo_entry*,int ) ;
 struct pvo_entry* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pvo_entry* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 () ;

vm_offset_t
FUNC_11(mmu_t VAR_5, vm_page_t VAR_6)
{
 struct pvo_entry *VAR_7;
 vm_paddr_t VAR_8 = FUNC_4(VAR_6);

 if (VAR_3)
  return (FUNC_3(VAR_8));







 FUNC_10();

 FUNC_7(FUNC_2(VAR_2.qmap_lock), VAR_0);
 VAR_7 = FUNC_1(VAR_2.qmap_pvo);

 FUNC_8(FUNC_2(VAR_2.qmap_lock));
 VAR_7->pvo_pte.pa = FUNC_6(VAR_8, FUNC_9(VAR_6)) |
     (uint64_t)VAR_8;
 FUNC_0(VAR_5, VAR_7, VAR_1);
 FUNC_5();

 return (FUNC_1(VAR_4));
}
