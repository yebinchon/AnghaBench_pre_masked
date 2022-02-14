
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct regmap {int dummy; } ;
struct hfpll_data {unsigned long user_vco_mask; unsigned long low_vco_max_rate; scalar_t__ l_reg; scalar_t__ user_reg; } ;
struct clk_hw {int clk; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_hfpll {int lock; TYPE_1__ clkr; struct hfpll_data* d; } ;


 int FUNC_0 (struct clk_hfpll*) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct regmap*,scalar_t__,unsigned long*) ;
 int FUNC_4 (struct regmap*,scalar_t__,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct clk_hfpll* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long VAR_2)
{
 struct clk_hfpll *VAR_3 = FUNC_7(VAR_0);
 struct hfpll_data const *VAR_4 = VAR_3->d;
 struct regmap *VAR_5 = VAR_3->clkr.regmap;
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;
 bool VAR_9;

 VAR_7 = VAR_1 / VAR_2;

 FUNC_5(&VAR_3->lock, VAR_6);

 VAR_9 = FUNC_2(VAR_0->clk);
 if (VAR_9)
  FUNC_0(VAR_3);


 if (VAR_4->user_reg && VAR_4->user_vco_mask) {
  FUNC_3(VAR_5, VAR_4->user_reg, &VAR_8);
  if (VAR_1 <= VAR_4->low_vco_max_rate)
   VAR_8 &= ~VAR_4->user_vco_mask;
  else
   VAR_8 |= VAR_4->user_vco_mask;
  FUNC_4(VAR_5, VAR_4->user_reg, VAR_8);
 }

 FUNC_4(VAR_5, VAR_4->l_reg, VAR_7);

 if (VAR_9)
  FUNC_1(VAR_0);

 FUNC_6(&VAR_3->lock, VAR_6);

 return 0;
}
