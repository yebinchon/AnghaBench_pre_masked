
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct dln2_gpio {int dummy; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (struct dln2_gpio*,unsigned int) ;
 int FUNC_2 (struct dln2_gpio*,unsigned int) ;
 struct dln2_gpio* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct dln2_gpio *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_3 == 1)
  return FUNC_1(VAR_2, VAR_1);

 return FUNC_2(VAR_2, VAR_1);
}
