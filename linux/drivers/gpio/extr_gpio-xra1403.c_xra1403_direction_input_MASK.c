
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xra1403 {int regmap; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct xra1403* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct xra1403 *VAR_3 = FUNC_1(VAR_1);

 return FUNC_2(VAR_3->regmap, FUNC_3(VAR_0, VAR_2),
   FUNC_0(VAR_2 % 8), FUNC_0(VAR_2 % 8));
}
