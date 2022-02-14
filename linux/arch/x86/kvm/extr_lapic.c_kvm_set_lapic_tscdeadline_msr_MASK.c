
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int tscdeadline; int timer; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;


 scalar_t__ FUNC_0 (struct kvm_lapic*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_lapic*) ;

void FUNC_5(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 struct kvm_lapic *VAR_2 = VAR_0->arch.apic;

 if (!FUNC_3(VAR_0) || FUNC_0(VAR_2) ||
   FUNC_1(VAR_2))
  return;

 FUNC_2(&VAR_2->lapic_timer.timer);
 VAR_2->lapic_timer.tscdeadline = VAR_1;
 FUNC_4(VAR_2);
}
