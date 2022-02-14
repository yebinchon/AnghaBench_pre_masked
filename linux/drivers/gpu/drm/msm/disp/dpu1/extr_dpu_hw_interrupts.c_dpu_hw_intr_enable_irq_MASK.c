
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dpu_irq_type {int reg_idx; int irq_mask; } ;
struct dpu_intr_reg {int en_off; int clr_off; } ;
struct dpu_hw_intr {int* cache_irq_mask; int irq_lock; int hw; } ;


 int FUNC_0 (struct dpu_irq_type*) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 struct dpu_intr_reg* VAR_1 ;
 struct dpu_irq_type* VAR_2 ;
 int FUNC_2 (char*,char const*,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct dpu_hw_intr *VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 const struct dpu_intr_reg *VAR_7;
 const struct dpu_irq_type *VAR_8;
 const char *VAR_9 = ((void*)0);
 uint32_t VAR_10;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_4 < 0 || VAR_4 >= FUNC_0(VAR_2)) {
  FUNC_3("invalid IRQ index: [%d]\n", VAR_4);
  return -VAR_0;
 }

 VAR_8 = &VAR_2[VAR_4];
 VAR_5 = VAR_8->reg_idx;
 VAR_7 = &VAR_1[VAR_5];

 FUNC_4(&VAR_3->irq_lock, VAR_6);
 VAR_10 = VAR_3->cache_irq_mask[VAR_5];
 if (VAR_10 & VAR_8->irq_mask) {
  VAR_9 = "DPU IRQ already set:";
 } else {
  VAR_9 = "DPU IRQ enabled:";

  VAR_10 |= VAR_8->irq_mask;

  FUNC_1(&VAR_3->hw, VAR_7->clr_off, VAR_8->irq_mask);

  FUNC_1(&VAR_3->hw, VAR_7->en_off, VAR_10);


  FUNC_6();

  VAR_3->cache_irq_mask[VAR_5] = VAR_10;
 }
 FUNC_5(&VAR_3->irq_lock, VAR_6);

 FUNC_2("%s MASK:0x%.8x, CACHE-MASK:0x%.8x\n", VAR_9,
   VAR_8->irq_mask, VAR_10);

 return 0;
}
