
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pll_freq_tbl {int ibits; int n; int m; int l; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_pll {int config_reg; TYPE_1__ clkr; int n_reg; int m_reg; int l_reg; int mode_reg; int freq_tbl; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct pll_freq_tbl* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct clk_pll* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int
FUNC_7(struct clk_hw *VAR_4, unsigned long VAR_5, unsigned long VAR_6)
{
 struct clk_pll *VAR_7 = FUNC_6(VAR_4);
 const struct pll_freq_tbl *VAR_8;
 bool VAR_9;
 u32 VAR_10;
 u32 VAR_11 = VAR_2 | VAR_1 | VAR_3;

 VAR_8 = FUNC_2(VAR_7->freq_tbl, VAR_5);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_7->clkr.regmap, VAR_7->mode_reg, &VAR_10);
 VAR_9 = (VAR_10 & VAR_11) == VAR_11;

 if (VAR_9)
  FUNC_0(VAR_4);

 FUNC_4(VAR_7->clkr.regmap, VAR_7->l_reg, 0x3ff, VAR_8->l);
 FUNC_4(VAR_7->clkr.regmap, VAR_7->m_reg, 0x7ffff, VAR_8->m);
 FUNC_4(VAR_7->clkr.regmap, VAR_7->n_reg, 0x7ffff, VAR_8->n);
 FUNC_5(VAR_7->clkr.regmap, VAR_7->config_reg, VAR_8->ibits);

 if (VAR_9)
  FUNC_1(VAR_4);

 return 0;
}
