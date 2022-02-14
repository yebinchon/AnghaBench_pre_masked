
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_gpio_chip {int map; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct max77650_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_6,
       unsigned int VAR_7, int VAR_8)
{
 struct max77650_gpio_chip *VAR_9 = FUNC_0(VAR_6);
 int VAR_10, VAR_11;

 VAR_10 = VAR_0 | VAR_2;
 VAR_11 = VAR_8 ? VAR_3 : VAR_4;
 VAR_11 |= VAR_1;

 return FUNC_1(VAR_9->map,
      VAR_5, VAR_10, VAR_11);
}
