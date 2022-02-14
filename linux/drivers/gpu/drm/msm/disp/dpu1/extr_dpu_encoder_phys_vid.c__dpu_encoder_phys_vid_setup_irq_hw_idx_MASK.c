
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys {int intf_idx; struct dpu_encoder_irq* irq; } ;
struct dpu_encoder_irq {scalar_t__ irq_idx; int hw_idx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(
  struct dpu_encoder_phys *VAR_2)
{
 struct dpu_encoder_irq *VAR_3;







 VAR_3 = &VAR_2->irq[VAR_1];
 if (VAR_3->irq_idx < 0)
  VAR_3->hw_idx = VAR_2->intf_idx;

 VAR_3 = &VAR_2->irq[VAR_0];
 if (VAR_3->irq_idx < 0)
  VAR_3->hw_idx = VAR_2->intf_idx;
}
