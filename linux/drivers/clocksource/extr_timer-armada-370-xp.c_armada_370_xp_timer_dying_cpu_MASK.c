
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int irq; int (* set_state_shutdown ) (struct clock_event_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct clock_event_device* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1)
{
 struct clock_event_device *VAR_2 = FUNC_1(VAR_0, VAR_1);

 VAR_2->set_state_shutdown(VAR_2);
 FUNC_0(VAR_2->irq);
 return 0;
}
