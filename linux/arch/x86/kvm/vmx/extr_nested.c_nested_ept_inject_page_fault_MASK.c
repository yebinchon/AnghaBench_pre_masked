
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {int error_code; int address; } ;
struct vmcs12 {int guest_physical_address; } ;
struct TYPE_4__ {int pml_full; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct TYPE_3__ {unsigned long exit_qualification; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ,unsigned long) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_5,
  struct x86_exception *VAR_6)
{
 struct vmcs12 *VAR_7 = FUNC_0(VAR_5);
 struct vcpu_vmx *VAR_8 = FUNC_2(VAR_5);
 u32 VAR_9;
 unsigned long VAR_10 = VAR_5->arch.exit_qualification;

 if (VAR_8->nested.pml_full) {
  VAR_9 = VAR_2;
  VAR_8->nested.pml_full = 0;
  VAR_10 &= VAR_3;
 } else if (VAR_6->error_code & VAR_4)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;

 FUNC_1(VAR_5, VAR_9, 0, VAR_10);
 VAR_7->guest_physical_address = VAR_6->address;
}
