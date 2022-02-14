
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs5535_gpio_chip {scalar_t__ base; } ;


 int FUNC_0 (struct cs5535_gpio_chip*,int,unsigned int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cs5535_gpio_chip *VAR_0, unsigned VAR_1,
  unsigned int VAR_2)
{
 if (VAR_1 < 16)

  FUNC_1(1 << (VAR_1 + 16), VAR_0->base + VAR_2);
 else

  FUNC_0(VAR_0, 1 << VAR_1, VAR_2);
}
