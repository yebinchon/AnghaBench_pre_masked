
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * enable_counts; } ;
struct dpu_kms {TYPE_3__* hw_intr; TYPE_1__ irq_obj; } ;
struct TYPE_5__ {int (* disable_irq ) (TYPE_3__*,int) ;} ;
struct TYPE_6__ {int irq_idx_tbl_size; TYPE_2__ ops; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct dpu_kms *VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4;

 if (!VAR_1 || !VAR_1->hw_intr || !VAR_1->irq_obj.enable_counts) {
  FUNC_1("invalid params\n");
  return -VAR_0;
 }

 if (VAR_2 < 0 || VAR_2 >= VAR_1->hw_intr->irq_idx_tbl_size) {
  FUNC_1("invalid IRQ index: [%d]\n", VAR_2);
  return -VAR_0;
 }

 VAR_4 = FUNC_4(&VAR_1->irq_obj.enable_counts[VAR_2]);
 FUNC_2("irq_idx=%d enable_count=%d\n", VAR_2, VAR_4);
 FUNC_6(VAR_2, VAR_4);

 if (FUNC_3(&VAR_1->irq_obj.enable_counts[VAR_2]) == 0) {
  VAR_3 = VAR_1->hw_intr->ops.disable_irq(
    VAR_1->hw_intr,
    VAR_2);
  if (VAR_3)
   FUNC_1("Fail to disable IRQ for irq_idx:%d\n",
     VAR_2);
  FUNC_0("irq_idx=%d ret=%d\n", VAR_2, VAR_3);
 }

 return VAR_3;
}
