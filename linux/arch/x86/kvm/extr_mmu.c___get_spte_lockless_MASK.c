
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union split_spte {scalar_t__ spte_low; int spte; int spte_high; } ;
typedef int u64 ;
struct kvm_mmu_page {int clear_spte_count; } ;


 int FUNC_0 (int *) ;
 struct kvm_mmu_page* FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u64 FUNC_4(u64 *VAR_0)
{
 struct kvm_mmu_page *VAR_1 = FUNC_1(FUNC_0(VAR_0));
 union split_spte VAR_2, *VAR_3 = (union split_spte *)VAR_0;
 int VAR_4;

retry:
 VAR_4 = VAR_1->clear_spte_count;
 FUNC_2();

 VAR_2.spte_low = VAR_3->spte_low;
 FUNC_2();

 VAR_2.spte_high = VAR_3->spte_high;
 FUNC_2();

 if (FUNC_3(VAR_2.spte_low != VAR_3->spte_low ||
       VAR_4 != VAR_1->clear_spte_count))
  goto retry;

 return VAR_2.spte;
}
