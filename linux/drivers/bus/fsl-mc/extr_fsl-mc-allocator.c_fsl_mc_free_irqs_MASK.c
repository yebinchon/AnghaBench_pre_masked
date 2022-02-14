
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsl_mc_device_irq {int resource; int * mc_dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {int irq_count; } ;
struct fsl_mc_device {struct fsl_mc_device_irq** irqs; TYPE_1__ dev; TYPE_2__ obj_desc; } ;
struct fsl_mc_bus {int irq_resources; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct fsl_mc_device*) ;
 struct fsl_mc_bus* FUNC_2 (struct fsl_mc_device*) ;
 struct fsl_mc_device* FUNC_3 (int ) ;

void FUNC_4(struct fsl_mc_device *VAR_0)
{
 int VAR_1;
 int VAR_2;
 struct fsl_mc_bus *VAR_3;
 struct fsl_mc_device_irq **VAR_4 = VAR_0->irqs;

 if (!VAR_4)
  return;

 VAR_2 = VAR_0->obj_desc.irq_count;

 if (FUNC_1(VAR_0))
  VAR_3 = FUNC_2(VAR_0);
 else
  VAR_3 = FUNC_2(FUNC_3(VAR_0->dev.parent));

 if (!VAR_3->irq_resources)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  VAR_4[VAR_1]->mc_dev = ((void*)0);
  FUNC_0(&VAR_4[VAR_1]->resource);
 }

 VAR_0->irqs = ((void*)0);
}
