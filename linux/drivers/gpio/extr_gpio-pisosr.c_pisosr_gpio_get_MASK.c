
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pisosr_gpio {unsigned int* buffer; } ;
struct gpio_chip {int dummy; } ;


 struct pisosr_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct pisosr_gpio*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct pisosr_gpio *VAR_2 = FUNC_0(VAR_0);


 FUNC_1(VAR_2);

 return (VAR_2->buffer[VAR_1 / 8] >> (VAR_1 % 8)) & 0x1;
}
