
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_timer {int dummy; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clock_event_device*) ;
 struct rk_timer* FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct rk_timer*) ;
 int FUNC_3 (struct rk_timer*) ;
 int FUNC_4 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct clock_event_device *VAR_3 = VAR_2;
 struct rk_timer *VAR_4 = FUNC_1(VAR_3);

 FUNC_3(VAR_4);

 if (FUNC_0(VAR_3))
  FUNC_2(VAR_4);

 VAR_3->event_handler(VAR_3);

 return VAR_0;
}
