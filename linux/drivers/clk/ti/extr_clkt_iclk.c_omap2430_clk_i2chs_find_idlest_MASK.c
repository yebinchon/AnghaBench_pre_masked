
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_omap_reg {int offset; } ;
struct clk_hw_omap {int enable_bit; int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_omap_reg*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct clk_hw_omap *VAR_3,
        struct clk_omap_reg *VAR_4,
        u8 *VAR_5,
        u8 *VAR_6)
{
 FUNC_0(VAR_4, &VAR_3->enable_reg, sizeof(*VAR_4));
 VAR_4->offset ^= (VAR_1 ^ VAR_0);
 *VAR_5 = VAR_3->enable_bit;
 *VAR_6 = VAR_2;
}
