
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct intel_iommu {int reg; int register_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_iommu*,int ) ;
 struct intel_iommu* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct irq_data *VAR_1)
{
 struct intel_iommu *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_0(VAR_2, VAR_1->irq);
 unsigned long VAR_4;


 FUNC_2(&VAR_2->register_lock, VAR_4);
 FUNC_5(VAR_0, VAR_2->reg + VAR_3);

 FUNC_4(VAR_2->reg + VAR_3);
 FUNC_3(&VAR_2->register_lock, VAR_4);
}
