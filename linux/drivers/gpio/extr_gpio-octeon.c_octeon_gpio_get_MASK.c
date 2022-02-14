
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct octeon_gpio {scalar_t__ register_base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long long FUNC_0 (scalar_t__) ;
 struct octeon_gpio* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct octeon_gpio *VAR_3 = FUNC_1(VAR_1);
 u64 VAR_4 = FUNC_0(VAR_3->register_base + VAR_0);

 return ((1ull << VAR_2) & VAR_4) != 0;
}
