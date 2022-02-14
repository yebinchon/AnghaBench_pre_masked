
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nios2_clockevent_dev {int timer; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int *,unsigned long,int) ;
 struct nios2_clockevent_dev* FUNC_1 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_0,
 struct clock_event_device *VAR_1)
{
 struct nios2_clockevent_dev *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->timer, VAR_0, 0);

 return 0;
}
