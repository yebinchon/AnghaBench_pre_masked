
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int function; } ;
struct intel_gvt_vblank_timer {int period; TYPE_1__ timer; } ;
struct intel_gvt_irq {TYPE_2__* ops; int irq_map; struct intel_gvt_vblank_timer vblank_timer; } ;
struct intel_gvt {struct intel_gvt_irq irq; } ;
struct TYPE_4__ {int (* init_irq ) (struct intel_gvt_irq*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (struct intel_gvt_irq*) ;
 int FUNC_3 (struct intel_gvt_irq*) ;
 int FUNC_4 (struct intel_gvt_irq*) ;
 int VAR_5 ;

int FUNC_5(struct intel_gvt *VAR_6)
{
 struct intel_gvt_irq *VAR_7 = &VAR_6->irq;
 struct intel_gvt_vblank_timer *VAR_8 = &VAR_7->vblank_timer;

 FUNC_0("init irq framework\n");

 VAR_7->ops = &VAR_4;
 VAR_7->irq_map = VAR_3;


 FUNC_2(VAR_7);


 VAR_7->ops->init_irq(VAR_7);

 FUNC_3(VAR_7);

 FUNC_1(&VAR_8->timer, VAR_0, VAR_1);
 VAR_8->timer.function = VAR_5;
 VAR_8->period = VAR_2;

 return 0;
}
