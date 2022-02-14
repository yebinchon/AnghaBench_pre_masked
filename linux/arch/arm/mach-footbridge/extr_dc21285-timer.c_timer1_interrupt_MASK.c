
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = VAR_4;

 *VAR_0 = 0;


 if (FUNC_0(VAR_5))
  *VAR_1 = 0;

 VAR_5->event_handler(VAR_5);

 return VAR_2;
}
