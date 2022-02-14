
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int apicv_active; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* refresh_apicv_exec_ctrl ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_1)
{
 if (!FUNC_1(VAR_1)) {
  FUNC_0(VAR_1->arch.apicv_active);
  return;
 }
 if (!VAR_1->arch.apicv_active)
  return;

 VAR_1->arch.apicv_active = 0;
 VAR_0->refresh_apicv_exec_ctrl(VAR_1);
}
