
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

vm_offset_t
FUNC_3(mmu_t VAR_4, vm_offset_t *VAR_5, vm_paddr_t VAR_6,
    vm_paddr_t VAR_7, int VAR_8)
{
 vm_offset_t VAR_9, VAR_10;

 if (VAR_3) {






  for (VAR_10 = VAR_6; VAR_10 < VAR_7; VAR_10 += VAR_1)
   if (FUNC_1(VAR_10, VAR_2) != VAR_0)
    break;
  if (VAR_10 == VAR_7)
   return (FUNC_0(VAR_6));
 }
 VAR_9 = *VAR_5;
 VAR_10 = VAR_9;

 for (; VAR_6 < VAR_7; VAR_6 += VAR_1, VAR_10 += VAR_1)
  FUNC_2(VAR_4, VAR_10, VAR_6);
 *VAR_5 = VAR_10;

 return (VAR_9);
}
