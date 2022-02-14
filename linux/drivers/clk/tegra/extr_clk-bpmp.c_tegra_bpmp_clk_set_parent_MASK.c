
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int size; struct cmd_clk_set_parent_response* data; } ;
struct TYPE_3__ {int size; struct tegra_bpmp_clk_message* data; } ;
struct tegra_bpmp_clk_message {TYPE_2__ rx; TYPE_1__ tx; int id; int cmd; int parent_id; } ;
struct tegra_bpmp_clk {int bpmp; int id; int * parents; } ;
struct cmd_clk_set_parent_response {int dummy; } ;
struct cmd_clk_set_parent_request {TYPE_2__ rx; TYPE_1__ tx; int id; int cmd; int parent_id; } ;
struct clk_hw {int dummy; } ;
typedef int response ;
typedef int request ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_bpmp_clk_message*,int ,int) ;
 int FUNC_1 (int ,struct tegra_bpmp_clk_message*) ;
 struct tegra_bpmp_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct tegra_bpmp_clk *VAR_3 = FUNC_2(VAR_1);
 struct cmd_clk_set_parent_response VAR_4;
 struct cmd_clk_set_parent_request VAR_5;
 struct tegra_bpmp_clk_message VAR_6;
 int VAR_7;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.parent_id = VAR_3->parents[VAR_2];

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd = VAR_0;
 VAR_6.id = VAR_3->id;
 VAR_6.tx.data = &VAR_5;
 VAR_6.tx.size = sizeof(VAR_5);
 VAR_6.rx.data = &VAR_4;
 VAR_6.rx.size = sizeof(VAR_4);

 VAR_7 = FUNC_1(VAR_3->bpmp, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;



 return 0;
}
