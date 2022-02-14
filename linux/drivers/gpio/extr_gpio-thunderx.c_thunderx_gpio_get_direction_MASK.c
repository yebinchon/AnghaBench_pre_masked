
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thunderx_gpio {scalar_t__ register_base; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct thunderx_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct thunderx_gpio*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct thunderx_gpio *VAR_3 = FUNC_1(VAR_1);
 u64 VAR_4;

 if (!FUNC_3(VAR_3, VAR_2))





  return 1;

 VAR_4 = FUNC_2(VAR_3->register_base + FUNC_0(VAR_2));

 return !(VAR_4 & VAR_0);
}
