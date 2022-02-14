
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ period; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; TYPE_1__* vcpu; } ;
typedef scalar_t__ s64 ;
struct TYPE_3__ {int vcpu_id; } ;


 scalar_t__ FUNC_0 (struct kvm_lapic*) ;
 long long VAR_0 ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct kvm_lapic *VAR_1)
{





 if (FUNC_0(VAR_1) && VAR_1->lapic_timer.period) {
  s64 VAR_2 = VAR_0 * 1000LL;

  if (VAR_1->lapic_timer.period < VAR_2) {
   FUNC_1(
       "kvm: vcpu %i: requested %lld ns "
       "lapic timer period limited to %lld ns\n",
       VAR_1->vcpu->vcpu_id,
       VAR_1->lapic_timer.period, VAR_2);
   VAR_1->lapic_timer.period = VAR_2;
  }
 }
}
