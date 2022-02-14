
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_desc {int chained_desc; } ;
struct irq_data {int hwirq; } ;
struct irq_chip {int (* irq_mask ) (struct irq_data*) ;} ;


 struct partition_desc* FUNC_0 (struct irq_data*) ;
 struct irq_chip* FUNC_1 (int ) ;
 struct irq_data* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct partition_desc*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct irq_data*) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct partition_desc *VAR_1 = FUNC_0(VAR_0);
 struct irq_chip *VAR_2 = FUNC_1(VAR_1->chained_desc);
 struct irq_data *VAR_3 = FUNC_2(VAR_1->chained_desc);

 if (FUNC_3(VAR_1, FUNC_4(), VAR_0->hwirq) &&
     VAR_2->irq_mask)
  VAR_2->irq_mask(VAR_3);
}
