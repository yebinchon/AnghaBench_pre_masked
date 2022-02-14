
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(mmu_t VAR_5, vm_page_t VAR_6)
{
 vm_paddr_t VAR_7 = FUNC_1(VAR_6);
 vm_offset_t VAR_8, VAR_9;

 if (!VAR_2) {
  FUNC_3(&VAR_3);

  FUNC_2(VAR_5, 0, VAR_7);
  VAR_8 = VAR_4[0];
 } else {
  VAR_8 = FUNC_0(VAR_7);
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9 += VAR_1)
  __asm __volatile("dcbz 0,%0" :: "r"(VAR_8 + VAR_9));

 if (!VAR_2)
  FUNC_4(&VAR_3);
}
