
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int bgpio_bits; scalar_t__ be_bits; } ;


 unsigned long FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned long FUNC_1(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->be_bits)
  return FUNC_0(VAR_0->bgpio_bits - 1 - VAR_1);
 return FUNC_0(VAR_1);
}
