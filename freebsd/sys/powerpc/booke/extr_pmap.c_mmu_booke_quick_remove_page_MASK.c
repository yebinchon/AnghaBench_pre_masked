
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pte_t ;
typedef int mmu_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__* FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(mmu_t VAR_2, vm_offset_t VAR_3)
{

 pte_t *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_0, VAR_3);

 FUNC_0(FUNC_1(VAR_1) == VAR_3,
     ("mmu_booke_quick_remove_page: invalid address"));
 FUNC_0(*VAR_4 != 0,
     ("mmu_booke_quick_remove_page: PTE not in use"));

 *VAR_4 = 0;
 FUNC_2();

}
