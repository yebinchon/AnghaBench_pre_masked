
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_clk_info {int dummy; } ;
struct tegra_bpmp {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,unsigned int) ;
 int FUNC_1 (struct tegra_bpmp_clk_info*) ;
 int FUNC_2 (int ,int ,struct tegra_bpmp*) ;
 int VAR_0 ;
 int FUNC_3 (struct tegra_bpmp*,struct tegra_bpmp_clk_info**) ;
 int FUNC_4 (struct tegra_bpmp*,struct tegra_bpmp_clk_info*,unsigned int) ;
 int FUNC_5 (struct tegra_bpmp*) ;

int FUNC_6(struct tegra_bpmp *VAR_1)
{
 struct tegra_bpmp_clk_info *VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, &VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = VAR_4;

 FUNC_0(VAR_1->dev, "%u clocks probed\n", VAR_3);

 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  goto free;

 VAR_4 = FUNC_2(VAR_1->dev->of_node,
         VAR_0,
         VAR_1);
 if (VAR_4 < 0) {
  FUNC_5(VAR_1);
  goto free;
 }

free:
 FUNC_1(VAR_2);
 return VAR_4;
}
