
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
struct clk_hfpll {int lock; TYPE_1__ clkr; struct hfpll_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct regmap*,int ,int*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct clk_hfpll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_3)
{
 unsigned long VAR_4;
 struct clk_hfpll *VAR_5 = FUNC_4(VAR_3);
 struct hfpll_data const *VAR_6 = VAR_5->d;
 struct regmap *VAR_7 = VAR_5->clkr.regmap;
 u32 VAR_8;

 FUNC_2(&VAR_5->lock, VAR_4);
 FUNC_1(VAR_7, VAR_6->mode_reg, &VAR_8);
 if (!(VAR_8 & (VAR_0 | VAR_2 | VAR_1)))
  FUNC_0(VAR_3);
 FUNC_3(&VAR_5->lock, VAR_4);

 return 0;
}
