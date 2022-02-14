
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; struct cmd_clk_get_max_clk_id_response* data; } ;
struct tegra_bpmp_clk_message {TYPE_1__ rx; int cmd; } ;
struct tegra_bpmp {int dummy; } ;
struct cmd_clk_get_max_clk_id_response {scalar_t__ max_id; } ;
typedef int response ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tegra_bpmp_clk_message*,int ,int) ;
 int FUNC_1 (struct tegra_bpmp*,struct tegra_bpmp_clk_message*) ;

__attribute__((used)) static int FUNC_2(struct tegra_bpmp *VAR_3)
{
 struct cmd_clk_get_max_clk_id_response VAR_4;
 struct tegra_bpmp_clk_message VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cmd = VAR_0;
 VAR_5.rx.data = &VAR_4;
 VAR_5.rx.size = sizeof(VAR_4);

 VAR_6 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4.max_id > VAR_2)
  return -VAR_1;

 return VAR_4.max_id;
}
