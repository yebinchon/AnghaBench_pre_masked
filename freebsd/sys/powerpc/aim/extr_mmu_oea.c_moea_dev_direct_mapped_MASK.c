
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int mmu_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;

boolean_t
FUNC_1(mmu_t VAR_1, vm_paddr_t VAR_2, vm_size_t VAR_3)
{
 int VAR_4;






 for(VAR_4 = 0; VAR_4 < 16; VAR_4++)
  if (FUNC_0(VAR_4, VAR_2, VAR_3) == 0)
   return (0);

 return (VAR_0);
}
