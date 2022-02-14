
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int irq; int pr_irq; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct intel_iommu *VAR_2, int VAR_3)
{
 if (VAR_2->irq == VAR_3)
  return VAR_0;
 else if (VAR_2->pr_irq == VAR_3)
  return VAR_1;
 else
  FUNC_0();
}
