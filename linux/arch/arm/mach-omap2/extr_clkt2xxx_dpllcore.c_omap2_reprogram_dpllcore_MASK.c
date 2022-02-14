
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct prcm_config {int cm_clksel1_pll; int cm_clksel2_pll; int base_sdrc_rfr; } ;
struct dpll_data {int mult_mask; int div1_mask; int mult_div1_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int dpll_speed; int xtal_speed; } ;
struct TYPE_3__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_9 (int *) ;
 struct clk_hw_omap* FUNC_10 (struct clk_hw*) ;

int FUNC_11(struct clk_hw *VAR_7, unsigned long VAR_8,
        unsigned long VAR_9)
{
 struct clk_hw_omap *VAR_10 = FUNC_10(VAR_7);
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17 = 0;
 struct prcm_config VAR_18;
 const struct dpll_data *VAR_19;

 VAR_11 = FUNC_3();
 VAR_13 = FUNC_4();

 if ((VAR_8 == (VAR_11 / 2)) && (VAR_13 == 2)) {
  FUNC_8(VAR_0, 1);
 } else if ((VAR_8 == (VAR_11 * 2)) && (VAR_13 == 1)) {
  FUNC_8(VAR_1, 1);
 } else if (VAR_8 != VAR_11) {
  VAR_15 = FUNC_1(VAR_8);
  if (VAR_15 != VAR_8)
   return -VAR_2;

  if (VAR_13 == 1)
   VAR_12 = VAR_5->dpll_speed;
  else
   VAR_12 = VAR_5->dpll_speed / 2;

  VAR_19 = VAR_10->dpll_data;
  if (!VAR_19)
   return -VAR_2;

  VAR_18.cm_clksel1_pll =
   VAR_6.clk_readl(&VAR_19->mult_div1_reg);
  VAR_18.cm_clksel1_pll &= ~(VAR_19->mult_mask |
        VAR_19->div1_mask);
  VAR_14 = ((VAR_5->xtal_speed / 1000000) - 1);
  VAR_18.cm_clksel2_pll = FUNC_5();
  VAR_18.cm_clksel2_pll &= ~VAR_3;
  if (VAR_8 > VAR_12) {
   VAR_18.cm_clksel2_pll |= VAR_1;
   VAR_13 = ((VAR_8 / 2) / 1000000);
   VAR_16 = VAR_1;
  } else {
   VAR_18.cm_clksel2_pll |= VAR_0;
   VAR_13 = (VAR_8 / 1000000);
   VAR_16 = VAR_0;
  }
  VAR_18.cm_clksel1_pll |= (VAR_14 << FUNC_0(VAR_19->mult_mask));
  VAR_18.cm_clksel1_pll |= (VAR_13 << FUNC_0(VAR_19->div1_mask));


  VAR_18.base_sdrc_rfr = VAR_4;

  if (VAR_8 == VAR_5->xtal_speed)
   VAR_17 = 1;


  FUNC_8(VAR_1, 1);


  FUNC_2(VAR_18.cm_clksel1_pll, VAR_18.base_sdrc_rfr,
          VAR_17);


  FUNC_7(FUNC_6());
  FUNC_8(VAR_16, 0);
 }

 return 0;
}
