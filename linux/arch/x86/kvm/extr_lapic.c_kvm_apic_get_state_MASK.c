
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* apic; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_lapic_state {int regs; } ;
struct TYPE_3__ {int regs; } ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_lapic_state*,int) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct kvm_vcpu *VAR_0, struct kvm_lapic_state *VAR_1)
{
 FUNC_1(VAR_1->regs, VAR_0->arch.apic->regs, sizeof(*VAR_1));
 return FUNC_0(VAR_0, VAR_1, 0);
}
