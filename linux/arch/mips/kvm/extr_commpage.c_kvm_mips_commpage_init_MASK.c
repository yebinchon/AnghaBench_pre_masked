
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cop0; struct kvm_mips_commpage* kseg0_commpage; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mips_commpage {int cop0; } ;



void FUNC_0(struct kvm_vcpu *VAR_0)
{
 struct kvm_mips_commpage *VAR_1 = VAR_0->arch.kseg0_commpage;


 VAR_0->arch.cop0 = &VAR_1->cop0;
}
