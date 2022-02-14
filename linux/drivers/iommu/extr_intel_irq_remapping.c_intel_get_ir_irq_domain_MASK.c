
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_alloc_info {int type; int msi_dev; int hpet_id; int ioapic_id; } ;
struct intel_iommu {struct irq_domain* ir_domain; } ;


 int FUNC_0 (int) ;




 struct intel_iommu* FUNC_1 (int ) ;
 struct intel_iommu* FUNC_2 (int ) ;
 struct intel_iommu* FUNC_3 (int ) ;

__attribute__((used)) static struct irq_domain *FUNC_4(struct irq_alloc_info *VAR_0)
{
 struct intel_iommu *VAR_1 = ((void*)0);

 if (!VAR_0)
  return ((void*)0);

 switch (VAR_0->type) {
 case 130:
  VAR_1 = FUNC_3(VAR_0->ioapic_id);
  break;
 case 131:
  VAR_1 = FUNC_2(VAR_0->hpet_id);
  break;
 case 129:
 case 128:
  VAR_1 = FUNC_1(VAR_0->msi_dev);
  break;
 default:
  FUNC_0(1);
  break;
 }

 return VAR_1 ? VAR_1->ir_domain : ((void*)0);
}
