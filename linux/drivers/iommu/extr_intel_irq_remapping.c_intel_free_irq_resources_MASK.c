
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {struct intel_ir_data* chip_data; } ;
struct irq_2_iommu {int dummy; } ;
struct intel_ir_data {struct irq_2_iommu irq_2_iommu; } ;


 int FUNC_0 (struct irq_2_iommu*) ;
 int VAR_0 ;
 struct irq_data* FUNC_1 (struct irq_domain*,unsigned int) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct intel_ir_data*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct irq_domain *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3)
{
 struct irq_data *VAR_4;
 struct intel_ir_data *VAR_5;
 struct irq_2_iommu *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_4 = FUNC_1(VAR_1, VAR_2 + VAR_8);
  if (VAR_4 && VAR_4->chip_data) {
   VAR_5 = VAR_4->chip_data;
   VAR_6 = &VAR_5->irq_2_iommu;
   FUNC_4(&VAR_0, VAR_7);
   FUNC_0(VAR_6);
   FUNC_5(&VAR_0, VAR_7);
   FUNC_2(VAR_4);
   FUNC_3(VAR_5);
  }
 }
}
