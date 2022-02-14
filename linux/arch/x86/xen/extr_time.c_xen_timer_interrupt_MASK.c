
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;
struct TYPE_2__ {int evt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clock_event_device*) ;
 struct clock_event_device* FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = FUNC_1(&VAR_2.evt);
 irqreturn_t VAR_6;

 VAR_6 = VAR_1;
 if (VAR_5->event_handler) {
  VAR_5->event_handler(VAR_5);
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
