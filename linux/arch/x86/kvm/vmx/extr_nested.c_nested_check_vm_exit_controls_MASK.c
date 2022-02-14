
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcs12 {int vm_exit_controls; } ;
struct TYPE_3__ {int exit_ctls_high; int exit_ctls_low; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*,struct vmcs12*) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1,
                                         struct vmcs12 *VAR_2)
{
 struct vcpu_vmx *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_0(!FUNC_3(VAR_2->vm_exit_controls,
        VAR_3->nested.msrs.exit_ctls_low,
        VAR_3->nested.msrs.exit_ctls_high)) ||
     FUNC_0(FUNC_1(VAR_1, VAR_2)))
  return -VAR_0;

 return 0;
}
