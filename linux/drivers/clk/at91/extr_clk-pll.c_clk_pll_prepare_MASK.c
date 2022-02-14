
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct regmap {int dummy; } ;
struct clk_pll_layout {int mul_mask; int mul_shift; int pllr_mask; } ;
struct clk_pll_characteristics {int* out; int* icpll; } ;
struct clk_pll {int id; int div; int mul; size_t range; struct clk_pll_characteristics* characteristics; struct clk_pll_layout* layout; struct regmap* regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (unsigned int,struct clk_pll_layout const*) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (struct regmap*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct regmap*,int,unsigned int*) ;
 int FUNC_9 (struct regmap*,int,int ,int) ;
 struct clk_pll* FUNC_10 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_11(struct clk_hw *VAR_5)
{
 struct clk_pll *VAR_6 = FUNC_10(VAR_5);
 struct regmap *VAR_7 = VAR_6->regmap;
 const struct clk_pll_layout *VAR_8 = VAR_6->layout;
 const struct clk_pll_characteristics *VAR_9 =
       VAR_6->characteristics;
 u8 VAR_10 = VAR_6->id;
 u32 VAR_11 = FUNC_5(VAR_10);
 int VAR_12 = FUNC_4(VAR_10);
 u8 VAR_13 = 0;
 unsigned int VAR_14;
 unsigned int VAR_15;
 u8 VAR_16;
 u16 VAR_17;

 FUNC_8(VAR_7, VAR_12, &VAR_14);
 VAR_16 = FUNC_0(VAR_14);
 VAR_17 = FUNC_3(VAR_14, VAR_8);

 FUNC_8(VAR_7, VAR_1, &VAR_15);
 if ((VAR_15 & VAR_11) &&
     (VAR_16 == VAR_6->div && VAR_17 == VAR_6->mul))
  return 0;

 if (VAR_9->out)
  VAR_13 = VAR_9->out[VAR_6->range];

 if (VAR_9->icpll)
  FUNC_9(VAR_7, VAR_0, FUNC_1(VAR_10),
   VAR_9->icpll[VAR_6->range] << FUNC_2(VAR_10));

 FUNC_9(VAR_7, VAR_12, VAR_8->pllr_mask,
   VAR_6->div | (VAR_3 << VAR_2) |
   (VAR_13 << VAR_4) |
   ((VAR_6->mul & VAR_8->mul_mask) << VAR_8->mul_shift));

 while (!FUNC_6(VAR_7, VAR_6->id))
  FUNC_7();

 return 0;
}
