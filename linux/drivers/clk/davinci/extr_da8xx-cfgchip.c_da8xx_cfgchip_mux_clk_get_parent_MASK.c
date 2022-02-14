
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct da8xx_cfgchip_mux_clk {unsigned int mask; int reg; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;
 struct da8xx_cfgchip_mux_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct da8xx_cfgchip_mux_clk *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;

 FUNC_0(VAR_1->regmap, VAR_1->reg, &VAR_2);

 return (VAR_2 & VAR_1->mask) ? 1 : 0;
}
