
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {struct loaded_vmcs* loaded_vmcs; } ;
struct loaded_vmcs {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct vcpu_vmx*) ;
 int FUNC_4 (struct vcpu_vmx*,struct loaded_vmcs*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0, struct loaded_vmcs *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_2(VAR_0);
 struct loaded_vmcs *VAR_3;
 int VAR_4;

 if (VAR_2->loaded_vmcs == VAR_1)
  return;

 VAR_4 = FUNC_0();
 VAR_3 = VAR_2->loaded_vmcs;
 VAR_2->loaded_vmcs = VAR_1;
 FUNC_5(VAR_0, VAR_4);
 FUNC_4(VAR_2, VAR_3);
 FUNC_1();

 FUNC_3(VAR_2);
}
