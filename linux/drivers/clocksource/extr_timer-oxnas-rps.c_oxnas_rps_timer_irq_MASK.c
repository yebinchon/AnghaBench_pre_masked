
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct oxnas_rps_timer {TYPE_1__ clkevent; scalar_t__ clkevt_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct oxnas_rps_timer *VAR_4 = VAR_3;

 FUNC_1(0, VAR_4->clkevt_base + VAR_1);

 VAR_4->clkevent.event_handler(&VAR_4->clkevent);

 return VAR_0;
}
