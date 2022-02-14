
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct regmap {int dummy; } ;
struct hfpll_data {int l_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_hfpll {TYPE_1__ clkr; struct hfpll_data* d; } ;


 int FUNC_0 (struct regmap*,int ,unsigned long*) ;
 struct clk_hfpll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
        unsigned long VAR_1)
{
 struct clk_hfpll *VAR_2 = FUNC_1(VAR_0);
 struct hfpll_data const *VAR_3 = VAR_2->d;
 struct regmap *VAR_4 = VAR_2->clkr.regmap;
 u32 VAR_5;

 FUNC_0(VAR_4, VAR_3->l_reg, &VAR_5);

 return VAR_5 * VAR_1;
}
