
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct dln2_gpio {int output_enabled; } ;


 struct dln2_gpio* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct dln2_gpio *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_1, VAR_2->output_enabled))
  return 0;

 return 1;
}
