
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period; } ;
struct timer_of {TYPE_1__ of_clk; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct timer_of*,int ) ;
 int FUNC_1 (struct timer_of*,int ) ;
 int FUNC_2 (struct timer_of*) ;
 struct timer_of* FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_1)
{
 struct timer_of *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2);
 FUNC_0(VAR_2, VAR_2->of_clk.period);
 FUNC_1(VAR_2, VAR_0);
 return 0;
}
