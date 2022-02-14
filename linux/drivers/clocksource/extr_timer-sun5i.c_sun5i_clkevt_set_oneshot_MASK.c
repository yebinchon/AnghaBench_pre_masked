
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun5i_timer_clkevt {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (struct sun5i_timer_clkevt*,int ,int) ;
 int FUNC_1 (struct sun5i_timer_clkevt*,int ) ;
 struct sun5i_timer_clkevt* FUNC_2 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_3(struct clock_event_device *VAR_0)
{
 struct sun5i_timer_clkevt *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, 0);
 FUNC_0(VAR_1, 0, 0);
 return 0;
}
