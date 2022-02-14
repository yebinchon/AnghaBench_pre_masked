
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_clockevent {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct davinci_clockevent*,int ,unsigned long) ;
 struct davinci_clockevent* FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static int
FUNC_4(unsigned long VAR_2,
          struct clock_event_device *VAR_3)
{
 struct davinci_clockevent *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(VAR_3);

 FUNC_2(VAR_4, VAR_1, 0x0);
 FUNC_2(VAR_4, VAR_0, VAR_2);

 FUNC_0(VAR_3);

 return 0;
}
