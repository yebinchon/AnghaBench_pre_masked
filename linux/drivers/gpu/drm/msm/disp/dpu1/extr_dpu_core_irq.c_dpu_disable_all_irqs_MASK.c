
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_kms {TYPE_2__* hw_intr; } ;
struct TYPE_3__ {int (* disable_all_irqs ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct dpu_kms *VAR_0)
{
 if (!VAR_0 || !VAR_0->hw_intr ||
   !VAR_0->hw_intr->ops.disable_all_irqs)
  return;

 VAR_0->hw_intr->ops.disable_all_irqs(VAR_0->hw_intr);
}
