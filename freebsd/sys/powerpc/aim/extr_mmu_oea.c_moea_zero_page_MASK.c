
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

void
FUNC_1(mmu_t VAR_2, vm_page_t VAR_3)
{
 vm_offset_t VAR_4, VAR_5 = FUNC_0(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += VAR_1)
  __asm __volatile("dcbz 0,%0" :: "r"(VAR_5 + VAR_4));
}
