
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_mmu_page {int parent_ptes; } ;


 int FUNC_0 (struct kvm_vcpu*,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0,
        struct kvm_mmu_page *VAR_1, u64 *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_0(VAR_0, VAR_2, &VAR_1->parent_ptes);
}
