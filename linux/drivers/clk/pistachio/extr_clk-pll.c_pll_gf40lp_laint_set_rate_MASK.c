
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pistachio_pll_rate_table {int refdiv; int fref; int fbdiv; int postdiv1; int postdiv2; } ;
struct pistachio_clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,int) ;
 struct pistachio_pll_rate_table* FUNC_2 (struct pistachio_clk_pll*,unsigned long,unsigned long) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct pistachio_clk_pll*) ;
 int FUNC_5 (struct pistachio_clk_pll*,int ) ;
 int FUNC_6 (struct pistachio_clk_pll*,int,int ) ;
 int FUNC_7 (char*,char const*,...) ;
 struct pistachio_clk_pll* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_15, unsigned long VAR_16,
         unsigned long VAR_17)
{
 struct pistachio_clk_pll *VAR_18 = FUNC_8(VAR_15);
 struct pistachio_pll_rate_table *VAR_19;
 int VAR_20 = FUNC_3(VAR_15);
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 const char *VAR_25 = FUNC_0(VAR_15);

 if (VAR_16 < VAR_3 || VAR_16 > VAR_1)
  return -VAR_0;

 VAR_19 = FUNC_2(VAR_18, VAR_17, VAR_16);
 if (!VAR_19 || !VAR_19->refdiv)
  return -VAR_0;

 VAR_22 = FUNC_1(VAR_19->fref * VAR_19->fbdiv, VAR_19->refdiv);
 if (VAR_22 < VAR_5 || VAR_22 > VAR_2)
  FUNC_7("%s: VCO %u is out of range %lu..%lu\n", VAR_25, VAR_22,
   VAR_5, VAR_2);

 VAR_21 = FUNC_1(VAR_19->fref, VAR_19->refdiv);
 if (VAR_21 < VAR_4)
  FUNC_7("%s: PFD %u is too low (min %lu)\n",
   VAR_25, VAR_21, VAR_4);
 if (VAR_21 > VAR_22 / 16)
  FUNC_7("%s: PFD %u is too high (max %u)\n",
   VAR_25, VAR_21, VAR_22 / 16);

 VAR_21 = FUNC_5(VAR_18, VAR_6);

 VAR_23 = (VAR_21 >> VAR_12) &
         VAR_11;
 VAR_24 = (VAR_21 >> VAR_14) &
         VAR_13;
 if (VAR_20 &&
     (VAR_19->postdiv1 != VAR_23 ||
      VAR_19->postdiv2 != VAR_24))
  FUNC_7("%s: changing postdiv while PLL is enabled\n", VAR_25);

 if (VAR_19->postdiv2 > VAR_19->postdiv1)
  FUNC_7("%s: postdiv2 should not exceed postdiv1\n", VAR_25);

 VAR_21 &= ~((VAR_9 << VAR_10) |
   (VAR_7 << VAR_8) |
   (VAR_11 << VAR_12) |
   (VAR_13 << VAR_14));
 VAR_21 |= (VAR_19->refdiv << VAR_10) |
  (VAR_19->fbdiv << VAR_8) |
  (VAR_19->postdiv1 << VAR_12) |
  (VAR_19->postdiv2 << VAR_14);
 FUNC_6(VAR_18, VAR_21, VAR_6);

 if (VAR_20)
  FUNC_4(VAR_18);

 return 0;
}
