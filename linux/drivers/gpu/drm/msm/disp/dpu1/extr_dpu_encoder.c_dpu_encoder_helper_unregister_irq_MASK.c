
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys {int parent; int dpu_kms; struct dpu_encoder_irq* irq; } ;
struct dpu_encoder_irq {int irq_idx; int hw_idx; int cb; } ;
typedef enum dpu_intr_idx { ____Placeholder_dpu_intr_idx } dpu_intr_idx ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int,int ,int,...) ;
 int VAR_0 ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,int ,int) ;

int FUNC_6(struct dpu_encoder_phys *VAR_1,
  enum dpu_intr_idx VAR_2)
{
 struct dpu_encoder_irq *VAR_3;
 int VAR_4;

 if (!VAR_1) {
  FUNC_0("invalid encoder\n");
  return -VAR_0;
 }
 VAR_3 = &VAR_1->irq[VAR_2];


 if (VAR_3->irq_idx < 0) {
  FUNC_2("duplicate unregister id=%u, intr=%d, hw=%d, irq=%d",
     FUNC_1(VAR_1->parent), VAR_2, VAR_3->hw_idx,
     VAR_3->irq_idx);
  return 0;
 }

 VAR_4 = FUNC_3(VAR_1->dpu_kms, &VAR_3->irq_idx, 1);
 if (VAR_4) {
  FUNC_2("disable failed id=%u, intr=%d, hw=%d, irq=%d ret=%d",
     FUNC_1(VAR_1->parent), VAR_2, VAR_3->hw_idx,
     VAR_3->irq_idx, VAR_4);
 }

 VAR_4 = FUNC_4(VAR_1->dpu_kms, VAR_3->irq_idx,
   &VAR_3->cb);
 if (VAR_4) {
  FUNC_2("unreg cb fail id=%u, intr=%d, hw=%d, irq=%d ret=%d",
     FUNC_1(VAR_1->parent), VAR_2, VAR_3->hw_idx,
     VAR_3->irq_idx, VAR_4);
 }

 FUNC_5(FUNC_1(VAR_1->parent), VAR_2,
          VAR_3->hw_idx, VAR_3->irq_idx);

 VAR_3->irq_idx = -VAR_0;

 return 0;
}
