
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct da8xx_cfgchip_mux_clk {unsigned int mask; int reg; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct da8xx_cfgchip_mux_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct da8xx_cfgchip_mux_clk *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = VAR_1 ? VAR_2->mask : 0;

 return FUNC_0(VAR_2->regmap, VAR_2->reg, VAR_2->mask, VAR_3);
}
