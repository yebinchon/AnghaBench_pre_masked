
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct dln2_gpio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dln2_gpio*,unsigned int,int) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int ) ;
 struct dln2_gpio* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2,
          int VAR_3)
{
 struct dln2_gpio *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_1, VAR_2, VAR_0);
}
