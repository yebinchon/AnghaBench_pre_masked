
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys {int parent; int dpu_kms; struct dpu_encoder_irq* irq; } ;
struct dpu_encoder_irq {int irq_idx; int hw_idx; int cb; int name; int intr_type; } ;
typedef enum dpu_intr_idx { ____Placeholder_dpu_intr_idx } dpu_intr_idx ;


 int FUNC_0 (struct dpu_encoder_phys*,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_encoder_phys*,char*,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ,int,int ,int) ;

int FUNC_10(struct dpu_encoder_phys *VAR_2,
  enum dpu_intr_idx VAR_3)
{
 struct dpu_encoder_irq *VAR_4;
 int VAR_5 = 0;

 if (!VAR_2 || VAR_3 >= VAR_1) {
  FUNC_1("invalid params\n");
  return -VAR_0;
 }
 VAR_4 = &VAR_2->irq[VAR_3];

 if (VAR_4->irq_idx >= 0) {
  FUNC_0(VAR_2,
    "skipping already registered irq %s type %d\n",
    VAR_4->name, VAR_4->intr_type);
  return 0;
 }

 VAR_4->irq_idx = FUNC_6(VAR_2->dpu_kms,
   VAR_4->intr_type, VAR_4->hw_idx);
 if (VAR_4->irq_idx < 0) {
  FUNC_2(VAR_2,
   "failed to lookup IRQ index for %s type:%d\n",
   VAR_4->name, VAR_4->intr_type);
  return -VAR_0;
 }

 VAR_5 = FUNC_7(VAR_2->dpu_kms, VAR_4->irq_idx,
   &VAR_4->cb);
 if (VAR_5) {
  FUNC_2(VAR_2,
   "failed to register IRQ callback for %s\n",
   VAR_4->name);
  VAR_4->irq_idx = -VAR_0;
  return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_2->dpu_kms, &VAR_4->irq_idx, 1);
 if (VAR_5) {
  FUNC_4("enable failed id=%u, intr=%d, hw=%d, irq=%d",
     FUNC_3(VAR_2->parent), VAR_3, VAR_4->hw_idx,
     VAR_4->irq_idx);
  FUNC_8(VAR_2->dpu_kms,
    VAR_4->irq_idx, &VAR_4->cb);
  VAR_4->irq_idx = -VAR_0;
  return VAR_5;
 }

 FUNC_9(FUNC_3(VAR_2->parent), VAR_3,
    VAR_4->hw_idx, VAR_4->irq_idx);

 return VAR_5;
}
