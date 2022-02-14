
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_book3s {int mmu_lock; int hpte_hash_vpte_64k; int hpte_hash_vpte_long; int hpte_hash_vpte; int hpte_hash_pte_long; int hpte_hash_pte; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 struct kvmppc_vcpu_book3s* FUNC_3 (struct kvm_vcpu*) ;

int FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct kvmppc_vcpu_book3s *VAR_1 = FUNC_3(VAR_0);


 FUNC_1(VAR_1->hpte_hash_pte,
      FUNC_0(VAR_1->hpte_hash_pte));
 FUNC_1(VAR_1->hpte_hash_pte_long,
      FUNC_0(VAR_1->hpte_hash_pte_long));
 FUNC_1(VAR_1->hpte_hash_vpte,
      FUNC_0(VAR_1->hpte_hash_vpte));
 FUNC_1(VAR_1->hpte_hash_vpte_long,
      FUNC_0(VAR_1->hpte_hash_vpte_long));





 FUNC_2(&VAR_1->mmu_lock);

 return 0;
}
