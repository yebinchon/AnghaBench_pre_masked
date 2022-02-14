
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct gpio_chip*,int,unsigned int,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct gpio_chip *VAR_0,
          unsigned long *VAR_1, unsigned long *VAR_2)
{
 unsigned VAR_3 = VAR_1[0] & 0xff;
 unsigned VAR_4 = (VAR_1[0] >> 8) & 0xff;

 if (VAR_3)
  FUNC_0(VAR_0, 0, VAR_3, VAR_2[0] & 0xff);
 if (VAR_4)
  FUNC_0(VAR_0, 8, VAR_4, (VAR_2[0] >> 8) & 0xff);
}
