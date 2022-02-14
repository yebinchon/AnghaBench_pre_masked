
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_drm_private {int dummy; } ;
struct TYPE_6__ {int total_irqs; int * irq_counts; int * enable_counts; int * irq_cb_tbl; } ;
struct dpu_kms {TYPE_3__ irq_obj; TYPE_2__* pdev; TYPE_1__* dev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct dpu_kms*) ;
 int FUNC_3 (struct dpu_kms*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct dpu_kms *VAR_0)
{
 struct msm_drm_private *VAR_1;
 int VAR_2;

 if (!VAR_0->dev) {
  FUNC_0("invalid drm device\n");
  return;
 } else if (!VAR_0->dev->dev_private) {
  FUNC_0("invalid device private\n");
  return;
 }
 VAR_1 = VAR_0->dev->dev_private;

 FUNC_6(&VAR_0->pdev->dev);
 for (VAR_2 = 0; VAR_2 < VAR_0->irq_obj.total_irqs; VAR_2++)
  if (FUNC_1(&VAR_0->irq_obj.enable_counts[VAR_2]) ||
    !FUNC_5(&VAR_0->irq_obj.irq_cb_tbl[VAR_2]))
   FUNC_0("irq_idx=%d still enabled/registered\n", VAR_2);

 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_7(&VAR_0->pdev->dev);

 FUNC_4(VAR_0->irq_obj.irq_cb_tbl);
 FUNC_4(VAR_0->irq_obj.enable_counts);
 FUNC_4(VAR_0->irq_obj.irq_counts);
 VAR_0->irq_obj.irq_cb_tbl = ((void*)0);
 VAR_0->irq_obj.enable_counts = ((void*)0);
 VAR_0->irq_obj.irq_counts = ((void*)0);
 VAR_0->irq_obj.total_irqs = 0;
}
