
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct intc_irqpin_priv {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char* VAR_3 ;
 int FUNC_0 (struct intc_irqpin_priv*,int ,unsigned char) ;
 struct intc_irqpin_priv* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_4, unsigned int VAR_5)
{
 unsigned char VAR_6 = VAR_3[VAR_5 & VAR_2];
 struct intc_irqpin_priv *VAR_7 = FUNC_1(VAR_4);

 if (!(VAR_6 & VAR_1))
  return -VAR_0;

 return FUNC_0(VAR_7, FUNC_2(VAR_4),
         VAR_6 ^ VAR_1);
}
