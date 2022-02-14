
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int base; int ngpio; } ;
struct orion_gpio_chip {struct gpio_chip chip; } ;


 int VAR_0 ;
 struct orion_gpio_chip* VAR_1 ;

__attribute__((used)) static struct orion_gpio_chip *FUNC_0(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct orion_gpio_chip *VAR_4 = VAR_1 + VAR_3;
  struct gpio_chip *VAR_5 = &VAR_4->chip;

  if (VAR_2 >= VAR_5->base && VAR_2 < VAR_5->base + VAR_5->ngpio)
   return VAR_4;
 }

 return ((void*)0);
}
