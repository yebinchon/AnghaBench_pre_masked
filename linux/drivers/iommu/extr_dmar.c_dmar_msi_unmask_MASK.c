
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct intel_iommu {int reg; int register_lock; } ;


 int FUNC_0 (struct intel_iommu*,int ) ;
 struct intel_iommu* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct irq_data *VAR_0)
{
 struct intel_iommu *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = FUNC_0(VAR_1, VAR_0->irq);
 unsigned long VAR_3;


 FUNC_2(&VAR_1->register_lock, VAR_3);
 FUNC_5(0, VAR_1->reg + VAR_2);

 FUNC_4(VAR_1->reg + VAR_2);
 FUNC_3(&VAR_1->register_lock, VAR_3);
}
