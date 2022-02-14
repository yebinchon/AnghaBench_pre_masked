
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct freq_tbl {int src; } ;
struct TYPE_2__ {int parent_map; } ;
struct clk_rcg {TYPE_1__ s; struct freq_tbl* freq_tbl; } ;
struct clk_rate_request {int best_parent_rate; int rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 struct clk_hw* FUNC_0 (struct clk_hw*,int) ;
 int FUNC_1 (struct clk_hw*,int ) ;
 int FUNC_2 (struct clk_hw*,int ,int ) ;
 struct clk_rcg* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0,
      struct clk_rate_request *VAR_1)
{
 struct clk_rcg *VAR_2 = FUNC_3(VAR_0);
 const struct freq_tbl *VAR_3 = VAR_2->freq_tbl;
 struct clk_hw *VAR_4;
 int VAR_5 = FUNC_2(VAR_0, VAR_2->s.parent_map, VAR_3->src);

 VAR_1->best_parent_hw = VAR_4 = FUNC_0(VAR_0, VAR_5);
 VAR_1->best_parent_rate = FUNC_1(VAR_4, VAR_1->rate);
 VAR_1->rate = VAR_1->best_parent_rate;

 return 0;
}
