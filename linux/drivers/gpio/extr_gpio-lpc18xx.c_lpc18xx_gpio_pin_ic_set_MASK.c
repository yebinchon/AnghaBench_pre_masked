
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lpc18xx_gpio_pin_ic {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct lpc18xx_gpio_pin_ic *VAR_0,
        u32 VAR_1, u32 VAR_2)
{
 FUNC_1(FUNC_0(VAR_1), VAR_0->base + VAR_2);
}
