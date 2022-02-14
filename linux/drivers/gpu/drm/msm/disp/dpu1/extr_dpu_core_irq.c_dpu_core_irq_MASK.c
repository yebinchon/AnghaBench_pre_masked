
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dpu_kms {TYPE_2__* hw_intr; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* dispatch_irqs ) (TYPE_2__*,int ,struct dpu_kms*) ;int (* get_interrupt_statuses ) (TYPE_2__*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,struct dpu_kms*) ;

irqreturn_t FUNC_2(struct dpu_kms *VAR_2)
{







 VAR_2->hw_intr->ops.get_interrupt_statuses(VAR_2->hw_intr);
 VAR_2->hw_intr->ops.dispatch_irqs(
   VAR_2->hw_intr,
   VAR_1,
   VAR_2);

 return VAR_0;
}
