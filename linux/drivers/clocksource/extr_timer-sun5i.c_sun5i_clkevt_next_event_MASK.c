
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun5i_timer_clkevt {int dummy; } ;
struct clock_event_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sun5i_timer_clkevt*,int ,scalar_t__) ;
 int FUNC_1 (struct sun5i_timer_clkevt*,int ,int) ;
 int FUNC_2 (struct sun5i_timer_clkevt*,int ) ;
 struct sun5i_timer_clkevt* FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1,
       struct clock_event_device *VAR_2)
{
 struct sun5i_timer_clkevt *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_3, 0);
 FUNC_0(VAR_3, 0, VAR_1 - VAR_0);
 FUNC_1(VAR_3, 0, 0);

 return 0;
}
