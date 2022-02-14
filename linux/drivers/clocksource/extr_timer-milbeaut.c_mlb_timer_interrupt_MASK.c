
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_of {int dummy; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct clock_event_device*) ;
 scalar_t__ FUNC_2 (struct timer_of*) ;
 struct timer_of* FUNC_3 (struct clock_event_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = VAR_4;
 struct timer_of *VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7;

 VAR_7 = FUNC_0(FUNC_2(VAR_6) + VAR_1);
 VAR_7 &= ~VAR_2;
 FUNC_4(VAR_7, FUNC_2(VAR_6) + VAR_1);

 VAR_5->event_handler(VAR_5);

 return VAR_0;
}
