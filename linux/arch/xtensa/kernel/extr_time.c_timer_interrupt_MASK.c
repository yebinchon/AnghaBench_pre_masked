
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct clock_event_device evt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct clock_event_device*) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct clock_event_device *VAR_4 = &FUNC_4(&VAR_1)->evt;

 FUNC_2(FUNC_0());
 VAR_4->event_handler(VAR_4);


 FUNC_1();

 return VAR_0;
}
