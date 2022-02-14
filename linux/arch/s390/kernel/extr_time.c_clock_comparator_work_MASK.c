
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
struct TYPE_2__ {int clock_comparator; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clock_event_device*) ;
 struct clock_event_device* FUNC_1 (int *) ;

void FUNC_2(void)
{
 struct clock_event_device *VAR_3;

 VAR_0.clock_comparator = VAR_1;
 VAR_3 = FUNC_1(&VAR_2);
 VAR_3->event_handler(VAR_3);
}
