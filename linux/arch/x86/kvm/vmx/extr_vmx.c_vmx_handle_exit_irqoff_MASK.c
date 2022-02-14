
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {scalar_t__ exit_reason; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vcpu_vmx*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct vcpu_vmx *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->exit_reason == VAR_1)
  FUNC_1(VAR_2);
 else if (VAR_3->exit_reason == VAR_0)
  FUNC_0(VAR_3);
}
