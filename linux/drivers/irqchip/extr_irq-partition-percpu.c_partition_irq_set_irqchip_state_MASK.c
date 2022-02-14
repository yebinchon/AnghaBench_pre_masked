
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_desc {int chained_desc; } ;
struct irq_data {int hwirq; } ;
struct irq_chip {int (* irq_set_irqchip_state ) (struct irq_data*,int,int) ;} ;
typedef enum irqchip_irq_state { ____Placeholder_irqchip_irq_state } irqchip_irq_state ;


 int VAR_0 ;
 struct partition_desc* FUNC_0 (struct irq_data*) ;
 struct irq_chip* FUNC_1 (int ) ;
 struct irq_data* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct partition_desc*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct irq_data*,int,int) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_1,
        enum irqchip_irq_state VAR_2,
        bool VAR_3)
{
 struct partition_desc *VAR_4 = FUNC_0(VAR_1);
 struct irq_chip *VAR_5 = FUNC_1(VAR_4->chained_desc);
 struct irq_data *VAR_6 = FUNC_2(VAR_4->chained_desc);

 if (FUNC_3(VAR_4, FUNC_4(), VAR_1->hwirq) &&
     VAR_5->irq_set_irqchip_state)
  return VAR_5->irq_set_irqchip_state(VAR_6, VAR_2, VAR_3);

 return -VAR_0;
}
