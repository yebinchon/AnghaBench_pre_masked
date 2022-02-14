
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
typedef enum gic_intid_range { ____Placeholder_gic_intid_range } gic_intid_range ;


 int FUNC_0 (int ) ;

__attribute__((used)) static enum gic_intid_range FUNC_1(struct irq_data *VAR_0)
{
 return FUNC_0(VAR_0->hwirq);
}
