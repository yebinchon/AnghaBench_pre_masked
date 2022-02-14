
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct TYPE_3__ {int mas1; scalar_t__ virt; scalar_t__ size; scalar_t__ phys; } ;
typedef TYPE_1__ tlb_entry_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static vm_paddr_t
FUNC_3(mmu_t VAR_7, vm_offset_t VAR_8)
{
 tlb_entry_t VAR_9;
 vm_paddr_t VAR_10 = 0;
 int VAR_11;






 if (VAR_8 >= VAR_5 && VAR_8 <= VAR_4)
  VAR_10 = FUNC_1(VAR_7, VAR_6, VAR_8);

 if (VAR_10 == 0) {

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   FUNC_2(&VAR_9, VAR_11);
   if (!(VAR_9.mas1 & VAR_2))
    continue;
   if (VAR_8 >= VAR_9.virt && VAR_8 < VAR_9.virt + VAR_9.size)
    return (VAR_9.phys + (VAR_8 - VAR_9.virt));
  }
 }

 return (VAR_10);
}
