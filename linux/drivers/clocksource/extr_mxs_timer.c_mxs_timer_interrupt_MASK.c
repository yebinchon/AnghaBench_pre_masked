
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 () ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct clock_event_device *VAR_3 = VAR_2;

 FUNC_1();
 VAR_3->event_handler(VAR_3);

 return VAR_0;
}
