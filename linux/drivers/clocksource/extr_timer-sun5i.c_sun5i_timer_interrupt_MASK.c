
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* event_handler ) (TYPE_2__*) ;} ;
struct TYPE_3__ {scalar_t__ base; } ;
struct sun5i_timer_clkevt {TYPE_2__ clkevt; TYPE_1__ timer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct sun5i_timer_clkevt *VAR_4 = (struct sun5i_timer_clkevt *)VAR_3;

 FUNC_1(0x1, VAR_4->timer.base + VAR_1);
 VAR_4->clkevt.event_handler(&VAR_4->clkevt);

 return VAR_0;
}
