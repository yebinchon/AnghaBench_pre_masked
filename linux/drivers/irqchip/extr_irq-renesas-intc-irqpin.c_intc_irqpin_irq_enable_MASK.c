
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct intc_irqpin_priv {int * irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct intc_irqpin_priv*,int ,int) ;
 struct intc_irqpin_priv* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct intc_irqpin_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->irq[VAR_3], "enable");
 FUNC_1(VAR_2, VAR_0, VAR_3);
}
