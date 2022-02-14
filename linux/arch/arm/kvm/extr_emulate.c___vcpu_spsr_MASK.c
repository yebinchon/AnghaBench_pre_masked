
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long KVM_ARM_SVC_spsr; unsigned long KVM_ARM_ABT_spsr; unsigned long KVM_ARM_UND_spsr; unsigned long KVM_ARM_IRQ_spsr; unsigned long KVM_ARM_FIQ_spsr; } ;
struct TYPE_5__ {TYPE_1__ gp_regs; } ;
struct TYPE_6__ {TYPE_2__ ctxt; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;



 int FUNC_0 () ;


 unsigned long VAR_0 ;


 unsigned long* FUNC_1 (struct kvm_vcpu*) ;

unsigned long *FUNC_2(struct kvm_vcpu *VAR_1)
{
 unsigned long VAR_2 = *FUNC_1(VAR_1) & VAR_0;
 switch (VAR_2) {
 case 129:
  return &VAR_1->arch.ctxt.gp_regs.KVM_ARM_SVC_spsr;
 case 132:
  return &VAR_1->arch.ctxt.gp_regs.KVM_ARM_ABT_spsr;
 case 128:
  return &VAR_1->arch.ctxt.gp_regs.KVM_ARM_UND_spsr;
 case 130:
  return &VAR_1->arch.ctxt.gp_regs.KVM_ARM_IRQ_spsr;
 case 131:
  return &VAR_1->arch.ctxt.gp_regs.KVM_ARM_FIQ_spsr;
 default:
  FUNC_0();
 }
}
