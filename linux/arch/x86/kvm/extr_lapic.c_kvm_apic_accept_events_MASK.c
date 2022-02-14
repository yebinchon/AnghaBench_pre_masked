
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ mp_state; struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {unsigned long pending_events; int sipi_vector; int vcpu; } ;
struct TYPE_4__ {scalar_t__ (* apic_init_signal_blocked ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned long*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (int ,unsigned long*) ;
 unsigned long FUNC_10 (unsigned long*,int ) ;

void FUNC_11(struct kvm_vcpu *VAR_5)
{
 struct kvm_lapic *VAR_6 = VAR_5->arch.apic;
 u8 VAR_7;
 unsigned long VAR_8;

 if (!FUNC_6(VAR_5) || !VAR_6->pending_events)
  return;
 if (FUNC_2(VAR_5) || VAR_4->apic_init_signal_blocked(VAR_5)) {
  FUNC_0(VAR_5->arch.mp_state == VAR_2);
  if (FUNC_9(VAR_1, &VAR_6->pending_events))
   FUNC_1(VAR_1, &VAR_6->pending_events);
  return;
 }

 VAR_8 = FUNC_10(&VAR_6->pending_events, 0);
 if (FUNC_9(VAR_0, &VAR_8)) {
  FUNC_5(VAR_5, 1);
  if (FUNC_4(VAR_6->vcpu))
   VAR_5->arch.mp_state = VAR_3;
  else
   VAR_5->arch.mp_state = VAR_2;
 }
 if (FUNC_9(VAR_1, &VAR_8) &&
     VAR_5->arch.mp_state == VAR_2) {

  FUNC_7();
  VAR_7 = VAR_6->sipi_vector;
  FUNC_3(VAR_5, VAR_7);
  VAR_5->arch.mp_state = VAR_3;
 }
}
