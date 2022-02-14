
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct clock_event_device*) ;
 scalar_t__ FUNC_4 (struct timer_of*) ;
 struct timer_of* FUNC_5 (struct clock_event_device*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct clock_event_device *VAR_4 = (struct clock_event_device *)VAR_3;
 struct timer_of *VAR_5 = FUNC_5(VAR_4);

 FUNC_6(0, FUNC_4(VAR_5) + VAR_1);

 if (FUNC_0(VAR_4))
  FUNC_1(VAR_4);
 else
  FUNC_2(VAR_4);

 VAR_4->event_handler(VAR_4);

 return VAR_0;
}
