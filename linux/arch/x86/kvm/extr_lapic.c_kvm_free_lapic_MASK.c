
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int apic_base; struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int timer; } ;
struct kvm_lapic {scalar_t__ regs; int sw_enabled; TYPE_1__ lapic_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm_lapic*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm_vcpu *VAR_3)
{
 struct kvm_lapic *VAR_4 = VAR_3->arch.apic;

 if (!VAR_3->arch.apic)
  return;

 FUNC_1(&VAR_4->lapic_timer.timer);

 if (!(VAR_3->arch.apic_base & VAR_0))
  FUNC_3(&VAR_1);

 if (!VAR_4->sw_enabled)
  FUNC_3(&VAR_2);

 if (VAR_4->regs)
  FUNC_0((unsigned long)VAR_4->regs);

 FUNC_2(VAR_4);
}
