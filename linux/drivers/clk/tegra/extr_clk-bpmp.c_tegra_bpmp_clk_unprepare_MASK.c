
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_clk_message {int id; int cmd; } ;
struct tegra_bpmp_clk {TYPE_1__* bpmp; int id; } ;
struct clk_hw {int dummy; } ;
typedef int msg ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct tegra_bpmp_clk_message*,int ,int) ;
 int FUNC_3 (TYPE_1__*,struct tegra_bpmp_clk_message*) ;
 struct tegra_bpmp_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_1)
{
 struct tegra_bpmp_clk *VAR_2 = FUNC_4(VAR_1);
 struct tegra_bpmp_clk_message VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.cmd = VAR_0;
 VAR_3.id = VAR_2->id;

 VAR_4 = FUNC_3(VAR_2->bpmp, &VAR_3);
 if (VAR_4 < 0)
  FUNC_1(VAR_2->bpmp->dev, "failed to disable clock %s: %d\n",
   FUNC_0(VAR_1), VAR_4);
}
