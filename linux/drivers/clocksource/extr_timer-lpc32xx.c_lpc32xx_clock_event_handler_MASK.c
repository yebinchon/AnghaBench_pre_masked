
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct lpc32xx_clock_event_ddata {TYPE_1__ evtdev; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct lpc32xx_clock_event_ddata *VAR_5 = VAR_4;


 FUNC_1(VAR_2, VAR_5->base + VAR_1);

 VAR_5->evtdev.event_handler(&VAR_5->evtdev);

 return VAR_0;
}
