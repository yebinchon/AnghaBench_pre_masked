
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int) ;

void
FUNC_2(mmu_t VAR_0, vm_page_t VAR_1, int VAR_2, int VAR_3)
{
 vm_offset_t VAR_4 = FUNC_0(VAR_1);
 void *VAR_5 = (void *)(VAR_4 + VAR_2);

 FUNC_1(VAR_5, VAR_3);
}
