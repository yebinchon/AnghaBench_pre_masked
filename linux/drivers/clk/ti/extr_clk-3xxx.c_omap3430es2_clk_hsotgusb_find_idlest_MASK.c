
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_omap_reg {int offset; } ;
struct clk_hw_omap {int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_omap_reg*,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct clk_hw_omap *VAR_2,
         struct clk_omap_reg *VAR_3,
         u8 *VAR_4,
         u8 *VAR_5)
{
 FUNC_0(VAR_3, &VAR_2->enable_reg, sizeof(*VAR_3));
 VAR_3->offset &= ~0xf0;
 VAR_3->offset |= 0x20;
 *VAR_4 = VAR_0;
 *VAR_5 = VAR_1;
}
