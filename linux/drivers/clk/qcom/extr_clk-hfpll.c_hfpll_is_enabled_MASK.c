
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct hfpll_data {int mode_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_hfpll {TYPE_1__ clkr; struct hfpll_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 struct clk_hfpll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3)
{
 struct clk_hfpll *VAR_4 = FUNC_1(VAR_3);
 struct hfpll_data const *VAR_5 = VAR_4->d;
 struct regmap *VAR_6 = VAR_4->clkr.regmap;
 u32 VAR_7;

 FUNC_0(VAR_6, VAR_5->mode_reg, &VAR_7);
 VAR_7 &= 0x7;
 return VAR_7 == (VAR_0 | VAR_2 | VAR_1);
}
