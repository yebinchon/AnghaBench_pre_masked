
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65086_gpio {TYPE_1__* tps; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct tps65086_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct tps65086_gpio *VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_3->tps->regmap, VAR_0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 return VAR_5 & FUNC_0(4 + VAR_2);
}
