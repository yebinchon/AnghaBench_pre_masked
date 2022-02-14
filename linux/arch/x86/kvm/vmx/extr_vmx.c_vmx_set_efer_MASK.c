
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vcpu_vmx {int dummy; } ;
struct shared_msr_entry {int data; } ;
struct TYPE_2__ {int efer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct shared_msr_entry* FUNC_0 (struct vcpu_vmx*,int ) ;
 int FUNC_1 (struct vcpu_vmx*) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct vcpu_vmx*,int ) ;
 int FUNC_4 (struct vcpu_vmx*,int ) ;

void FUNC_5(struct kvm_vcpu *VAR_4, u64 VAR_5)
{
 struct vcpu_vmx *VAR_6 = FUNC_2(VAR_4);
 struct shared_msr_entry *VAR_7 = FUNC_0(VAR_6, VAR_2);

 if (!VAR_7)
  return;

 VAR_4->arch.efer = VAR_5;
 if (VAR_5 & VAR_0) {
  FUNC_4(FUNC_2(VAR_4), VAR_3);
  VAR_7->data = VAR_5;
 } else {
  FUNC_3(FUNC_2(VAR_4), VAR_3);

  VAR_7->data = VAR_5 & ~VAR_1;
 }
 FUNC_1(VAR_6);
}
