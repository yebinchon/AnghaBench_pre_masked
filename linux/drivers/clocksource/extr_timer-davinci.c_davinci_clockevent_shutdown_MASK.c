
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_clockevent {int base; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct davinci_clockevent* FUNC_1 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_2(struct clock_event_device *VAR_0)
{
 struct davinci_clockevent *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->base);

 return 0;
}
