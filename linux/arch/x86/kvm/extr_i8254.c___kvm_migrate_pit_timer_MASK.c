
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct hrtimer {int dummy; } ;
struct TYPE_6__ {int lock; struct hrtimer timer; } ;
struct kvm_pit {TYPE_3__ pit_state; } ;
struct TYPE_4__ {struct kvm_pit* vpit; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hrtimer*) ;
 int FUNC_1 (struct hrtimer*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm_vcpu *VAR_1)
{
 struct kvm_pit *VAR_2 = VAR_1->kvm->arch.vpit;
 struct hrtimer *VAR_3;

 if (!FUNC_2(VAR_1) || !VAR_2)
  return;

 VAR_3 = &VAR_2->pit_state.timer;
 FUNC_3(&VAR_2->pit_state.lock);
 if (FUNC_0(VAR_3))
  FUNC_1(VAR_3, VAR_0);
 FUNC_4(&VAR_2->pit_state.lock);
}
