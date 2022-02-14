
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_gpio_priv {int dummy; } ;
struct irq_data {int hwirq; struct uniphier_gpio_priv* chip_data; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct irq_data*,unsigned int) ;
 int FUNC_2 (struct uniphier_gpio_priv*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_4, unsigned int VAR_5)
{
 struct uniphier_gpio_priv *VAR_6 = VAR_4->chip_data;
 u32 VAR_7 = FUNC_0(VAR_4->hwirq);
 u32 VAR_8 = 0;

 if (VAR_5 == VAR_0) {
  VAR_8 = VAR_7;
  VAR_5 = VAR_1;
 }

 FUNC_2(VAR_6, VAR_3, VAR_7, VAR_8);

 FUNC_2(VAR_6, VAR_2, VAR_7, VAR_8);

 return FUNC_1(VAR_4, VAR_5);
}
