
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {unsigned long virtual_tsc_khz; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_timer {unsigned long long tscdeadline; unsigned long long timer_advance_ns; int timer; } ;
struct kvm_lapic {struct kvm_timer lapic_timer; struct kvm_vcpu* vcpu; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (unsigned long long,unsigned long) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,unsigned long long) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,unsigned long long) ;
 unsigned long long FUNC_6 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct kvm_lapic *VAR_1)
{
 struct kvm_timer *VAR_2 = &VAR_1->lapic_timer;
 u64 VAR_3, VAR_4 = VAR_2->tscdeadline;
 u64 VAR_5 = 0;
 ktime_t VAR_6;
 struct kvm_vcpu *VAR_7 = VAR_1->vcpu;
 unsigned long VAR_8 = VAR_7->arch.virtual_tsc_khz;
 unsigned long VAR_9;
 ktime_t VAR_10;

 if (FUNC_11(!VAR_4 || !VAR_8))
  return;

 FUNC_9(VAR_9);

 VAR_10 = FUNC_4();
 VAR_3 = FUNC_6(VAR_7, FUNC_10());

 VAR_5 = (VAR_4 - VAR_3) * 1000000ULL;
 FUNC_1(VAR_5, VAR_8);

 if (FUNC_7(VAR_4 > VAR_3) &&
     FUNC_7(VAR_5 > VAR_1->lapic_timer.timer_advance_ns)) {
  VAR_6 = FUNC_3(VAR_10, VAR_5);
  VAR_6 = FUNC_5(VAR_6, VAR_2->timer_advance_ns);
  FUNC_2(&VAR_2->timer, VAR_6, VAR_0);
 } else
  FUNC_0(VAR_1);

 FUNC_8(VAR_9);
}
