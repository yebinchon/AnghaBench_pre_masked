
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct bcm_kona_gpio {int gpio_chip; } ;


 int FUNC_0 (int *,int ) ;
 struct bcm_kona_gpio* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_0)
{
 struct bcm_kona_gpio *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->gpio_chip, VAR_0->hwirq);
}
