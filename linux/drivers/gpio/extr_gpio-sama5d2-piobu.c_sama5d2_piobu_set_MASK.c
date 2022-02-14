
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gpio_chip*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct gpio_chip *VAR_3, unsigned int VAR_4,
         int VAR_5)
{
 if (!VAR_5)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 FUNC_0(VAR_3, VAR_4, VAR_2, VAR_5);
}
