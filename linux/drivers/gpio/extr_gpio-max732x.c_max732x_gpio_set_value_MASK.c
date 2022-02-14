
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 unsigned VAR_3 = VAR_1 & ~0x7;
 uint8_t VAR_4 = 1u << (VAR_1 & 0x7);

 FUNC_0(VAR_0, VAR_3, VAR_4, VAR_2 << (VAR_1 & 0x7));
}
