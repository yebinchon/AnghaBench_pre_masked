
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dpll_data {int freqsel_mask; int dcc_mask; scalar_t__ last_rounded_rate; scalar_t__ dcc_rate; int mult_mask; int div1_mask; int last_rounded_m; int last_rounded_n; int dco_mask; int sddiv_mask; int m4xen_mask; int lpmode_mask; int control_reg; scalar_t__ last_rounded_lpmode; scalar_t__ last_rounded_m4xen; int mult_div1_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* clk_readl ) (int *) ;int (* clk_writel ) (int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clk_hw_omap*,int*,int,int) ;
 int FUNC_2 (struct clk_hw_omap*,int*,int,int) ;
 int FUNC_3 (struct clk_hw_omap*) ;
 int FUNC_4 (struct clk_hw_omap*) ;
 int FUNC_5 (struct clk_hw_omap*) ;
 int FUNC_6 (struct clk_hw_omap*) ;
 int FUNC_7 (struct clk_hw_omap*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,int *) ;
 TYPE_2__* FUNC_14 () ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_15(struct clk_hw_omap *VAR_3, u16 VAR_4)
{
 struct dpll_data *VAR_5 = VAR_3->dpll_data;
 u8 VAR_6, VAR_7, VAR_8 = 0;
 u32 VAR_9;
 bool VAR_10;


 FUNC_3(VAR_3);





 if (FUNC_14()->flags & VAR_0) {
  VAR_9 = VAR_2->clk_readl(&VAR_5->control_reg);
  VAR_9 &= ~VAR_5->freqsel_mask;
  VAR_9 |= VAR_4 << FUNC_0(VAR_5->freqsel_mask);
  VAR_2->clk_writel(VAR_9, &VAR_5->control_reg);
 }


 VAR_9 = VAR_2->clk_readl(&VAR_5->mult_div1_reg);


 if (VAR_5->dcc_mask) {
  if (VAR_5->last_rounded_rate >= VAR_5->dcc_rate)
   VAR_9 |= VAR_5->dcc_mask;
  else
   VAR_9 &= ~VAR_5->dcc_mask;
 }

 VAR_9 &= ~(VAR_5->mult_mask | VAR_5->div1_mask);
 VAR_9 |= VAR_5->last_rounded_m << FUNC_0(VAR_5->mult_mask);
 VAR_9 |= (VAR_5->last_rounded_n - 1) << FUNC_0(VAR_5->div1_mask);


 if (VAR_5->dco_mask) {
  FUNC_1(VAR_3, &VAR_6, VAR_5->last_rounded_m, VAR_5->last_rounded_n);
  VAR_9 &= ~(VAR_5->dco_mask);
  VAR_9 |= VAR_6 << FUNC_0(VAR_5->dco_mask);
 }
 if (VAR_5->sddiv_mask) {
  FUNC_2(VAR_3, &VAR_7, VAR_5->last_rounded_m,
         VAR_5->last_rounded_n);
  VAR_9 &= ~(VAR_5->sddiv_mask);
  VAR_9 |= VAR_7 << FUNC_0(VAR_5->sddiv_mask);
 }
 VAR_10 = FUNC_14()->flags & VAR_1;

 if (VAR_10) {
  VAR_8 = FUNC_6(VAR_3);
  if (VAR_8) {
   FUNC_7(VAR_3);


   FUNC_6(VAR_3);
  }
 }

 VAR_2->clk_writel(VAR_9, &VAR_5->mult_div1_reg);


 if (VAR_5->m4xen_mask || VAR_5->lpmode_mask) {
  VAR_9 = VAR_2->clk_readl(&VAR_5->control_reg);

  if (VAR_5->m4xen_mask) {
   if (VAR_5->last_rounded_m4xen)
    VAR_9 |= VAR_5->m4xen_mask;
   else
    VAR_9 &= ~VAR_5->m4xen_mask;
  }

  if (VAR_5->lpmode_mask) {
   if (VAR_5->last_rounded_lpmode)
    VAR_9 |= VAR_5->lpmode_mask;
   else
    VAR_9 &= ~VAR_5->lpmode_mask;
  }

  VAR_2->clk_writel(VAR_9, &VAR_5->control_reg);
 }





 FUNC_4(VAR_3);

 if (VAR_10 && VAR_8)
  FUNC_5(VAR_3);

 return 0;
}
