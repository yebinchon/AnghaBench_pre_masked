
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int mmu_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static vm_offset_t
FUNC_3(mmu_t VAR_2, vm_offset_t *VAR_3, vm_paddr_t VAR_4,
    vm_paddr_t VAR_5, int VAR_6)
{
 vm_offset_t VAR_7 = *VAR_3;
 vm_offset_t VAR_8 = VAR_7;







 while (VAR_4 < VAR_5) {
  FUNC_2(VAR_2, VAR_8, VAR_4);
  VAR_8 += VAR_1;
  VAR_4 += VAR_1;
 }
 *VAR_3 = VAR_8;

 return (VAR_7);
}
