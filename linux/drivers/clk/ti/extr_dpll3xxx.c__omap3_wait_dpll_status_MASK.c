
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dpll_data {int idlest_mask; int idlest_reg; } ;
struct clk_hw_omap {int hw; struct dpll_data* dpll_data; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,char*,int) ;
 int FUNC_3 (char*,char const*,char*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct clk_hw_omap *VAR_3, u8 VAR_4)
{
 const struct dpll_data *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = -VAR_0;
 const char *VAR_8;

 VAR_5 = VAR_3->dpll_data;
 VAR_8 = FUNC_1(&VAR_3->hw);

 VAR_4 <<= FUNC_0(VAR_5->idlest_mask);

 while (((VAR_2->clk_readl(&VAR_5->idlest_reg) & VAR_5->idlest_mask)
  != VAR_4) && VAR_6 < VAR_1) {
  VAR_6++;
  FUNC_5(1);
 }

 if (VAR_6 == VAR_1) {
  FUNC_3("clock: %s failed transition to '%s'\n",
         VAR_8, (VAR_4) ? "locked" : "bypassed");
 } else {
  FUNC_2("clock: %s transition to '%s' in %d loops\n",
    VAR_8, (VAR_4) ? "locked" : "bypassed", VAR_6);

  VAR_7 = 0;
 }

 return VAR_7;
}
