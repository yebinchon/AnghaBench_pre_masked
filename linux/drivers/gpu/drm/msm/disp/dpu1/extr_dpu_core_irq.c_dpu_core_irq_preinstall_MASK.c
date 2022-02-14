
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msm_drm_private {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_8__ {int total_irqs; int * irq_counts; int * enable_counts; int * irq_cb_tbl; int cb_lock; } ;
struct dpu_kms {TYPE_4__ irq_obj; TYPE_3__* hw_intr; TYPE_2__* pdev; TYPE_1__* dev; } ;
typedef int atomic_t ;
struct TYPE_7__ {int irq_idx_tbl_size; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct dpu_kms*) ;
 int FUNC_4 (struct dpu_kms*) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct dpu_kms *VAR_1)
{
 struct msm_drm_private *VAR_2;
 int VAR_3;

 if (!VAR_1->dev) {
  FUNC_0("invalid drm device\n");
  return;
 } else if (!VAR_1->dev->dev_private) {
  FUNC_0("invalid device private\n");
  return;
 }
 VAR_2 = VAR_1->dev->dev_private;

 FUNC_6(&VAR_1->pdev->dev);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_7(&VAR_1->pdev->dev);

 FUNC_8(&VAR_1->irq_obj.cb_lock);


 VAR_1->irq_obj.total_irqs = VAR_1->hw_intr->irq_idx_tbl_size;
 VAR_1->irq_obj.irq_cb_tbl = FUNC_5(VAR_1->irq_obj.total_irqs,
   sizeof(struct list_head), VAR_0);
 VAR_1->irq_obj.enable_counts = FUNC_5(VAR_1->irq_obj.total_irqs,
   sizeof(atomic_t), VAR_0);
 VAR_1->irq_obj.irq_counts = FUNC_5(VAR_1->irq_obj.total_irqs,
   sizeof(atomic_t), VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1->irq_obj.total_irqs; VAR_3++) {
  FUNC_1(&VAR_1->irq_obj.irq_cb_tbl[VAR_3]);
  FUNC_2(&VAR_1->irq_obj.enable_counts[VAR_3], 0);
  FUNC_2(&VAR_1->irq_obj.irq_counts[VAR_3], 0);
 }
}
