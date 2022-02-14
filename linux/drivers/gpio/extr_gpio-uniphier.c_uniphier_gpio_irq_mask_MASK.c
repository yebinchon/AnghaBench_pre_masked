
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_gpio_priv {int dummy; } ;
struct irq_data {int hwirq; struct uniphier_gpio_priv* chip_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct uniphier_gpio_priv*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct uniphier_gpio_priv *VAR_2 = VAR_1->chip_data;
 u32 VAR_3 = FUNC_0(VAR_1->hwirq);

 FUNC_2(VAR_2, VAR_0, VAR_3, 0);

 return FUNC_1(VAR_1);
}
