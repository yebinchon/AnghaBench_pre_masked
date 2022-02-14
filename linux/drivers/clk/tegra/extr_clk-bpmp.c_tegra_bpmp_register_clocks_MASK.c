
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_clk_info {int name; int id; } ;
struct tegra_bpmp_clk {int dummy; } ;
struct tegra_bpmp {unsigned int num_clocks; struct tegra_bpmp_clk** clocks; int dev; } ;
typedef int clk ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tegra_bpmp_clk*) ;
 int FUNC_1 (struct tegra_bpmp_clk*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 struct tegra_bpmp_clk** FUNC_3 (int ,unsigned int,int,int ) ;
 struct tegra_bpmp_clk* FUNC_4 (struct tegra_bpmp*,struct tegra_bpmp_clk_info*,struct tegra_bpmp_clk_info*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct tegra_bpmp *VAR_2,
          struct tegra_bpmp_clk_info *VAR_3,
          unsigned int VAR_4)
{
 struct tegra_bpmp_clk *VAR_5;
 unsigned int VAR_6;

 VAR_2->num_clocks = VAR_4;

 VAR_2->clocks = FUNC_3(VAR_2->dev, VAR_4, sizeof(VAR_5), VAR_1);
 if (!VAR_2->clocks)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct tegra_bpmp_clk_info *VAR_7 = &VAR_3[VAR_6];

  VAR_5 = FUNC_4(VAR_2, VAR_7, VAR_3, VAR_4);
  if (FUNC_0(VAR_5)) {
   FUNC_2(VAR_2->dev,
    "failed to register clock %u (%s): %ld\n",
    VAR_7->id, VAR_7->name, FUNC_1(VAR_5));
   continue;
  }

  VAR_2->clocks[VAR_6] = VAR_5;
 }

 return 0;
}
