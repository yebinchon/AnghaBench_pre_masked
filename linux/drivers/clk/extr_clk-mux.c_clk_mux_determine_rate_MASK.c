
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {int dummy; } ;
struct clk_mux {int flags; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*,struct clk_rate_request*,int ) ;
 struct clk_mux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0,
      struct clk_rate_request *VAR_1)
{
 struct clk_mux *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_1, VAR_2->flags);
}
