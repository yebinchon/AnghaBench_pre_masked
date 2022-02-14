
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dpll_data {int idlest_mask; int idlest_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; int hw; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clk_hw_omap*,int ) ;
 int FUNC_2 (struct clk_hw_omap*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct clk_hw_omap*) ;
 int FUNC_5 (struct clk_hw_omap*) ;
 int FUNC_6 (struct clk_hw_omap*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_9(struct clk_hw_omap *VAR_2)
{
 const struct dpll_data *VAR_3;
 u8 VAR_4;
 u8 VAR_5 = 1;
 int VAR_6 = 0;

 FUNC_7("clock: locking DPLL %s\n", FUNC_3(&VAR_2->hw));

 VAR_3 = VAR_2->dpll_data;
 VAR_5 <<= FUNC_0(VAR_3->idlest_mask);


 if ((VAR_1->clk_readl(&VAR_3->idlest_reg) & VAR_3->idlest_mask) ==
     VAR_5)
  goto done;

 VAR_4 = FUNC_5(VAR_2);

 if (VAR_4)
  FUNC_6(VAR_2);

 FUNC_1(VAR_2, VAR_0);

 VAR_6 = FUNC_2(VAR_2, 1);

 if (VAR_4)
  FUNC_4(VAR_2);

done:
 return VAR_6;
}
