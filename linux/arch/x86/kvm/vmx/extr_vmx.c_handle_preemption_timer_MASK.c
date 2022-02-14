
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcpu_vmx {TYPE_1__* loaded_vmcs; int req_immediate_exit; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int hv_timer_soft_disabled; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct vcpu_vmx *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->req_immediate_exit &&
     !FUNC_2(VAR_1->loaded_vmcs->hv_timer_soft_disabled))
  FUNC_0(VAR_0);

 return 1;
}
