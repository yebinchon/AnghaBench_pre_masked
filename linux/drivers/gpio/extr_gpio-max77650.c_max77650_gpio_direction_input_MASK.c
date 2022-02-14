
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_gpio_chip {int map; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct max77650_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3,
      unsigned int VAR_4)
{
 struct max77650_gpio_chip *VAR_5 = FUNC_0(VAR_3);

 return FUNC_1(VAR_5->map,
      VAR_2,
      VAR_1,
      VAR_0);
}
