
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pistachio_pll_rate_table {int refdiv; int fref; int fbdiv; int frac; int postdiv1; int postdiv2; } ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct clk_hw*,int ) ;
 struct pistachio_pll_rate_table* FUNC_3 (struct pistachio_clk_pll*,unsigned long,unsigned long) ;
 int FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (struct pistachio_clk_pll*) ;
 int FUNC_6 (struct pistachio_clk_pll*,int ) ;
 int FUNC_7 (struct pistachio_clk_pll*,int,int ) ;
 int FUNC_8 (char*,char const*,...) ;
 struct pistachio_clk_pll* FUNC_9 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_20, unsigned long VAR_21,
        unsigned long VAR_22)
{
 struct pistachio_clk_pll *VAR_23 = FUNC_9(VAR_20);
 struct pistachio_pll_rate_table *VAR_24;
 int VAR_25 = FUNC_4(VAR_20);
 u64 VAR_26, VAR_27, VAR_28, VAR_29;
 const char *VAR_30 = FUNC_0(VAR_20);

 if (VAR_21 < VAR_3 || VAR_21 > VAR_1)
  return -VAR_0;

 VAR_24 = FUNC_3(VAR_23, VAR_22, VAR_21);
 if (!VAR_24 || !VAR_24->refdiv)
  return -VAR_0;


 VAR_27 = VAR_24->fref;
 VAR_27 *= (VAR_24->fbdiv << 24) + VAR_24->frac;
 VAR_27 = FUNC_1(VAR_27, VAR_24->refdiv << 24);

 if (VAR_27 < VAR_5 || VAR_27 > VAR_2)
  FUNC_8("%s: VCO %llu is out of range %lu..%lu\n", VAR_30, VAR_27,
   VAR_5, VAR_2);

 VAR_26 = FUNC_1(VAR_24->fref, VAR_24->refdiv);
 if (VAR_26 < VAR_4)
  FUNC_8("%s: PFD %llu is too low (min %lu)\n",
   VAR_30, VAR_26, VAR_4);
 if (VAR_26 > VAR_27 / 16)
  FUNC_8("%s: PFD %llu is too high (max %llu)\n",
   VAR_30, VAR_26, VAR_27 / 16);

 VAR_26 = FUNC_6(VAR_23, VAR_6);
 VAR_26 &= ~((VAR_9 << VAR_10) |
   (VAR_7 << VAR_8));
 VAR_26 |= (VAR_24->refdiv << VAR_10) |
  (VAR_24->fbdiv << VAR_8);
 FUNC_7(VAR_23, VAR_26, VAR_6);

 VAR_26 = FUNC_6(VAR_23, VAR_11);

 VAR_28 = (VAR_26 >> VAR_15) &
         VAR_14;
 VAR_29 = (VAR_26 >> VAR_17) &
         VAR_16;
 if (VAR_25 &&
     (VAR_24->postdiv1 != VAR_28 ||
      VAR_24->postdiv2 != VAR_29))
  FUNC_8("%s: changing postdiv while PLL is enabled\n", VAR_30);

 if (VAR_24->postdiv2 > VAR_24->postdiv1)
  FUNC_8("%s: postdiv2 should not exceed postdiv1\n", VAR_30);

 VAR_26 &= ~((VAR_12 << VAR_13) |
   (VAR_14 <<
    VAR_15) |
   (VAR_16 <<
    VAR_17));
 VAR_26 |= (VAR_24->frac << VAR_13) |
  (VAR_24->postdiv1 << VAR_15) |
  (VAR_24->postdiv2 << VAR_17);
 FUNC_7(VAR_23, VAR_26, VAR_11);


 if (VAR_24->frac)
  FUNC_2(VAR_20, VAR_18);
 else
  FUNC_2(VAR_20, VAR_19);

 if (VAR_25)
  FUNC_5(VAR_23);

 return 0;
}
