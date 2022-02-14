
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmcs12 {int vm_function_control; } ;
struct vcpu_vmx {int exit_reason; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,struct vmcs12*) ;
 int FUNC_6 (struct kvm_vcpu*,int ,int ,int ) ;
 struct vcpu_vmx* FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct kvm_vcpu *VAR_3)
{
 struct vcpu_vmx *VAR_4 = FUNC_7(VAR_3);
 struct vmcs12 *VAR_5;
 u32 VAR_6 = FUNC_3(VAR_3);






 if (!FUNC_1(VAR_3)) {
  FUNC_2(VAR_3, VAR_1);
  return 1;
 }

 VAR_5 = FUNC_0(VAR_3);
 if ((VAR_5->vm_function_control & (1 << VAR_6)) == 0)
  goto fail;

 switch (VAR_6) {
 case 0:
  if (FUNC_5(VAR_3, VAR_5))
   goto fail;
  break;
 default:
  goto fail;
 }
 return FUNC_4(VAR_3);

fail:
 FUNC_6(VAR_3, VAR_4->exit_reason,
     FUNC_8(VAR_2),
     FUNC_9(VAR_0));
 return 1;
}
