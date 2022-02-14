
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct ttc_timer {scalar_t__ base_addr; } ;
struct ttc_timer_clockevent {TYPE_1__ ce; struct ttc_timer ttc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct ttc_timer_clockevent *VAR_4 = VAR_3;
 struct ttc_timer *VAR_5 = &VAR_4->ttc;


 FUNC_0(VAR_5->base_addr + VAR_1);

 VAR_4->ce.event_handler(&VAR_4->ce);

 return VAR_0;
}
