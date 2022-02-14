
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; struct cmd_clk_is_enabled_response* data; } ;
struct tegra_bpmp_clk_message {TYPE_1__ rx; int id; int cmd; } ;
struct tegra_bpmp_clk {int bpmp; int id; } ;
struct cmd_clk_is_enabled_response {int state; } ;
struct clk_hw {int dummy; } ;
typedef int response ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_bpmp_clk_message*,int ,int) ;
 int FUNC_1 (int ,struct tegra_bpmp_clk_message*) ;
 struct tegra_bpmp_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct tegra_bpmp_clk *VAR_2 = FUNC_2(VAR_1);
 struct cmd_clk_is_enabled_response VAR_3;
 struct tegra_bpmp_clk_message VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd = VAR_0;
 VAR_4.id = VAR_2->id;
 VAR_4.rx.data = &VAR_3;
 VAR_4.rx.size = sizeof(VAR_3);

 VAR_5 = FUNC_1(VAR_2->bpmp, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_3.state;
}
