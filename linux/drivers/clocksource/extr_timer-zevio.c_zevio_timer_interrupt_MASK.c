
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct zevio_timer {TYPE_1__ clkevt; scalar_t__ timer1; scalar_t__ interrupt_regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct zevio_timer *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8->interrupt_regs + VAR_2);
 if (!(VAR_9 & VAR_5))
  return VAR_4;

 FUNC_2(VAR_5, VAR_8->interrupt_regs + VAR_2);
 FUNC_2(VAR_0, VAR_8->timer1 + VAR_1);

 if (VAR_8->clkevt.event_handler)
  VAR_8->clkevt.event_handler(&VAR_8->clkevt);

 return VAR_3;
}
