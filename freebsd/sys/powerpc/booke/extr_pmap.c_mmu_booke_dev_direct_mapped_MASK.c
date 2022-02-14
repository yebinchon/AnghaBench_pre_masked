
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int mmu_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(mmu_t VAR_2, vm_paddr_t VAR_3, vm_size_t VAR_4)
{
 int VAR_5;
 vm_offset_t VAR_6;





 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++) {
  if (FUNC_0(VAR_5, VAR_3, VAR_4, &VAR_6) == 0)
   return (0);
 }

 return (VAR_0);
}
