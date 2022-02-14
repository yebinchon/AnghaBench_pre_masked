
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct ft010_irq_data {int base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ft010_irq_data* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct ft010_irq_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(FUNC_0(FUNC_3(VAR_0)), FUNC_1(VAR_1->base));
}
