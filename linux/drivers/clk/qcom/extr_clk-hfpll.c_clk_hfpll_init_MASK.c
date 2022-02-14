
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct hfpll_data {int lock_bit; scalar_t__ status_reg; scalar_t__ mode_reg; } ;
struct clk_hw {int clk; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_hfpll {TYPE_1__ clkr; struct hfpll_data* d; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (struct regmap*,scalar_t__,int*) ;
 struct clk_hfpll* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_7(struct clk_hw *VAR_3)
{
 struct clk_hfpll *VAR_4 = FUNC_6(VAR_3);
 struct hfpll_data const *VAR_5 = VAR_4->d;
 struct regmap *VAR_6 = VAR_4->clkr.regmap;
 u32 VAR_7, VAR_8;

 FUNC_5(VAR_6, VAR_5->mode_reg, &VAR_7);
 if (VAR_7 != (VAR_0 | VAR_2 | VAR_1)) {
  FUNC_3(VAR_3);
  return;
 }

 if (VAR_5->status_reg) {
  FUNC_5(VAR_6, VAR_5->status_reg, &VAR_8);
  if (!(VAR_8 & FUNC_0(VAR_5->lock_bit))) {
   FUNC_1(1, "HFPLL %s is ON, but not locked!\n",
        FUNC_2(VAR_3->clk));
   FUNC_4(VAR_3);
   FUNC_3(VAR_3);
  }
 }
}
