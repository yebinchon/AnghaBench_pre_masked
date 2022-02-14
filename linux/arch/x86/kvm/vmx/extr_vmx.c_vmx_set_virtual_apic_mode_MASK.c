
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int change_vmcs01_virtual_apic_mode; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct vcpu_vmx*) ;
 int FUNC_6 (struct vcpu_vmx*,int) ;
 struct vcpu_vmx* FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (struct kvm_vcpu*) ;

void FUNC_10(struct kvm_vcpu *VAR_3)
{
 struct vcpu_vmx *VAR_4 = FUNC_7(VAR_3);
 u32 VAR_5;

 if (!FUNC_4(VAR_3))
  return;

 if (!VAR_2 &&
     !FUNC_1())
  return;


 if (FUNC_2(VAR_3)) {
  VAR_4->nested.change_vmcs01_virtual_apic_mode = 1;
  return;
 }

 VAR_5 = FUNC_5(VAR_4);
 VAR_5 &= ~(VAR_0 |
         VAR_1);

 switch (FUNC_3(VAR_3)) {
 case 130:
  FUNC_0(1, "Invalid local APIC state");
 case 131:
  break;
 case 128:
  if (VAR_2) {
   VAR_5 |=
    VAR_0;
   FUNC_8(VAR_3, 1);
  }
  break;
 case 129:
  if (FUNC_1())
   VAR_5 |=
    VAR_1;
  break;
 }
 FUNC_6(VAR_4, VAR_5);

 FUNC_9(VAR_3);
}
