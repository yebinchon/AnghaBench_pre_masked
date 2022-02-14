
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pv_unhalted; } ;
struct TYPE_4__ {scalar_t__ mp_state; TYPE_1__ pv; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_mp_state {scalar_t__ mp_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_2,
        struct kvm_mp_state *VAR_3)
{
 FUNC_1(VAR_2);

 FUNC_0(VAR_2);
 if (VAR_2->arch.mp_state == VAR_0 &&
     VAR_2->arch.pv.pv_unhalted)
  VAR_3->mp_state = VAR_1;
 else
  VAR_3->mp_state = VAR_2->arch.mp_state;

 FUNC_2(VAR_2);
 return 0;
}
