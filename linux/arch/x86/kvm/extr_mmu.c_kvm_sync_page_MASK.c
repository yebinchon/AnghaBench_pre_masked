
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kvm_vcpu {int kvm; } ;
struct kvm_mmu_page {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_mmu_page*,struct list_head*) ;
 int FUNC_1 (int ,struct kvm_mmu_page*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0, struct kvm_mmu_page *VAR_1,
    struct list_head *VAR_2)
{
 FUNC_1(VAR_0->kvm, VAR_1);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
