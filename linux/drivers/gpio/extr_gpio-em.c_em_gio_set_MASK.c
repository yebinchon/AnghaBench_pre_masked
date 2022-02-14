
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_chip*,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{

 if (VAR_3 < 16)
  FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4);
 else
  FUNC_0(VAR_2, VAR_0, VAR_3 - 16, VAR_4);
}
