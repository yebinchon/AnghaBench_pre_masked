
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_clk_message {int id; int cmd; } ;
struct tegra_bpmp_clk {int bpmp; int id; } ;
struct clk_hw {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_bpmp_clk_message*,int ,int) ;
 int FUNC_1 (int ,struct tegra_bpmp_clk_message*) ;
 struct tegra_bpmp_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct tegra_bpmp_clk *VAR_2 = FUNC_2(VAR_1);
 struct tegra_bpmp_clk_message VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.cmd = VAR_0;
 VAR_3.id = VAR_2->id;

 return FUNC_1(VAR_2->bpmp, &VAR_3);
}
