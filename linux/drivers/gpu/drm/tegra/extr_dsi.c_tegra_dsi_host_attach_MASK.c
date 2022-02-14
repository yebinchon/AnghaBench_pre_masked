
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dev; } ;
struct tegra_output {TYPE_1__ connector; int * panel; } ;
struct tegra_dsi {struct tegra_output output; int master; int dev; scalar_t__ slave; int lanes; int format; int flags; } ;
struct mipi_dsi_host {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct mipi_dsi_device {TYPE_2__ dev; int lanes; int format; int mode_flags; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 struct tegra_dsi* FUNC_6 (struct mipi_dsi_host*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (struct tegra_dsi*) ;

__attribute__((used)) static int FUNC_9(struct mipi_dsi_host *VAR_0,
     struct mipi_dsi_device *VAR_1)
{
 struct tegra_dsi *VAR_2 = FUNC_6(VAR_0);

 VAR_2->flags = VAR_1->mode_flags;
 VAR_2->format = VAR_1->format;
 VAR_2->lanes = VAR_1->lanes;

 if (VAR_2->slave) {
  int VAR_3;

  FUNC_1(VAR_2->dev, "attaching dual-channel device %s\n",
   FUNC_3(&VAR_1->dev));

  VAR_3 = FUNC_8(VAR_2);
  if (VAR_3 < 0) {
   FUNC_2(VAR_2->dev, "failed to set up ganged mode: %d\n",
    VAR_3);
   return VAR_3;
  }
 }





 if (!VAR_2->master) {
  struct tegra_output *VAR_4 = &VAR_2->output;

  VAR_4->panel = FUNC_7(VAR_1->dev.of_node);
  if (FUNC_0(VAR_4->panel))
   VAR_4->panel = ((void*)0);

  if (VAR_4->panel && VAR_4->connector.dev) {
   FUNC_5(VAR_4->panel, &VAR_4->connector);
   FUNC_4(VAR_4->connector.dev);
  }
 }

 return 0;
}
