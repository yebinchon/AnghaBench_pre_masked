
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nios2_timer {int dummy; } ;
struct nios2_clockevent_dev {struct nios2_timer timer; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (struct nios2_timer*) ;
 struct nios2_clockevent_dev* FUNC_1 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_2(struct clock_event_device *VAR_0)
{
 struct nios2_clockevent_dev *VAR_1 = FUNC_1(VAR_0);
 struct nios2_timer *VAR_2 = &VAR_1->timer;

 FUNC_0(VAR_2);
 return 0;
}
