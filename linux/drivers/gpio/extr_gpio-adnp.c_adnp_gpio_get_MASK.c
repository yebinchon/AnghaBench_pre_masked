
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct adnp {unsigned int reg_shift; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct adnp*) ;
 int FUNC_2 (struct adnp*,scalar_t__,int*) ;
 struct adnp* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct adnp *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3 = VAR_1 >> VAR_2->reg_shift;
 unsigned int VAR_4 = VAR_1 & 7;
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, FUNC_1(VAR_2) + VAR_3, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return (VAR_5 & FUNC_0(VAR_4)) ? 1 : 0;
}
