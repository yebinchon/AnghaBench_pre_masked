
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs12 {int dummy; } ;
struct TYPE_2__ {int vmcs02; int need_sync_vmcs02_to_vmcs12_rare; } ;
struct vcpu_vmx {int vcpu; int vmcs01; int * loaded_vmcs; TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*,struct vmcs12*) ;
 struct vcpu_vmx* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0,
           struct vmcs12 *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 if (!VAR_2->nested.need_sync_vmcs02_to_vmcs12_rare)
  return;


 FUNC_0(VAR_2->loaded_vmcs != &VAR_2->vmcs01);

 VAR_3 = FUNC_1();
 VAR_2->loaded_vmcs = &VAR_2->nested.vmcs02;
 FUNC_5(&VAR_2->vcpu, VAR_3);

 FUNC_3(VAR_0, VAR_1);

 VAR_2->loaded_vmcs = &VAR_2->vmcs01;
 FUNC_5(&VAR_2->vcpu, VAR_3);
 FUNC_2();
}
