
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clock_event_device*) ;
 scalar_t__ FUNC_1 (struct timer_of*) ;
 struct timer_of* FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = VAR_4;
 struct timer_of *VAR_6 = FUNC_2(VAR_5);


 FUNC_3(VAR_2,
         FUNC_1(VAR_6) + VAR_1);

 if (VAR_5->event_handler)
  VAR_5->event_handler(VAR_5);

 return VAR_0;
}
