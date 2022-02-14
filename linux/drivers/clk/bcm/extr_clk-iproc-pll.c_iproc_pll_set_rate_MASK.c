
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_pll_vco_param {int dummy; } ;
struct iproc_pll_ctrl {int flags; } ;
struct iproc_pll {struct iproc_pll_vco_param* vco_param; struct iproc_pll_ctrl* ctrl; } ;
struct iproc_clk {struct iproc_pll* pll; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,struct iproc_pll_vco_param*) ;
 int FUNC_1 (struct iproc_pll*,unsigned long) ;
 int FUNC_2 (struct iproc_clk*,struct iproc_pll_vco_param*,unsigned long) ;
 struct iproc_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct iproc_clk *VAR_4 = FUNC_3(VAR_1);
 struct iproc_pll *VAR_5 = VAR_4->pll;
 const struct iproc_pll_ctrl *VAR_6 = VAR_5->ctrl;
 struct iproc_pll_vco_param VAR_7;
 int VAR_8, VAR_9;

 if (VAR_6->flags & VAR_0) {
  VAR_9 = FUNC_0(VAR_2, VAR_3, &VAR_7);
  if (VAR_9)
   return VAR_9;
 } else {
  VAR_8 = FUNC_1(VAR_5, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_7 = VAR_5->vco_param[VAR_8];
 }

 VAR_9 = FUNC_2(VAR_4, &VAR_7, VAR_3);
 return VAR_9;
}
