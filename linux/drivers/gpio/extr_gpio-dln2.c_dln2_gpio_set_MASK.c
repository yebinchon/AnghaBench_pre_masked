
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct dln2_gpio {int dummy; } ;


 int FUNC_0 (struct dln2_gpio*,unsigned int,int) ;
 struct dln2_gpio* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct dln2_gpio *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_1, VAR_2);
}
