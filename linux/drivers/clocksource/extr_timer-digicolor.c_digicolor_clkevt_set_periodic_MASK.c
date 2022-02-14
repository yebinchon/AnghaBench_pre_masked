
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct digicolor_timer {int ticks_per_jiffy; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 struct digicolor_timer* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct clock_event_device*,int ) ;
 int FUNC_3 (struct clock_event_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_1)
{
 struct digicolor_timer *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_1, VAR_2->ticks_per_jiffy);
 FUNC_2(VAR_1, VAR_0);
 return 0;
}
