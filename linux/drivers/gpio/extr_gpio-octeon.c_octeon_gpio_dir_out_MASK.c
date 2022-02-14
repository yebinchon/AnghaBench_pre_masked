
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_oe; } ;
union cvmx_gpio_bit_cfgx {scalar_t__ u64; TYPE_1__ s; } ;
struct octeon_gpio {scalar_t__ register_base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct octeon_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1,
          int VAR_2)
{
 struct octeon_gpio *VAR_3 = FUNC_2(VAR_0);
 union cvmx_gpio_bit_cfgx VAR_4;

 FUNC_3(VAR_0, VAR_1, VAR_2);

 VAR_4.u64 = 0;
 VAR_4.s.tx_oe = 1;

 FUNC_1(VAR_3->register_base + FUNC_0(VAR_1), VAR_4.u64);
 return 0;
}
