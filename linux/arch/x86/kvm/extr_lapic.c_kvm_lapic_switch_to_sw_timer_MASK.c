
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ hv_timer_in_use; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_lapic*) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct kvm_lapic *VAR_1 = VAR_0->arch.apic;

 FUNC_0();

 if (VAR_1->lapic_timer.hv_timer_in_use)
  FUNC_2(VAR_1);
 FUNC_1();
}
