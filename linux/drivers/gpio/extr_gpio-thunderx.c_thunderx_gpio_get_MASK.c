
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thunderx_gpio {int invert_mask; scalar_t__ register_base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct thunderx_gpio* FUNC_1 (struct gpio_chip*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct thunderx_gpio *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = VAR_3 / 64;
 int VAR_6 = VAR_3 % 64;
 u64 VAR_7 = FUNC_2(VAR_4->register_base + (VAR_5 * VAR_0) + VAR_1);
 u64 VAR_8 = VAR_7 & FUNC_0(VAR_6);

 if (FUNC_3(VAR_3, VAR_4->invert_mask))
  return VAR_8 == 0;
 else
  return VAR_8 != 0;
}
