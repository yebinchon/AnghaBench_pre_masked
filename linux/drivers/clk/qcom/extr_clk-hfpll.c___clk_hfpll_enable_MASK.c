
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct hfpll_data {int mode_reg; scalar_t__ status_reg; int lock_bit; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_hfpll {TYPE_1__ clkr; struct hfpll_data* d; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct regmap*,scalar_t__,int*) ;
 int FUNC_3 (struct regmap*,int ,int ,int ) ;
 struct clk_hfpll* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_3)
{
 struct clk_hfpll *VAR_4 = FUNC_4(VAR_3);
 struct hfpll_data const *VAR_5 = VAR_4->d;
 struct regmap *VAR_6 = VAR_4->clkr.regmap;
 u32 VAR_7;

 FUNC_1(VAR_3);


 FUNC_3(VAR_6, VAR_5->mode_reg, VAR_0, VAR_0);





 FUNC_5(10);


 FUNC_3(VAR_6, VAR_5->mode_reg, VAR_2, VAR_2);


 if (VAR_5->status_reg) {
  do {
   FUNC_2(VAR_6, VAR_5->status_reg, &VAR_7);
  } while (!(VAR_7 & FUNC_0(VAR_5->lock_bit)));
 } else {
  FUNC_5(60);
 }


 FUNC_3(VAR_6, VAR_5->mode_reg, VAR_1, VAR_1);
}
