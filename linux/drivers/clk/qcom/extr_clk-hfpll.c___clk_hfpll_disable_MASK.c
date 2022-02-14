
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct hfpll_data {int mode_reg; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_hfpll {TYPE_1__ clkr; struct hfpll_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct clk_hfpll *VAR_3)
{
 struct hfpll_data const *VAR_4 = VAR_3->d;
 struct regmap *VAR_5 = VAR_3->clkr.regmap;





 FUNC_0(VAR_5, VAR_4->mode_reg,
      VAR_0 | VAR_2 | VAR_1, 0);
}
