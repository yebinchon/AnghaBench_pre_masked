
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_gpio {scalar_t__ register_base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct octeon_gpio* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct octeon_gpio *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_2->register_base + FUNC_0(VAR_1), 0);
 return 0;
}
