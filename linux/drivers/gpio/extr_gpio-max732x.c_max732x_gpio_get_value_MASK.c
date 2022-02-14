
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct max732x_chip {int dummy; } ;
struct gpio_chip {int dummy; } ;


 struct max732x_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct max732x_chip*,unsigned int) ;
 int FUNC_2 (struct max732x_chip*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct max732x_chip *VAR_2 = FUNC_0(VAR_0);
 uint8_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, FUNC_1(VAR_2, VAR_1), &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return !!(VAR_3 & (1u << (VAR_1 & 0x7)));
}
