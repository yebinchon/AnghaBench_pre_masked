
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pll_vco {int val; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll {TYPE_1__ clkr; scalar_t__ vco_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int FUNC_3 (struct clk_alpha_pll*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct pll_vco* FUNC_4 (struct clk_alpha_pll*,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long,int*,int*,int) ;
 int FUNC_6 (struct clk_alpha_pll*,int (*) (struct clk_hw*)) ;
 int FUNC_7 (struct clk_alpha_pll*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (int ,int ,int) ;
 struct clk_alpha_pll* FUNC_11 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_12(struct clk_hw *VAR_5, unsigned long VAR_6,
        unsigned long VAR_7,
        int (*VAR_8)(struct clk_hw *))
{
 struct clk_alpha_pll *VAR_9 = FUNC_11(VAR_5);
 const struct pll_vco *VAR_10;
 u32 VAR_11, VAR_12 = FUNC_7(VAR_9);
 u64 VAR_13;

 VAR_6 = FUNC_5(VAR_6, VAR_7, &VAR_11, &VAR_13, VAR_12);
 VAR_10 = FUNC_4(VAR_9, VAR_6);
 if (VAR_9->vco_table && !VAR_10) {
  FUNC_8("alpha pll not in a valid vco range\n");
  return -VAR_1;
 }

 FUNC_10(VAR_9->clkr.regmap, FUNC_2(VAR_9), VAR_11);

 if (VAR_12 > VAR_0)
  VAR_13 <<= VAR_12 - VAR_0;

 if (VAR_12 > 32)
  FUNC_10(VAR_9->clkr.regmap, FUNC_1(VAR_9), VAR_13 >> 32);

 FUNC_10(VAR_9->clkr.regmap, FUNC_0(VAR_9), VAR_13);

 if (VAR_10) {
  FUNC_9(VAR_9->clkr.regmap, FUNC_3(VAR_9),
       VAR_3 << VAR_4,
       VAR_10->val << VAR_4);
 }

 FUNC_9(VAR_9->clkr.regmap, FUNC_3(VAR_9),
      VAR_2, VAR_2);

 return FUNC_6(VAR_9, VAR_8);
}
