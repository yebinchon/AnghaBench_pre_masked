
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {int emulation_required; TYPE_1__ rmode; } ;
struct TYPE_4__ {int efer; unsigned long cr0; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (unsigned long*,unsigned long,struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (int ,unsigned long) ;

void FUNC_9(struct kvm_vcpu *VAR_10, unsigned long VAR_11)
{
 struct vcpu_vmx *VAR_12 = FUNC_7(VAR_10);
 unsigned long VAR_13;

 VAR_13 = (VAR_11 & ~VAR_3);
 if (VAR_9)
  VAR_13 |= VAR_5;
 else {
  VAR_13 |= VAR_4;

  if (VAR_12->rmode.vm86_active && (VAR_11 & VAR_6))
   FUNC_2(VAR_10);

  if (!VAR_12->rmode.vm86_active && !(VAR_11 & VAR_6))
   FUNC_3(VAR_10);
 }
 if (VAR_8 && !VAR_9)
  FUNC_4(&VAR_13, VAR_11, VAR_10);

 FUNC_8(VAR_0, VAR_11);
 FUNC_8(VAR_2, VAR_13);
 VAR_10->arch.cr0 = VAR_11;


 VAR_12->emulation_required = FUNC_0(VAR_10);
}
