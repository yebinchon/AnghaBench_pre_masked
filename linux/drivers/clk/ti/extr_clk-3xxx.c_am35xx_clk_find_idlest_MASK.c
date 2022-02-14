
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clk_omap_reg {int dummy; } ;
struct clk_hw_omap {scalar_t__ enable_bit; int enable_reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct clk_omap_reg*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct clk_hw_omap *VAR_2,
       struct clk_omap_reg *VAR_3,
       u8 *VAR_4,
       u8 *VAR_5)
{
 FUNC_0(VAR_3, &VAR_2->enable_reg, sizeof(*VAR_3));
 *VAR_4 = VAR_2->enable_bit + VAR_1;
 *VAR_5 = VAR_0;
}
