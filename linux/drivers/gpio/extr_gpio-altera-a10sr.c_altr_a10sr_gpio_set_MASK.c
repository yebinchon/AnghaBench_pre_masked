
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct altr_a10sr_gpio {int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct altr_a10sr_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3,
    int VAR_4)
{
 struct altr_a10sr_gpio *VAR_5 = FUNC_1(VAR_2);

 FUNC_2(VAR_5->regmap, VAR_0,
      FUNC_0(VAR_1 + VAR_3),
      VAR_4 ? FUNC_0(VAR_1 + VAR_3)
      : 0);
}
