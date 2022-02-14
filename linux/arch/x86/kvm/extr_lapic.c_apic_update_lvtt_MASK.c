
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ timer_mode_mask; scalar_t__ timer_mode; scalar_t__ tscdeadline; scalar_t__ period; int timer; } ;
struct kvm_lapic {TYPE_1__ lapic_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct kvm_lapic*,int ) ;
 int FUNC_3 (struct kvm_lapic*,int ,int ) ;
 int FUNC_4 (struct kvm_lapic*) ;

__attribute__((used)) static void FUNC_5(struct kvm_lapic *VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_3, VAR_0) &
   VAR_3->lapic_timer.timer_mode_mask;

 if (VAR_3->lapic_timer.timer_mode != VAR_4) {
  if (FUNC_0(VAR_3) != (VAR_4 ==
    VAR_1)) {
   FUNC_1(&VAR_3->lapic_timer.timer);
   FUNC_3(VAR_3, VAR_2, 0);
   VAR_3->lapic_timer.period = 0;
   VAR_3->lapic_timer.tscdeadline = 0;
  }
  VAR_3->lapic_timer.timer_mode = VAR_4;
  FUNC_4(VAR_3);
 }
}
