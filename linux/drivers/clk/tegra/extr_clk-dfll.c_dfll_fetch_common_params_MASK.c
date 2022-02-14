
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dfll {TYPE_1__* dev; int output_clock_name; int cg_scale; int cg; int ci; int cf; int force_mode; int sample_rate; int droop_ctrl; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (struct tegra_dfll*,char*,int *) ;

__attribute__((used)) static int FUNC_4(struct tegra_dfll *VAR_1)
{
 bool VAR_2 = 1;

 VAR_2 &= FUNC_3(VAR_1, "nvidia,droop-ctrl", &VAR_1->droop_ctrl);
 VAR_2 &= FUNC_3(VAR_1, "nvidia,sample-rate", &VAR_1->sample_rate);
 VAR_2 &= FUNC_3(VAR_1, "nvidia,force-mode", &VAR_1->force_mode);
 VAR_2 &= FUNC_3(VAR_1, "nvidia,cf", &VAR_1->cf);
 VAR_2 &= FUNC_3(VAR_1, "nvidia,ci", &VAR_1->ci);
 VAR_2 &= FUNC_3(VAR_1, "nvidia,cg", &VAR_1->cg);
 VAR_1->cg_scale = FUNC_1(VAR_1->dev->of_node,
          "nvidia,cg-scale");

 if (FUNC_2(VAR_1->dev->of_node, "clock-output-names",
        &VAR_1->output_clock_name)) {
  FUNC_0(VAR_1->dev, "missing clock-output-names property\n");
  VAR_2 = 0;
 }

 return VAR_2 ? 0 : -VAR_0;
}
