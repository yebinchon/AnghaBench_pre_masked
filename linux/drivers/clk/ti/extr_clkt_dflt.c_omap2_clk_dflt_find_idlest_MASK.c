
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct clk_omap_reg {int offset; } ;
struct clk_hw_omap {int enable_bit; int enable_reg; } ;
struct TYPE_2__ {int cm_idlest_val; } ;


 int FUNC_0 (struct clk_omap_reg*,int *,int) ;
 TYPE_1__* FUNC_1 () ;

void FUNC_2(struct clk_hw_omap *VAR_0,
    struct clk_omap_reg *VAR_1, u8 *VAR_2,
    u8 *VAR_3)
{
 FUNC_0(VAR_1, &VAR_0->enable_reg, sizeof(*VAR_1));

 VAR_1->offset &= ~0xf0;
 VAR_1->offset |= 0x20;

 *VAR_2 = VAR_0->enable_bit;






 *VAR_3 = FUNC_1()->cm_idlest_val;
}
