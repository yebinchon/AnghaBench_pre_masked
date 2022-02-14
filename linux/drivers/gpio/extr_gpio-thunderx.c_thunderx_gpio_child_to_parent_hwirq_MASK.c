
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_gpio {int base_msi; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 struct thunderx_gpio* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1,
            unsigned int VAR_2,
            unsigned int VAR_3,
            unsigned int *VAR_4,
            unsigned int *VAR_5)
{
 struct thunderx_gpio *VAR_6 = FUNC_0(VAR_1);

 *VAR_4 = VAR_6->base_msi + (2 * VAR_2);
 *VAR_5 = VAR_0;
 return 0;
}
