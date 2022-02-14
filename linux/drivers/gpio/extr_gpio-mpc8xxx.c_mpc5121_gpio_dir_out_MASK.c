
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc8xxx_gpio_chip {int (* direction_output ) (struct gpio_chip*,unsigned int,int) ;} ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct mpc8xxx_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1,
    unsigned int VAR_2, int VAR_3)
{
 struct mpc8xxx_gpio_chip *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 >= 28)
  return -VAR_0;

 return VAR_4->direction_output(VAR_1, VAR_2, VAR_3);
}
