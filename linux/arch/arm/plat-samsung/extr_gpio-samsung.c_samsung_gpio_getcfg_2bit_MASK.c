
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct samsung_gpio_chip {int base; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct samsung_gpio_chip *VAR_0,
          unsigned int VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0->base);
 VAR_2 >>= VAR_1 * 2;
 VAR_2 &= 3;


 return FUNC_0(VAR_2);
}
