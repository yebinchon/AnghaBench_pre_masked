
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
struct TYPE_2__ {int timer_irqs_others; int timer_irqs_event; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct pt_regs*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 (int) ;
 struct pt_regs* FUNC_12 (struct pt_regs*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct clock_event_device*) ;
 scalar_t__ FUNC_15 () ;
 void* FUNC_16 (int *) ;
 int FUNC_17 (struct pt_regs*) ;
 int FUNC_18 (struct pt_regs*) ;
 scalar_t__ FUNC_19 (int) ;

void FUNC_20(struct pt_regs *VAR_6)
{
 struct clock_event_device *VAR_7 = FUNC_16(&VAR_2);
 u64 *VAR_8 = FUNC_16(&VAR_3);
 struct pt_regs *VAR_9;
 u64 VAR_10;







 if (FUNC_19(!FUNC_4(FUNC_13()))) {
  *VAR_8 = ~(u64)0;
  FUNC_11(VAR_1);
  return;
 }







 if (FUNC_0(VAR_0))
  FUNC_11(0x7fffffff);
 else
  FUNC_11(VAR_1);




 FUNC_10();







 VAR_9 = FUNC_12(VAR_6);
 FUNC_7();
 FUNC_17(VAR_6);

 if (FUNC_15()) {
  FUNC_3();
  FUNC_9();
 }

 VAR_10 = FUNC_6();
 if (VAR_10 >= *VAR_8) {
  *VAR_8 = ~(u64)0;
  if (VAR_7->event_handler)
   VAR_7->event_handler(VAR_7);
  FUNC_1(VAR_4.timer_irqs_event);
 } else {
  VAR_10 = *VAR_8 - VAR_10;
  if (VAR_10 <= VAR_1)
   FUNC_11(VAR_10);

  if (FUNC_15())
   FUNC_11(1);
  FUNC_1(VAR_4.timer_irqs_others);
 }

 FUNC_18(VAR_6);
 FUNC_8();
 FUNC_12(VAR_9);
}
