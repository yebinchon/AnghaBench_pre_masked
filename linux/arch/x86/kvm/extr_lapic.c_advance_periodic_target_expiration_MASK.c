
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ tscdeadline; int target_expiration; int period; } ;
struct kvm_lapic {int vcpu; TYPE_1__ lapic_timer; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct kvm_lapic *VAR_0)
{
 ktime_t VAR_1 = FUNC_1();
 u64 VAR_2 = FUNC_5();
 ktime_t VAR_3;
 VAR_0->lapic_timer.target_expiration =
  FUNC_0(VAR_0->lapic_timer.target_expiration,
    VAR_0->lapic_timer.period);
 VAR_3 = FUNC_2(VAR_0->lapic_timer.target_expiration, VAR_1);
 VAR_0->lapic_timer.tscdeadline = FUNC_3(VAR_0->vcpu, VAR_2) +
  FUNC_4(VAR_0->vcpu, VAR_3);
}
