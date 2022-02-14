
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int guest_mmu; int root_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->arch.root_mmu);
 FUNC_0(&VAR_0->arch.guest_mmu);
 FUNC_2(VAR_0);
}
