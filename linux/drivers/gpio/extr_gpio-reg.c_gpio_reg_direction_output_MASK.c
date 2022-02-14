
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_reg {int direction; } ;
struct gpio_chip {int (* set ) (struct gpio_chip*,unsigned int,int) ;} ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 struct gpio_reg* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2,
 int VAR_3)
{
 struct gpio_reg *VAR_4 = FUNC_2(VAR_1);

 if (VAR_4->direction & FUNC_0(VAR_2))
  return -VAR_0;

 VAR_1->set(VAR_1, VAR_2, VAR_3);
 return 0;
}
