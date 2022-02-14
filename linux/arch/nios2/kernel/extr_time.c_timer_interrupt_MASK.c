
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nios2_clockevent_dev {int timer; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int *,int ,int ) ;
 struct nios2_clockevent_dev* FUNC_2 (struct clock_event_device*) ;

irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct clock_event_device *VAR_4 = (struct clock_event_device *) VAR_3;
 struct nios2_clockevent_dev *VAR_5 = FUNC_2(VAR_4);


 FUNC_1(&VAR_5->timer, 0, VAR_0);
 VAR_4->event_handler(VAR_4);

 return VAR_1;
}
