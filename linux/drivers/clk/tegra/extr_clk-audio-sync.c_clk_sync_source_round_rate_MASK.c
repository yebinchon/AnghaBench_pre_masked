
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_sync_source {unsigned long max_rate; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 struct tegra_clk_sync_source* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_1, unsigned long VAR_2,
           unsigned long *VAR_3)
{
 struct tegra_clk_sync_source *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 > VAR_4->max_rate)
  return -VAR_0;
 else
  return VAR_2;
}
