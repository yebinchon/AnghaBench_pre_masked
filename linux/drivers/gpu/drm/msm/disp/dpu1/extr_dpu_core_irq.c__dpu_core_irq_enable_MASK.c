
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cb_lock; int * irq_cb_tbl; int * enable_counts; int irq_counts; } ;
struct dpu_kms {TYPE_2__ irq_obj; TYPE_3__* hw_intr; } ;
struct TYPE_4__ {int (* enable_irq ) (TYPE_3__*,int) ;} ;
struct TYPE_6__ {int irq_idx_tbl_size; TYPE_1__ ops; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct dpu_kms *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0, VAR_5;

 if (!VAR_1 || !VAR_1->hw_intr ||
   !VAR_1->irq_obj.enable_counts ||
   !VAR_1->irq_obj.irq_counts) {
  FUNC_1("invalid params\n");
  return -VAR_0;
 }

 if (VAR_2 < 0 || VAR_2 >= VAR_1->hw_intr->irq_idx_tbl_size) {
  FUNC_1("invalid IRQ index: [%d]\n", VAR_2);
  return -VAR_0;
 }

 VAR_5 = FUNC_4(&VAR_1->irq_obj.enable_counts[VAR_2]);
 FUNC_2("irq_idx=%d enable_count=%d\n", VAR_2, VAR_5);
 FUNC_9(VAR_2, VAR_5);

 if (FUNC_3(&VAR_1->irq_obj.enable_counts[VAR_2]) == 1) {
  VAR_4 = VAR_1->hw_intr->ops.enable_irq(
    VAR_1->hw_intr,
    VAR_2);
  if (VAR_4)
   FUNC_1("Fail to enable IRQ for irq_idx:%d\n",
     VAR_2);

  FUNC_0("irq_idx=%d ret=%d\n", VAR_2, VAR_4);

  FUNC_6(&VAR_1->irq_obj.cb_lock, VAR_3);

  if (FUNC_5(&VAR_1->irq_obj.irq_cb_tbl[VAR_2]))
   FUNC_1("irq_idx=%d enabled with no callback\n",
     VAR_2);
  FUNC_7(&VAR_1->irq_obj.cb_lock, VAR_3);
 }

 return VAR_4;
}
