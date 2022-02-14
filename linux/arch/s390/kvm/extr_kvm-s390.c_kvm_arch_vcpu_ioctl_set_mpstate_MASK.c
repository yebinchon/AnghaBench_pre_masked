
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_mp_state {int mp_state; } ;
struct TYPE_3__ {int user_cpu_state_ctrl; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;




 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

int FUNC_4(struct kvm_vcpu *VAR_1,
        struct kvm_mp_state *VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(VAR_1);


 VAR_1->kvm->arch.user_cpu_state_ctrl = 1;

 switch (VAR_2->mp_state) {
 case 128:
  FUNC_1(VAR_1);
  break;
 case 129:
  FUNC_0(VAR_1);
  break;
 case 130:
 case 131:

 default:
  VAR_3 = -VAR_0;
 }

 FUNC_3(VAR_1);
 return VAR_3;
}
