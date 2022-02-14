
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap_mux_data {int flags; } ;
struct clk_regmap {int dummy; } ;
struct clk_rate_request {int dummy; } ;
struct clk_hw {int dummy; } ;


 struct clk_regmap_mux_data* FUNC_0 (struct clk_regmap*) ;
 int FUNC_1 (struct clk_hw*,struct clk_rate_request*,int ) ;
 struct clk_regmap* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0,
      struct clk_rate_request *VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_2(VAR_0);
 struct clk_regmap_mux_data *VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_0, VAR_1, VAR_3->flags);
}
