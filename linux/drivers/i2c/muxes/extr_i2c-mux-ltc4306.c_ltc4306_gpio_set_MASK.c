
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4306 {int regmap; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ltc4306* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_1, unsigned int VAR_2,
        int VAR_3)
{
 struct ltc4306 *VAR_4 = FUNC_1(VAR_1);

 FUNC_2(VAR_4->regmap, VAR_0, FUNC_0(5 - VAR_2),
      VAR_3 ? FUNC_0(5 - VAR_2) : 0);
}
