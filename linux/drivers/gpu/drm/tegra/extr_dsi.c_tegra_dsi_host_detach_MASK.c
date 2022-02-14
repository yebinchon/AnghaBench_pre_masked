
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dev; } ;
struct tegra_output {TYPE_2__ connector; TYPE_1__* panel; } ;
struct tegra_dsi {struct tegra_output output; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int dev; } ;
struct TYPE_3__ {int * dev; } ;


 int FUNC_0 (scalar_t__) ;
 struct tegra_dsi* FUNC_1 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_2(struct mipi_dsi_host *VAR_0,
     struct mipi_dsi_device *VAR_1)
{
 struct tegra_dsi *VAR_2 = FUNC_1(VAR_0);
 struct tegra_output *VAR_3 = &VAR_2->output;

 if (VAR_3->panel && &VAR_1->dev == VAR_3->panel->dev) {
  VAR_3->panel = ((void*)0);

  if (VAR_3->connector.dev)
   FUNC_0(VAR_3->connector.dev);
 }

 return 0;
}
