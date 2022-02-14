
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 struct clock_event_device VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct clock_event_device *VAR_4 = &VAR_1;

 VAR_4->event_handler(VAR_4);

 return VAR_0;
}
