
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65912_gpio {TYPE_1__* tps; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct tps65912_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct tps65912_gpio *VAR_4 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4->tps->regmap, VAR_1 + VAR_3,
      VAR_0, 0);
}
