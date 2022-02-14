
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {unsigned int ngpio; } ;
struct bcm_kona_gpio {int irq_domain; TYPE_1__ gpio_chip; } ;


 int VAR_0 ;
 struct bcm_kona_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct bcm_kona_gpio *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_2 >= VAR_3->gpio_chip.ngpio)
  return -VAR_0;
 return FUNC_1(VAR_3->irq_domain, VAR_2);
}
