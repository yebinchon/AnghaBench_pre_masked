
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct kvmppc_vcpu_book3s {int mmu_lock; int hpte_cache_count; int * hpte_hash_vpte_64k; int * hpte_hash_vpte_long; int * hpte_hash_vpte; int * hpte_hash_pte_long; int * hpte_hash_pte; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int vpage; int eaddr; } ;
struct hpte_cache {int list_vpte_64k; TYPE_1__ pte; int list_vpte_long; int list_vpte; int list_pte_long; int list_pte; } ;


 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct kvmppc_vcpu_book3s* FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct hpte_cache*) ;

void FUNC_10(struct kvm_vcpu *VAR_0, struct hpte_cache *VAR_1)
{
 u64 VAR_2;
 struct kvmppc_vcpu_book3s *VAR_3 = FUNC_8(VAR_0);

 FUNC_9(VAR_1);

 FUNC_6(&VAR_3->mmu_lock);


 VAR_2 = FUNC_1(VAR_1->pte.eaddr);
 FUNC_0(&VAR_1->list_pte, &VAR_3->hpte_hash_pte[VAR_2]);


 VAR_2 = FUNC_2(VAR_1->pte.eaddr);
 FUNC_0(&VAR_1->list_pte_long,
      &VAR_3->hpte_hash_pte_long[VAR_2]);


 VAR_2 = FUNC_3(VAR_1->pte.vpage);
 FUNC_0(&VAR_1->list_vpte, &VAR_3->hpte_hash_vpte[VAR_2]);


 VAR_2 = FUNC_5(VAR_1->pte.vpage);
 FUNC_0(&VAR_1->list_vpte_long,
      &VAR_3->hpte_hash_vpte_long[VAR_2]);
 VAR_3->hpte_cache_count++;

 FUNC_7(&VAR_3->mmu_lock);
}
