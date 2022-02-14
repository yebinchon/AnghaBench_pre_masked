
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pte_t ;
typedef int pmap_t ;
typedef int mmu_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ,int ,int) ;

__attribute__((used)) static vm_paddr_t
FUNC_3(mmu_t VAR_1, pmap_t VAR_2, vm_offset_t VAR_3)
{
 vm_paddr_t VAR_4 = 0;
 pte_t *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if ((VAR_5 != ((void*)0)) && FUNC_0(VAR_5))
  VAR_4 = (FUNC_1(VAR_5) | (VAR_3 & VAR_0));
 return (VAR_4);
}
