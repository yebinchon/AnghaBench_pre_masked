
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_book3s {int mmu_lock; int hpte_cache_count; } ;
struct kvm_vcpu {int dummy; } ;
struct hpte_cache {int rcu_head; int list_vpte_64k; int list_vpte_long; int list_vpte; int list_pte_long; int list_pte; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct kvm_vcpu*,struct hpte_cache*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct kvmppc_vcpu_book3s* FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct hpte_cache*) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_1, struct hpte_cache *VAR_2)
{
 struct kvmppc_vcpu_book3s *VAR_3 = FUNC_6(VAR_1);

 FUNC_7(VAR_2);


 FUNC_3(VAR_1, VAR_2);

 FUNC_4(&VAR_3->mmu_lock);


 if (FUNC_2(&VAR_2->list_pte)) {
  FUNC_5(&VAR_3->mmu_lock);
  return;
 }

 FUNC_1(&VAR_2->list_pte);
 FUNC_1(&VAR_2->list_pte_long);
 FUNC_1(&VAR_2->list_vpte);
 FUNC_1(&VAR_2->list_vpte_long);



 VAR_3->hpte_cache_count--;

 FUNC_5(&VAR_3->mmu_lock);

 FUNC_0(&VAR_2->rcu_head, VAR_0);
}
