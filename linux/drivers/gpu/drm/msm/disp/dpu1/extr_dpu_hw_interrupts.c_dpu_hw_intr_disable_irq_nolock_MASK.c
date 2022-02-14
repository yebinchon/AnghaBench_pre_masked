
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dpu_irq_type {int reg_idx; int irq_mask; } ;
struct dpu_intr_reg {int clr_off; int en_off; } ;
struct dpu_hw_intr {int* cache_irq_mask; int hw; } ;


 int FUNC_0 (struct dpu_irq_type*) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 struct dpu_intr_reg* VAR_1 ;
 struct dpu_irq_type* VAR_2 ;
 int FUNC_2 (char*,char const*,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct dpu_hw_intr *VAR_3, int VAR_4)
{
 int VAR_5;
 const struct dpu_intr_reg *VAR_6;
 const struct dpu_irq_type *VAR_7;
 const char *VAR_8 = ((void*)0);
 uint32_t VAR_9;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_4 < 0 || VAR_4 >= FUNC_0(VAR_2)) {
  FUNC_3("invalid IRQ index: [%d]\n", VAR_4);
  return -VAR_0;
 }

 VAR_7 = &VAR_2[VAR_4];
 VAR_5 = VAR_7->reg_idx;
 VAR_6 = &VAR_1[VAR_5];

 VAR_9 = VAR_3->cache_irq_mask[VAR_5];
 if ((VAR_9 & VAR_7->irq_mask) == 0) {
  VAR_8 = "DPU IRQ is already cleared:";
 } else {
  VAR_8 = "DPU IRQ mask disable:";

  VAR_9 &= ~VAR_7->irq_mask;

  FUNC_1(&VAR_3->hw, VAR_6->en_off, VAR_9);

  FUNC_1(&VAR_3->hw, VAR_6->clr_off, VAR_7->irq_mask);


  FUNC_4();

  VAR_3->cache_irq_mask[VAR_5] = VAR_9;
 }

 FUNC_2("%s MASK:0x%.8x, CACHE-MASK:0x%.8x\n", VAR_8,
   VAR_7->irq_mask, VAR_9);

 return 0;
}
