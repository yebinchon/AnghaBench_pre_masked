
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct octeon_gpio {unsigned long long register_base; } ;
struct gpio_chip {int dummy; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (unsigned long long,unsigned long long) ;
 struct octeon_gpio* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct octeon_gpio *VAR_5 = FUNC_1(VAR_2);
 u64 VAR_6 = 1ull << VAR_3;
 u64 VAR_7 = VAR_5->register_base + (VAR_4 ? VAR_1 : VAR_0);
 FUNC_0(VAR_7, VAR_6);
}
