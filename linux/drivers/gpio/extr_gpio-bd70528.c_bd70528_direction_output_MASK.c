
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct bd70528_gpio {TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 struct bd70528_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned int VAR_3,
        int VAR_4)
{
 struct bd70528_gpio *VAR_5 = FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_3, VAR_4);
 return FUNC_3(VAR_5->chip.regmap, FUNC_0(VAR_3),
     VAR_1,
     VAR_0);
}
