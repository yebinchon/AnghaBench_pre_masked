
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct clock_event_device*) ;
 struct clock_event_device* FUNC_2 (int *) ;

void FUNC_3(void)
{
 struct clock_event_device *VAR_3 = FUNC_2(&VAR_1);

 FUNC_0(VAR_2, VAR_0);
 VAR_3->event_handler(VAR_3);
}
