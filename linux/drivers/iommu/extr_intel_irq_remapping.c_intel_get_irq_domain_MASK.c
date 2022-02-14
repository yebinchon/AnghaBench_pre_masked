
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_alloc_info {int type; int msi_dev; } ;
struct intel_iommu {struct irq_domain* ir_msi_domain; } ;




 struct intel_iommu* FUNC_0 (int ) ;

__attribute__((used)) static struct irq_domain *FUNC_1(struct irq_alloc_info *VAR_0)
{
 struct intel_iommu *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 switch (VAR_0->type) {
 case 129:
 case 128:
  VAR_1 = FUNC_0(VAR_0->msi_dev);
  if (VAR_1)
   return VAR_1->ir_msi_domain;
  break;
 default:
  break;
 }

 return ((void*)0);
}
