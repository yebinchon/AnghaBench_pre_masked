
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct omap4_keypad {scalar_t__ irqreg_offset; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct omap4_keypad *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->base +
    VAR_0->irqreg_offset + VAR_1);
}
