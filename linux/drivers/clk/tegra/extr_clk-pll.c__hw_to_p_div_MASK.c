
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct pdiv_map {int pdiv; scalar_t__ hw_val; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct pdiv_map* pdiv_tohw; } ;


 int VAR_0 ;
 struct tegra_clk_pll* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct tegra_clk_pll *VAR_3 = FUNC_0(VAR_1);
 const struct pdiv_map *VAR_4 = VAR_3->params->pdiv_tohw;

 if (VAR_4) {
  while (VAR_4->pdiv) {
   if (VAR_2 == VAR_4->hw_val)
    return VAR_4->pdiv;
   VAR_4++;
  }
  return -VAR_0;
 }

 return 1 << VAR_2;
}
