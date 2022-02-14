
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_timer {int pending; scalar_t__ timer_advance_ns; int tscdeadline; int expired_tscdeadline; scalar_t__ hv_timer_in_use; } ;
struct kvm_lapic {struct kvm_timer lapic_timer; struct kvm_vcpu* vcpu; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_lapic*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_7(struct kvm_lapic *VAR_0)
{
 struct kvm_vcpu *VAR_1 = VAR_0->vcpu;
 struct kvm_timer *VAR_2 = &VAR_0->lapic_timer;

 if (FUNC_3(&VAR_0->lapic_timer.pending))
  return;

 if (FUNC_1(VAR_0) || VAR_2->hv_timer_in_use)
  VAR_2->expired_tscdeadline = VAR_2->tscdeadline;

 if (FUNC_6(VAR_0->vcpu)) {
  if (VAR_0->lapic_timer.timer_advance_ns)
   FUNC_0(VAR_1);
  FUNC_4(VAR_0);
  return;
 }

 FUNC_2(&VAR_0->lapic_timer.pending);
 FUNC_5(VAR_1);
}
