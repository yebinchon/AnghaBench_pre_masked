
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct clock_event_device*) ;
 int FUNC_4 (struct timer_of*) ;
 struct timer_of* FUNC_5 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct clock_event_device *VAR_3 = (struct clock_event_device *)VAR_2;
 struct timer_of *VAR_4 = FUNC_5(VAR_3);

 FUNC_1(FUNC_4(VAR_4));

 if (FUNC_0(VAR_3))
  FUNC_2(FUNC_4(VAR_4));

 VAR_3->event_handler(VAR_3);
 return VAR_0;
}
