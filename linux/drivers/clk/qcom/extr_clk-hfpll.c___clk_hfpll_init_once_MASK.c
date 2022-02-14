
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct hfpll_data {int config_val; int user_val; int user_vco_mask; unsigned long low_vco_max_rate; int droop_val; scalar_t__ droop_reg; scalar_t__ user_reg; scalar_t__ n_reg; scalar_t__ m_reg; scalar_t__ config_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_hfpll {int init_done; TYPE_1__ clkr; struct hfpll_data* d; } ;


 unsigned long FUNC_0 (struct clk_hw*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,scalar_t__,int) ;
 struct clk_hfpll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_hfpll *VAR_1 = FUNC_3(VAR_0);
 struct hfpll_data const *VAR_2 = VAR_1->d;
 struct regmap *VAR_3 = VAR_1->clkr.regmap;

 if (FUNC_1(VAR_1->init_done))
  return;


 if (VAR_2->config_val)
  FUNC_2(VAR_3, VAR_2->config_reg, VAR_2->config_val);
 FUNC_2(VAR_3, VAR_2->m_reg, 0);
 FUNC_2(VAR_3, VAR_2->n_reg, 1);

 if (VAR_2->user_reg) {
  u32 VAR_4 = VAR_2->user_val;
  unsigned long VAR_5;

  VAR_5 = FUNC_0(VAR_0);


  if (VAR_2->user_vco_mask && VAR_5 > VAR_2->low_vco_max_rate)
   VAR_4 |= VAR_2->user_vco_mask;
  FUNC_2(VAR_3, VAR_2->user_reg, VAR_4);
 }

 if (VAR_2->droop_reg)
  FUNC_2(VAR_3, VAR_2->droop_reg, VAR_2->droop_val);

 VAR_1->init_done = 1;
}
