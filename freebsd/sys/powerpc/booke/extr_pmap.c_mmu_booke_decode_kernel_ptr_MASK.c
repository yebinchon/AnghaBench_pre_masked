
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(mmu_t VAR_1, vm_offset_t VAR_2, int *VAR_3,
    vm_offset_t *VAR_4)
{

 if (FUNC_0(VAR_2) <= VAR_0)
  *VAR_3 = 1;
 else
  *VAR_3 = 0;

 *VAR_4 = VAR_2;
 return (0);
}
