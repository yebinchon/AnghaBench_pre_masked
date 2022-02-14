
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_omap_reg {int offset; } ;
struct clk_hw_omap {int enable_bit; int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_omap_reg*,int *,int) ;

void FUNC_1(struct clk_hw_omap *VAR_2,
       struct clk_omap_reg *VAR_3,
       u8 *VAR_4)
{
 FUNC_0(VAR_3, &VAR_2->enable_reg, sizeof(*VAR_3));





 VAR_3->offset ^= (VAR_0 ^ VAR_1);

 *VAR_4 = VAR_2->enable_bit;
}
