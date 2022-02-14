
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct clock_event_device VAR_2 ;
 int FUNC_1 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = &VAR_2;


 FUNC_0(VAR_1);

 VAR_5->event_handler(VAR_5);

 return VAR_0;
}
