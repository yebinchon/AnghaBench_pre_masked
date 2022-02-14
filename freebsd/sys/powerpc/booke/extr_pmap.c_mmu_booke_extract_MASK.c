
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pmap_t ;
typedef int mmu_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static vm_paddr_t
FUNC_3(mmu_t VAR_0, pmap_t VAR_1, vm_offset_t VAR_2)
{
 vm_paddr_t VAR_3;

 FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_1);

 return (VAR_3);
}
