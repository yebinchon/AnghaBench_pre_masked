
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_intr {struct dpu_hw_intr* save_irq_status; struct dpu_hw_intr* cache_irq_mask; } ;


 int FUNC_0 (struct dpu_hw_intr*) ;

void FUNC_1(struct dpu_hw_intr *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->cache_irq_mask);
  FUNC_0(VAR_0->save_irq_status);
  FUNC_0(VAR_0);
 }
}
