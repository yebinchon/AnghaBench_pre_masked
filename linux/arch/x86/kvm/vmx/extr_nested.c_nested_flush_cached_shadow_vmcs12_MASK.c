
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs12 {unsigned long long vmcs_link_pointer; } ;
struct TYPE_2__ {int kvm; } ;
struct vcpu_vmx {TYPE_1__ vcpu; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,unsigned long long,int ,int ) ;
 int FUNC_2 (struct vmcs12*) ;
 struct vcpu_vmx* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1,
           struct vmcs12 *VAR_2)
{
 struct vcpu_vmx *VAR_3 = FUNC_3(VAR_1);

 if (!FUNC_2(VAR_2) ||
     VAR_2->vmcs_link_pointer == -1ull)
  return;

 FUNC_1(VAR_3->vcpu.kvm, VAR_2->vmcs_link_pointer,
   FUNC_0(VAR_1), VAR_0);
}
