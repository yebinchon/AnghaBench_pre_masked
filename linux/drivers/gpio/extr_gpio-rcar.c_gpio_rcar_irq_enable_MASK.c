
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_rcar_priv {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gpio_rcar_priv*,int ,int ) ;
 struct gpio_rcar_priv* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_3(VAR_1);
 struct gpio_rcar_priv *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3, VAR_0, FUNC_0(FUNC_4(VAR_1)));
}
