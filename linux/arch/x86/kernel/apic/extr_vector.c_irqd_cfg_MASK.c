
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct irq_cfg {int dummy; } ;
struct apic_chip_data {struct irq_cfg hw_irq_cfg; } ;


 struct apic_chip_data* FUNC_0 (struct irq_data*) ;

struct irq_cfg *FUNC_1(struct irq_data *VAR_0)
{
 struct apic_chip_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? &VAR_1->hw_irq_cfg : ((void*)0);
}
