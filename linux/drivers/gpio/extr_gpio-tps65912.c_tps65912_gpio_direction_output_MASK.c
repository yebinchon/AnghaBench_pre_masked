
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65912_gpio {TYPE_1__* tps; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct tps65912_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3,
       unsigned VAR_4, int VAR_5)
{
 struct tps65912_gpio *VAR_6 = FUNC_0(VAR_3);


 FUNC_1(VAR_6->tps->regmap, VAR_2 + VAR_4,
      VAR_1, VAR_5 ? VAR_1 : 0);

 return FUNC_1(VAR_6->tps->regmap, VAR_2 + VAR_4,
      VAR_0, VAR_0);
}
