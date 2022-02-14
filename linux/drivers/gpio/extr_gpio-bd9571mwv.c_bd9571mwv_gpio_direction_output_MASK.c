
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct bd9571mwv_gpio {TYPE_1__* bd; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 struct bd9571mwv_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2,
       unsigned int VAR_3, int VAR_4)
{
 struct bd9571mwv_gpio *VAR_5 = FUNC_1(VAR_2);


 FUNC_2(VAR_5->bd->regmap, VAR_1,
      FUNC_0(VAR_3), VAR_4 ? FUNC_0(VAR_3) : 0);
 FUNC_2(VAR_5->bd->regmap, VAR_0,
      FUNC_0(VAR_3), FUNC_0(VAR_3));

 return 0;
}
