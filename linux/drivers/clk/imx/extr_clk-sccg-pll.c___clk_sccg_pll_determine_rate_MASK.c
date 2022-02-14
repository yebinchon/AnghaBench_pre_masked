
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct clk_sccg_pll_setup {int fout; } ;
struct clk_sccg_pll {int bypass2; int bypass1; int parent; struct clk_sccg_pll_setup setup; } ;
struct clk_rate_request {int rate; int best_parent_rate; struct clk_hw* best_parent_hw; void* min_rate; void* max_rate; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct clk_hw*,struct clk_rate_request*) ;
 struct clk_hw* FUNC_1 (struct clk_hw*,int) ;
 int FUNC_2 (struct clk_sccg_pll_setup*,int ,void*,int) ;
 struct clk_sccg_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1,
     struct clk_rate_request *VAR_2,
     uint64_t VAR_3,
     uint64_t VAR_4,
     uint64_t VAR_5,
     int VAR_6)
{
 struct clk_sccg_pll *VAR_7 = FUNC_3(VAR_1);
 struct clk_sccg_pll_setup *VAR_8 = &VAR_7->setup;
 struct clk_hw *VAR_9 = ((void*)0);
 int VAR_10;
 int VAR_11 = -VAR_0;

 VAR_2->max_rate = VAR_4;
 VAR_2->min_rate = VAR_3;

 switch (VAR_6) {
 case 128:
  VAR_10 = VAR_7->bypass2;
  break;
 case 129:
  VAR_10 = VAR_7->bypass1;
  break;
 default:
  VAR_10 = VAR_7->parent;
  break;
 }

 VAR_9 = FUNC_1(VAR_1, VAR_10);
 VAR_11 = FUNC_0(VAR_9, VAR_2);
 if (!VAR_11) {
  VAR_11 = FUNC_2(VAR_8, VAR_2->rate,
      VAR_5, VAR_6);
 }

 VAR_2->best_parent_hw = VAR_9;
 VAR_2->best_parent_rate = VAR_2->rate;
 VAR_2->rate = VAR_8->fout;

 return VAR_11;
}
