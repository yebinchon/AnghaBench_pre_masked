
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 struct clock_event_device* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct clock_event_device *VAR_1 = FUNC_1(&VAR_0);

 VAR_1->event_handler(VAR_1);
}
