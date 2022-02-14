
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {int dummy; } ;
struct dfll_rate_req {int dummy; } ;
struct clk_rate_request {int rate; } ;
struct clk_hw {int dummy; } ;


 struct tegra_dfll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct tegra_dfll*,struct dfll_rate_req*,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0,
       struct clk_rate_request *VAR_1)
{
 struct tegra_dfll *VAR_2 = FUNC_0(VAR_0);
 struct dfll_rate_req VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3, VAR_1->rate);
 if (VAR_4)
  return VAR_4;







 return 0;
}
