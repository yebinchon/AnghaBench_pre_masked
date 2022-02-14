
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int msr_val; scalar_t__ send_user_only; int delivery_as_pf_vmexit; } ;
struct TYPE_5__ {TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {scalar_t__ (* get_cpl ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_2)
{
 if (!VAR_2->arch.apf.delivery_as_pf_vmexit && FUNC_0(VAR_2))
  return 0;

 if (!(VAR_2->arch.apf.msr_val & VAR_0) ||
     (VAR_2->arch.apf.send_user_only &&
      VAR_1->get_cpl(VAR_2) == 0))
  return 0;

 return 1;
}
