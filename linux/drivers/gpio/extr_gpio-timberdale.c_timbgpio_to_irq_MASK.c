
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timbgpio {scalar_t__ irq_base; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct timbgpio* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct timbgpio *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->irq_base <= 0)
  return -VAR_0;

 return VAR_3->irq_base + VAR_2;
}
