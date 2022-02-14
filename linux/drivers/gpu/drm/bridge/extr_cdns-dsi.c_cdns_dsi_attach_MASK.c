
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mipi_dsi_host {int dev; } ;
struct TYPE_6__ {int of_node; } ;
struct mipi_dsi_device {int mode_flags; int name; TYPE_3__ dev; int channel; } ;
struct drm_panel {int dummy; } ;
typedef struct drm_panel drm_bridge ;
struct device_node {int dummy; } ;
struct cdns_dsi_output {struct drm_panel* panel; struct drm_panel* bridge; struct mipi_dsi_device* dev; } ;
struct cdns_dsi_input {int bridge; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct cdns_dsi {TYPE_2__ base; struct cdns_dsi_input input; struct cdns_dsi_output output; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_panel* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_panel*) ;
 int VAR_5 ;
 int FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int *) ;
 struct drm_panel* FUNC_5 (struct drm_panel*,int ) ;
 struct drm_panel* FUNC_6 (int ) ;
 struct drm_panel* FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ,int ,int ) ;
 struct device_node* FUNC_9 (int ) ;
 int FUNC_10 (struct device_node*) ;
 struct cdns_dsi* FUNC_11 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_12(struct mipi_dsi_host *VAR_6,
      struct mipi_dsi_device *VAR_7)
{
 struct cdns_dsi *VAR_8 = FUNC_11(VAR_6);
 struct cdns_dsi_output *VAR_9 = &VAR_8->output;
 struct cdns_dsi_input *VAR_10 = &VAR_8->input;
 struct drm_bridge *VAR_11;
 struct drm_panel *VAR_12;
 struct device_node *VAR_13;
 int VAR_14;






 if (VAR_9->dev)
  return -VAR_2;


 if (VAR_7->mode_flags & VAR_5)
  return -VAR_4;







 VAR_13 = FUNC_8(VAR_8->base.dev->of_node, VAR_1,
          VAR_7->channel);
 if (!VAR_13)
  VAR_13 = FUNC_9(VAR_7->dev.of_node);

 VAR_12 = FUNC_7(VAR_13);
 if (!FUNC_1(VAR_12)) {
  VAR_11 = FUNC_5(VAR_12, VAR_0);
 } else {
  VAR_11 = FUNC_6(VAR_7->dev.of_node);
  if (!VAR_11)
   VAR_11 = FUNC_0(-VAR_3);
 }

 FUNC_10(VAR_13);

 if (FUNC_1(VAR_11)) {
  VAR_14 = FUNC_2(VAR_11);
  FUNC_3(VAR_6->dev, "failed to add DSI device %s (err = %d)",
   VAR_7->name, VAR_14);
  return VAR_14;
 }

 VAR_9->dev = VAR_7;
 VAR_9->bridge = VAR_11;
 VAR_9->panel = VAR_12;






 FUNC_4(&VAR_10->bridge);

 return 0;
}
