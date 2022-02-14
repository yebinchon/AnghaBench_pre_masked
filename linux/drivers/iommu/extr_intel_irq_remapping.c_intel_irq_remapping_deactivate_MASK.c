
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irte {int dummy; } ;
struct irq_domain {int dummy; } ;
struct irq_data {struct intel_ir_data* chip_data; } ;
struct intel_ir_data {int irq_2_iommu; } ;
typedef int entry ;


 int FUNC_0 (struct irte*,int ,int) ;
 int FUNC_1 (int *,struct irte*) ;

__attribute__((used)) static void FUNC_2(struct irq_domain *VAR_0,
        struct irq_data *VAR_1)
{
 struct intel_ir_data *VAR_2 = VAR_1->chip_data;
 struct irte VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 FUNC_1(&VAR_2->irq_2_iommu, &VAR_3);
}
