
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent_map; } ;
struct clk_rcg {TYPE_1__ s; int freq_tbl; } ;
struct clk_rate_request {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*,int ,struct clk_rate_request*,int ) ;
 struct clk_rcg* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0,
      struct clk_rate_request *VAR_1)
{
 struct clk_rcg *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_2->freq_tbl, VAR_1,
     VAR_2->s.parent_map);
}
