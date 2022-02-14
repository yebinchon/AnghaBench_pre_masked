
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_hdmi {int hdmi; int pll; int vdd; int output; } ;
struct host1x_client {int dummy; } ;


 struct tegra_hdmi* FUNC_0 (struct host1x_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct host1x_client *VAR_0)
{
 struct tegra_hdmi *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->output);

 FUNC_1(VAR_1->vdd);
 FUNC_1(VAR_1->pll);
 FUNC_1(VAR_1->hdmi);

 return 0;
}
