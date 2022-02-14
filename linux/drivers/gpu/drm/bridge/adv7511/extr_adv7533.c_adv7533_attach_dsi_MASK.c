
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device_info {char* type; int * node; int channel; } ;
struct mipi_dsi_device {int mode_flags; int format; int lanes; } ;
struct device {int dummy; } ;
struct adv7511 {int num_dsi_lanes; struct mipi_dsi_device* dsi; int host_node; TYPE_1__* i2c_main; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mipi_dsi_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct mipi_dsi_device*) ;
 struct mipi_dsi_device* FUNC_4 (struct mipi_dsi_host*,struct mipi_dsi_device_info const*) ;
 int FUNC_5 (struct mipi_dsi_device*) ;
 struct mipi_dsi_host* FUNC_6 (int ) ;

int FUNC_7(struct adv7511 *VAR_6)
{
 struct device *VAR_7 = &VAR_6->i2c_main->dev;
 struct mipi_dsi_host *VAR_8;
 struct mipi_dsi_device *VAR_9;
 int VAR_10 = 0;
 const struct mipi_dsi_device_info VAR_11 = { .type = "adv7533",
         .channel = 0,
         .node = ((void*)0),
       };

 VAR_8 = FUNC_6(VAR_6->host_node);
 if (!VAR_8) {
  FUNC_2(VAR_7, "failed to find dsi host\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_4(VAR_8, &VAR_11);
 if (FUNC_0(VAR_9)) {
  FUNC_2(VAR_7, "failed to create dsi device\n");
  VAR_10 = FUNC_1(VAR_9);
  goto err_dsi_device;
 }

 VAR_6->dsi = VAR_9;

 VAR_9->lanes = VAR_6->num_dsi_lanes;
 VAR_9->format = VAR_1;
 VAR_9->mode_flags = VAR_3 | VAR_5 |
     VAR_2 | VAR_4;

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(VAR_7, "failed to attach dsi to host\n");
  goto err_dsi_attach;
 }

 return 0;

err_dsi_attach:
 FUNC_5(VAR_9);
err_dsi_device:
 return VAR_10;
}
