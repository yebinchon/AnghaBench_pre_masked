
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_fixed_factor {int hw; } ;
struct pxa_clk {struct clk_fixed_factor hp; struct clk_fixed_factor lp; scalar_t__ (* is_in_low_power ) () ;} ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long (* recalc_rate ) (int *,unsigned long) ;} ;


 int FUNC_0 (int *,struct clk_hw*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 (int *,unsigned long) ;
 struct pxa_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
          unsigned long VAR_2)
{
 struct pxa_clk *VAR_3 = FUNC_3(VAR_1);
 struct clk_fixed_factor *VAR_4;

 if (!VAR_3->is_in_low_power || VAR_3->is_in_low_power())
  VAR_4 = &VAR_3->lp;
 else
  VAR_4 = &VAR_3->hp;
 FUNC_0(&VAR_4->hw, VAR_1);
 return VAR_0.recalc_rate(&VAR_4->hw, VAR_2);
}
