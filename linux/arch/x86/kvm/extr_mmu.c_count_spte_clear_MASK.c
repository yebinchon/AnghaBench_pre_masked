
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_mmu_page {int clear_spte_count; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct kvm_mmu_page* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(u64 *VAR_0, u64 VAR_1)
{
 struct kvm_mmu_page *VAR_2 = FUNC_2(FUNC_0(VAR_0));

 if (FUNC_1(VAR_1))
  return;


 FUNC_3();
 VAR_2->clear_spte_count++;
}
