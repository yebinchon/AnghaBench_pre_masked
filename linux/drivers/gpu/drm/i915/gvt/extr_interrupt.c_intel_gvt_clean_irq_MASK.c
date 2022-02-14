
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct intel_gvt_irq {TYPE_1__ vblank_timer; } ;
struct intel_gvt {struct intel_gvt_irq irq; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct intel_gvt *VAR_0)
{
 struct intel_gvt_irq *VAR_1 = &VAR_0->irq;

 FUNC_0(&VAR_1->vblank_timer.timer);
}
