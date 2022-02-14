
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_3__ {int size; struct cmd_clk_get_parent_response* data; } ;
struct tegra_bpmp_clk_message {TYPE_1__ rx; int id; int cmd; } ;
struct tegra_bpmp_clk {unsigned int num_parents; scalar_t__* parents; TYPE_2__* bpmp; int id; } ;
struct cmd_clk_get_parent_response {scalar_t__ parent_id; } ;
struct clk_hw {int dummy; } ;
typedef int response ;
typedef int msg ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct tegra_bpmp_clk_message*,int ,int) ;
 int FUNC_3 (TYPE_2__*,struct tegra_bpmp_clk_message*) ;
 struct tegra_bpmp_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_5(struct clk_hw *VAR_2)
{
 struct tegra_bpmp_clk *VAR_3 = FUNC_4(VAR_2);
 struct cmd_clk_get_parent_response VAR_4;
 struct tegra_bpmp_clk_message VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cmd = VAR_0;
 VAR_5.id = VAR_3->id;
 VAR_5.rx.data = &VAR_4;
 VAR_5.rx.size = sizeof(VAR_4);

 VAR_7 = FUNC_3(VAR_3->bpmp, &VAR_5);
 if (VAR_7 < 0) {
  FUNC_1(VAR_3->bpmp->dev, "failed to get parent for %s: %d\n",
   FUNC_0(VAR_2), VAR_7);
  return VAR_1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->num_parents; VAR_6++)
  if (VAR_3->parents[VAR_6] == VAR_4.parent_id)
   return VAR_6;

 return VAR_1;
}
