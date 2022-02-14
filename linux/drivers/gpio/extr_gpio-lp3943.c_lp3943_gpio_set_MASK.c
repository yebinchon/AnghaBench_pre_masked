
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp3943_gpio {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp3943_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct lp3943_gpio*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct lp3943_gpio *VAR_5 = FUNC_0(VAR_2);
 u8 VAR_6;

 if (VAR_4)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;

 FUNC_1(VAR_5, VAR_3, VAR_6);
}
