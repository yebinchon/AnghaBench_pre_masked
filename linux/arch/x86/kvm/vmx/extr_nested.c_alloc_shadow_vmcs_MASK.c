
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs {int dummy; } ;
struct loaded_vmcs {struct vmcs* shadow_vmcs; } ;
struct vcpu_vmx {struct loaded_vmcs vmcs01; struct loaded_vmcs* loaded_vmcs; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int) ;
 struct vmcs* FUNC_1 (int) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct vmcs*) ;

__attribute__((used)) static struct vmcs *FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct vcpu_vmx *VAR_1 = FUNC_2(VAR_0);
 struct loaded_vmcs *VAR_2 = VAR_1->loaded_vmcs;







 FUNC_0(VAR_2 == &VAR_1->vmcs01 && VAR_2->shadow_vmcs);

 if (!VAR_2->shadow_vmcs) {
  VAR_2->shadow_vmcs = FUNC_1(1);
  if (VAR_2->shadow_vmcs)
   FUNC_3(VAR_2->shadow_vmcs);
 }
 return VAR_2->shadow_vmcs;
}
