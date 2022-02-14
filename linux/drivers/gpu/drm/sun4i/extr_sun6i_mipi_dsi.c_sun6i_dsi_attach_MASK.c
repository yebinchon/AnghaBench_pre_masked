
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun6i_dsi {int panel; struct mipi_dsi_device* device; } ;
struct mipi_dsi_host {int dev; } ;
struct TYPE_2__ {int of_node; } ;
struct mipi_dsi_device {int name; TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct sun6i_dsi* FUNC_3 (struct mipi_dsi_host*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mipi_dsi_host *VAR_0,
       struct mipi_dsi_device *VAR_1)
{
 struct sun6i_dsi *VAR_2 = FUNC_3(VAR_0);

 VAR_2->device = VAR_1;
 VAR_2->panel = FUNC_4(VAR_1->dev.of_node);
 if (FUNC_0(VAR_2->panel))
  return FUNC_1(VAR_2->panel);

 FUNC_2(VAR_0->dev, "Attached device %s\n", VAR_1->name);

 return 0;
}
