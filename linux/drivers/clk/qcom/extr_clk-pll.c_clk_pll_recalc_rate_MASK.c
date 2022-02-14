
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_pll {int post_div_shift; scalar_t__ post_div_width; int config_reg; TYPE_1__ clkr; int n_reg; int m_reg; int l_reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int*) ;
 struct clk_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_4(struct clk_hw *VAR_0, unsigned long VAR_1)
{
 struct clk_pll *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7;
 u64 VAR_8;

 FUNC_2(VAR_2->clkr.regmap, VAR_2->l_reg, &VAR_3);
 FUNC_2(VAR_2->clkr.regmap, VAR_2->m_reg, &VAR_4);
 FUNC_2(VAR_2->clkr.regmap, VAR_2->n_reg, &VAR_5);

 VAR_3 &= 0x3ff;
 VAR_4 &= 0x7ffff;
 VAR_5 &= 0x7ffff;

 VAR_7 = VAR_1 * VAR_3;
 if (VAR_5) {
  VAR_8 = VAR_1;
  VAR_8 *= VAR_4;
  FUNC_1(VAR_8, VAR_5);
  VAR_7 += VAR_8;
 }
 if (VAR_2->post_div_width) {
  FUNC_2(VAR_2->clkr.regmap, VAR_2->config_reg, &VAR_6);
  VAR_6 >>= VAR_2->post_div_shift;
  VAR_6 &= FUNC_0(VAR_2->post_div_width) - 1;
  VAR_7 /= VAR_6 + 1;
 }

 return VAR_7;
}
