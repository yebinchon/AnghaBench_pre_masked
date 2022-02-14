
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root_mmu; int * walk_mmu; int * mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0)
{
 VAR_0->arch.mmu = &VAR_0->arch.root_mmu;
 VAR_0->arch.walk_mmu = &VAR_0->arch.root_mmu;
}
