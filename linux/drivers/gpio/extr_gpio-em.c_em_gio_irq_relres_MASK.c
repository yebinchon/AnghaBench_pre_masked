
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct em_gio_priv {int gpio_chip; } ;


 int FUNC_0 (int *,int ) ;
 struct em_gio_priv* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct em_gio_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->gpio_chip, FUNC_2(VAR_0));
}
