
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
struct TYPE_2__ {int period; int target_expiration; int tscdeadline; } ;
struct kvm_lapic {int divide_count; TYPE_1__ lapic_timer; int vcpu; } ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct kvm_lapic*,int ) ;
 int FUNC_5 (struct kvm_lapic*) ;
 int FUNC_6 (int,int,int ) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct kvm_lapic *VAR_2, uint32_t VAR_3)
{
 ktime_t VAR_4, VAR_5;
 u64 VAR_6, VAR_7;

 VAR_2->lapic_timer.period = (u64)FUNC_4(VAR_2, VAR_1)
  * VAR_0 * VAR_2->divide_count;
 FUNC_5(VAR_2);

 VAR_4 = FUNC_1();
 VAR_5 = FUNC_2(VAR_2->lapic_timer.target_expiration, VAR_4);
 if (FUNC_3(VAR_5) < 0)
  VAR_5 = 0;

 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = FUNC_6(VAR_6,
                                    VAR_2->divide_count, VAR_3);

 VAR_2->lapic_timer.tscdeadline +=
  FUNC_7(VAR_2->vcpu, VAR_7) -
  FUNC_7(VAR_2->vcpu, VAR_6);
 VAR_2->lapic_timer.target_expiration = FUNC_0(VAR_4, VAR_7);
}
