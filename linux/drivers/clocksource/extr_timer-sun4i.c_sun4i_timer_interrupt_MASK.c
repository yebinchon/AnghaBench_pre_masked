
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timer_of*) ;
 struct timer_of* FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct clock_event_device *VAR_3 = (struct clock_event_device *)VAR_2;
 struct timer_of *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(FUNC_2(VAR_4));
 VAR_3->event_handler(VAR_3);

 return VAR_0;
}
