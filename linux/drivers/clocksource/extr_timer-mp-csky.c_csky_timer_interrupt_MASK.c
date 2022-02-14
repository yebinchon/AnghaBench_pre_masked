
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct timer_of {TYPE_1__ clkevt; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct timer_of* FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct timer_of *VAR_5 = FUNC_2(&VAR_2);

 FUNC_0(VAR_1, 0);

 VAR_5->clkevt.event_handler(&VAR_5->clkevt);

 return VAR_0;
}
