
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_expiration; int timer; int period; } ;
struct kvm_lapic {TYPE_1__ lapic_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_lapic*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct kvm_lapic *VAR_1)
{
 if (!VAR_1->lapic_timer.period)
  return;

 if (FUNC_4(FUNC_5(),
   VAR_1->lapic_timer.target_expiration)) {
  FUNC_2(VAR_1);

  if (FUNC_1(VAR_1))
   return;

  FUNC_0(VAR_1);
 }

 FUNC_3(&VAR_1->lapic_timer.timer,
  VAR_1->lapic_timer.target_expiration,
  VAR_0);
}
