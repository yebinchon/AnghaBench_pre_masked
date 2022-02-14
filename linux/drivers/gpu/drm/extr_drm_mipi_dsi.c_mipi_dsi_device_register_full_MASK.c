
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_host {struct device* dev; } ;
struct mipi_dsi_device_info {int channel; int type; int node; } ;
struct TYPE_2__ {int of_node; } ;
struct mipi_dsi_device {int channel; int name; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mipi_dsi_device* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct mipi_dsi_device*) ;
 int FUNC_5 (struct mipi_dsi_device*) ;
 struct mipi_dsi_device* FUNC_6 (struct mipi_dsi_host*) ;
 int FUNC_7 (int ,int ,int) ;

struct mipi_dsi_device *
FUNC_8(struct mipi_dsi_host *VAR_1,
         const struct mipi_dsi_device_info *VAR_2)
{
 struct mipi_dsi_device *VAR_3;
 struct device *VAR_4 = VAR_1->dev;
 int VAR_5;

 if (!VAR_2) {
  FUNC_3(VAR_4, "invalid mipi_dsi_device_info pointer\n");
  return FUNC_0(-VAR_0);
 }

 if (VAR_2->channel > 3) {
  FUNC_3(VAR_4, "invalid virtual channel: %u\n", VAR_2->channel);
  return FUNC_0(-VAR_0);
 }

 VAR_3 = FUNC_6(VAR_1);
 if (FUNC_1(VAR_3)) {
  FUNC_3(VAR_4, "failed to allocate DSI device %ld\n",
   FUNC_2(VAR_3));
  return VAR_3;
 }

 VAR_3->dev.of_node = VAR_2->node;
 VAR_3->channel = VAR_2->channel;
 FUNC_7(VAR_3->name, VAR_2->type, sizeof(VAR_3->name));

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_4, "failed to add DSI device %d\n", VAR_5);
  FUNC_4(VAR_3);
  return FUNC_0(VAR_5);
 }

 return VAR_3;
}
