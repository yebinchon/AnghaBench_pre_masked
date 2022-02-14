
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {int wq; TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ period; int hv_timer_in_use; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_lapic*) ;
 scalar_t__ FUNC_2 (struct kvm_lapic*) ;
 int FUNC_3 (struct kvm_lapic*) ;
 int FUNC_4 (struct kvm_lapic*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct kvm_lapic*) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct kvm_vcpu *VAR_0)
{
 struct kvm_lapic *VAR_1 = VAR_0->arch.apic;

 FUNC_5();

 if (!VAR_1->lapic_timer.hv_timer_in_use)
  goto out;
 FUNC_0(FUNC_8(&VAR_0->wq));
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 if (FUNC_2(VAR_1) && VAR_1->lapic_timer.period) {
  FUNC_1(VAR_1);
  FUNC_7(VAR_1);
 }
out:
 FUNC_6();
}
