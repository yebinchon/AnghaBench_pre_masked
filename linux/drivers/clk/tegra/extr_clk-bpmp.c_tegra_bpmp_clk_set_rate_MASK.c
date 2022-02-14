
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; struct cmd_clk_set_rate_response* data; } ;
struct TYPE_3__ {int size; struct tegra_bpmp_clk_message* data; } ;
struct tegra_bpmp_clk_message {unsigned long rate; TYPE_2__ rx; TYPE_1__ tx; int id; int cmd; } ;
struct tegra_bpmp_clk {int bpmp; int id; } ;
struct cmd_clk_set_rate_response {int dummy; } ;
struct cmd_clk_set_rate_request {unsigned long rate; TYPE_2__ rx; TYPE_1__ tx; int id; int cmd; } ;
struct clk_hw {int dummy; } ;
typedef int response ;
typedef int request ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_bpmp_clk_message*,int ,int) ;
 int FUNC_1 (int ,struct tegra_bpmp_clk_message*) ;
 struct tegra_bpmp_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 struct tegra_bpmp_clk *VAR_4 = FUNC_2(VAR_1);
 struct cmd_clk_set_rate_response VAR_5;
 struct cmd_clk_set_rate_request VAR_6;
 struct tegra_bpmp_clk_message VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.rate = VAR_2;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cmd = VAR_0;
 VAR_7.id = VAR_4->id;
 VAR_7.tx.data = &VAR_6;
 VAR_7.tx.size = sizeof(VAR_6);
 VAR_7.rx.data = &VAR_5;
 VAR_7.rx.size = sizeof(VAR_5);

 return FUNC_1(VAR_4->bpmp, &VAR_7);
}
