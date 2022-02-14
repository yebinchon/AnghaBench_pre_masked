
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int period; int target_expiration; scalar_t__ tscdeadline; } ;
struct kvm_lapic {int divide_count; TYPE_1__ lapic_timer; int vcpu; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct kvm_lapic*,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct kvm_lapic*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static bool FUNC_7(struct kvm_lapic *VAR_2)
{
 ktime_t VAR_3;
 u64 VAR_4 = FUNC_6();

 VAR_3 = FUNC_1();
 VAR_2->lapic_timer.period = (u64)FUNC_2(VAR_2, VAR_1)
  * VAR_0 * VAR_2->divide_count;

 if (!VAR_2->lapic_timer.period) {
  VAR_2->lapic_timer.tscdeadline = 0;
  return 0;
 }

 FUNC_4(VAR_2);

 VAR_2->lapic_timer.tscdeadline = FUNC_3(VAR_2->vcpu, VAR_4) +
  FUNC_5(VAR_2->vcpu, VAR_2->lapic_timer.period);
 VAR_2->lapic_timer.target_expiration = FUNC_0(VAR_3, VAR_2->lapic_timer.period);

 return 1;
}
