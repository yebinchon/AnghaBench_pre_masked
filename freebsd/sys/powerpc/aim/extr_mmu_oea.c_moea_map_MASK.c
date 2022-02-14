
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

vm_offset_t
FUNC_1(mmu_t VAR_1, vm_offset_t *VAR_2, vm_paddr_t VAR_3,
    vm_paddr_t VAR_4, int VAR_5)
{
 vm_offset_t VAR_6, VAR_7;

 VAR_6 = *VAR_2;
 VAR_7 = VAR_6;
 for (; VAR_3 < VAR_4; VAR_3 += VAR_0, VAR_7 += VAR_0)
  FUNC_0(VAR_1, VAR_7, VAR_3);
 *VAR_2 = VAR_7;
 return (VAR_6);
}
