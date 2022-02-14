
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sn_bridge {int connector; int panel; struct mipi_dsi_device* dsi; int dev; int regmap; int host_node; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device_info {char* type; int * node; int channel; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; } ;
struct drm_bridge {int encoder; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mipi_dsi_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int VAR_6 ;
 struct ti_sn_bridge* FUNC_3 (struct drm_bridge*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *,int *,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct mipi_dsi_device*) ;
 struct mipi_dsi_device* FUNC_10 (struct mipi_dsi_host*,struct mipi_dsi_device_info const*) ;
 int FUNC_11 (struct mipi_dsi_device*) ;
 struct mipi_dsi_host* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_16(struct drm_bridge *VAR_9)
{
 int VAR_10, VAR_11;
 struct ti_sn_bridge *VAR_12 = FUNC_3(VAR_9);
 struct mipi_dsi_host *VAR_13;
 struct mipi_dsi_device *VAR_14;
 const struct mipi_dsi_device_info VAR_15 = { .type = "ti_sn_bridge",
         .channel = 0,
         .node = ((void*)0),
       };

 VAR_10 = FUNC_7(VAR_9->dev, &VAR_12->connector,
     &VAR_7,
     VAR_1);
 if (VAR_10) {
  FUNC_0("Failed to initialize connector with drm\n");
  return VAR_10;
 }

 FUNC_6(&VAR_12->connector,
     &VAR_8);
 FUNC_4(&VAR_12->connector, VAR_9->encoder);
 VAR_13 = FUNC_12(VAR_12->host_node);
 if (!VAR_13) {
  FUNC_0("failed to find dsi host\n");
  VAR_10 = -VAR_2;
  goto err_dsi_host;
 }

 VAR_14 = FUNC_10(VAR_13, &VAR_15);
 if (FUNC_1(VAR_14)) {
  FUNC_0("failed to create dsi device\n");
  VAR_10 = FUNC_2(VAR_14);
  goto err_dsi_host;
 }


 VAR_14->lanes = 4;
 VAR_14->format = VAR_4;
 VAR_14->mode_flags = VAR_5;


 FUNC_13(VAR_12->dev);
 FUNC_15(VAR_12->regmap, VAR_6, &VAR_11);
 FUNC_14(VAR_12->dev);
 if (!(VAR_11 & VAR_0))
  VAR_14->mode_flags |= VAR_3;

 VAR_10 = FUNC_9(VAR_14);
 if (VAR_10 < 0) {
  FUNC_0("failed to attach dsi to host\n");
  goto err_dsi_attach;
 }
 VAR_12->dsi = VAR_14;


 FUNC_8(VAR_12->panel, &VAR_12->connector);

 return 0;

err_dsi_attach:
 FUNC_11(VAR_14);
err_dsi_host:
 FUNC_5(&VAR_12->connector);
 return VAR_10;
}
