
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mmu_memory_cache {int dummy; } ;
struct TYPE_2__ {struct kvm_mmu_memory_cache mmu_pte_list_desc_cache; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_mmu_memory_cache*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct kvm_mmu_memory_cache *VAR_1;

 VAR_1 = &VAR_0->arch.mmu_pte_list_desc_cache;
 return FUNC_0(VAR_1);
}
