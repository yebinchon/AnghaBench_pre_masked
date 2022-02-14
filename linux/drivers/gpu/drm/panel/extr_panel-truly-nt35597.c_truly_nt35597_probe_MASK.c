
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct truly_nt35597 {int panel; struct mipi_dsi_device** dsi; struct device* dev; int config; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device_info {char* type; int * node; int channel; } ;
struct device {int of_node; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; struct device dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct mipi_dsi_device**) ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct mipi_dsi_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct mipi_dsi_device*) ;
 int FUNC_4 (struct device*,char*) ;
 struct truly_nt35597* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mipi_dsi_device*) ;
 struct mipi_dsi_device* FUNC_8 (struct mipi_dsi_host*,struct mipi_dsi_device_info const*) ;
 int FUNC_9 (struct mipi_dsi_device*) ;
 int FUNC_10 (struct mipi_dsi_device*,struct truly_nt35597*) ;
 int FUNC_11 (struct device*) ;
 struct mipi_dsi_host* FUNC_12 (struct device_node*) ;
 struct device_node* FUNC_13 (int ,int,int) ;
 int FUNC_14 (struct device_node*) ;
 int FUNC_15 (struct truly_nt35597*) ;

__attribute__((used)) static int FUNC_16(struct mipi_dsi_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct truly_nt35597 *VAR_10;
 struct mipi_dsi_device *VAR_11;
 struct device_node *VAR_12;
 struct mipi_dsi_host *VAR_13;
 struct mipi_dsi_device *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 const struct mipi_dsi_device_info VAR_17 = {
  .type = "trulynt35597",
  .channel = 0,
  .node = ((void*)0),
 };

 VAR_10 = FUNC_5(VAR_9, sizeof(*VAR_10), VAR_3);

 if (!VAR_10)
  return -VAR_1;
 VAR_10->config = FUNC_11(VAR_9);

 if (!VAR_10->config) {
  FUNC_4(VAR_9, "missing device configuration\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_13(VAR_8->dev.of_node, 1, -1);
 if (!VAR_12) {
  FUNC_1(VAR_9,
   "failed to get remote node for dsi1_device\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_12(VAR_12);
 FUNC_14(VAR_12);
 if (!VAR_13) {
  FUNC_1(VAR_9, "failed to find dsi host\n");
  return -VAR_2;
 }


 VAR_11 = FUNC_8(VAR_13, &VAR_17);
 if (FUNC_2(VAR_11)) {
  FUNC_1(VAR_9, "failed to create dsi device\n");
  return FUNC_3(VAR_11);
 }

 FUNC_10(VAR_8, VAR_10);

 VAR_10->dev = VAR_9;
 VAR_10->dsi[0] = VAR_8;
 VAR_10->dsi[1] = VAR_11;

 VAR_15 = FUNC_15(VAR_10);
 if (VAR_15) {
  FUNC_1(VAR_9, "failed to add panel\n");
  goto err_panel_add;
 }

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_10->dsi); VAR_16++) {
  VAR_14 = VAR_10->dsi[VAR_16];
  VAR_14->lanes = 4;
  VAR_14->format = VAR_5;
  VAR_14->mode_flags = VAR_7 | VAR_6 |
   VAR_4;
  VAR_15 = FUNC_7(VAR_14);
  if (VAR_15 < 0) {
   FUNC_1(VAR_9,
    "dsi attach failed i = %d\n", VAR_16);
   goto err_dsi_attach;
  }
 }

 return 0;

err_dsi_attach:
 FUNC_6(&VAR_10->panel);
err_panel_add:
 FUNC_9(VAR_11);
 return VAR_15;
}
