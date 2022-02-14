
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_timer {int pending; scalar_t__ hv_timer_in_use; } ;
struct kvm_lapic {TYPE_1__* vcpu; struct kvm_timer lapic_timer; } ;
struct TYPE_2__ {int vcpu_id; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 scalar_t__ FUNC_2 (struct kvm_lapic*) ;
 scalar_t__ FUNC_3 (struct kvm_lapic*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct kvm_lapic*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct kvm_lapic*) ;
 int FUNC_8 (struct kvm_lapic*) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(struct kvm_lapic *VAR_0)
{
 struct kvm_timer *VAR_1 = &VAR_0->lapic_timer;

 FUNC_0(FUNC_6());
 if (VAR_0->lapic_timer.hv_timer_in_use)
  FUNC_5(VAR_0);
 if (!FUNC_2(VAR_0) && FUNC_4(&VAR_1->pending))
  return;

 if (FUNC_2(VAR_0) || FUNC_1(VAR_0))
  FUNC_7(VAR_0);
 else if (FUNC_3(VAR_0))
  FUNC_8(VAR_0);
 FUNC_9(VAR_0->vcpu->vcpu_id, 0);
}
