
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;
struct TYPE_2__ {int enable; } ;


 int VAR_0 ;
 struct clock_event_device VAR_1 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = &VAR_1;

 FUNC_0(0, &VAR_2->enable);
 VAR_5->event_handler(VAR_5);

 return VAR_0;
}
