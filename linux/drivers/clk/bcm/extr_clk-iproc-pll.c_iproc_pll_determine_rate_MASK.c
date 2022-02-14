
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iproc_pll_vco_param {scalar_t__ rate; } ;
struct iproc_pll_ctrl {int flags; } ;
struct iproc_pll {unsigned int num_vco_entries; TYPE_1__* vco_param; struct iproc_pll_ctrl* ctrl; } ;
struct iproc_clk {struct iproc_pll* pll; } ;
struct clk_rate_request {scalar_t__ rate; scalar_t__ best_parent_rate; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,struct iproc_pll_vco_param*) ;
 struct iproc_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3,
  struct clk_rate_request *VAR_4)
{
 unsigned int VAR_5;
 struct iproc_clk *VAR_6 = FUNC_2(VAR_3);
 struct iproc_pll *VAR_7 = VAR_6->pll;
 const struct iproc_pll_ctrl *VAR_8 = VAR_7->ctrl;
 unsigned long VAR_9, VAR_10;
 unsigned int VAR_11 = 0;
 int VAR_12;

 if (VAR_4->rate == 0 || VAR_4->best_parent_rate == 0)
  return -VAR_0;

 if (VAR_8->flags & VAR_1) {
  struct iproc_pll_vco_param VAR_13;

  VAR_12 = FUNC_1(VAR_4->rate, VAR_4->best_parent_rate,
     &VAR_13);
  if (VAR_12)
   return VAR_12;

  VAR_4->rate = VAR_13.rate;
  return 0;
 }

 if (!VAR_7->vco_param)
  return -VAR_0;

 VAR_10 = VAR_2;
 for (VAR_5 = 0; VAR_5 < VAR_7->num_vco_entries; VAR_5++) {
  VAR_9 = FUNC_0(VAR_4->rate - VAR_7->vco_param[VAR_5].rate);
  if (VAR_9 <= VAR_10) {
   VAR_10 = VAR_9;
   VAR_11 = VAR_5;
  }

  if (VAR_9 == 0)
   break;
 }

 VAR_4->rate = VAR_7->vco_param[VAR_11].rate;

 return 0;
}
