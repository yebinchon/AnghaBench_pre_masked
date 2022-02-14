
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned int base; } ;
struct brcmstb_gpio_priv {unsigned int gpio_base; int num_gpios; int irq_domain; } ;


 int VAR_0 ;
 struct brcmstb_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct brcmstb_gpio_priv *VAR_3 = FUNC_0(VAR_1);

 int VAR_4 = VAR_2 + (VAR_1->base - VAR_3->gpio_base);

 if (VAR_4 >= VAR_3->num_gpios)
  return -VAR_0;
 return FUNC_1(VAR_3->irq_domain, VAR_4);
}
