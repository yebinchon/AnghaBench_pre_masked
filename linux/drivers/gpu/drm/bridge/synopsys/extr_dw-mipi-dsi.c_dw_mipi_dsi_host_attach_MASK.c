
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mipi_dsi_host {TYPE_1__* dev; } ;
struct mipi_dsi_device {scalar_t__ lanes; int mode_flags; int format; int channel; } ;
struct dw_mipi_dsi_plat_data {scalar_t__ max_data_lanes; int priv_data; TYPE_2__* host_ops; } ;
struct dw_mipi_dsi {scalar_t__ lanes; int bridge; struct drm_bridge* panel_bridge; int mode_flags; int format; int channel; int dev; struct dw_mipi_dsi_plat_data* plat_data; } ;
struct drm_panel {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_4__ {int (* attach ) (int ,struct mipi_dsi_device*) ;} ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ,struct drm_panel**,struct drm_bridge**) ;
 struct drm_bridge* FUNC_5 (struct drm_panel*,int ) ;
 struct dw_mipi_dsi* FUNC_6 (struct mipi_dsi_host*) ;
 int FUNC_7 (int ,struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_8(struct mipi_dsi_host *VAR_2,
       struct mipi_dsi_device *VAR_3)
{
 struct dw_mipi_dsi *VAR_4 = FUNC_6(VAR_2);
 const struct dw_mipi_dsi_plat_data *VAR_5 = VAR_4->plat_data;
 struct drm_bridge *VAR_6;
 struct drm_panel *VAR_7;
 int VAR_8;

 if (VAR_3->lanes > VAR_4->plat_data->max_data_lanes) {
  FUNC_2(VAR_4->dev, "the number of data lanes(%u) is too many\n",
   VAR_3->lanes);
  return -VAR_1;
 }

 VAR_4->lanes = VAR_3->lanes;
 VAR_4->channel = VAR_3->channel;
 VAR_4->format = VAR_3->format;
 VAR_4->mode_flags = VAR_3->mode_flags;

 VAR_8 = FUNC_4(VAR_2->dev->of_node, 1, 0,
       &VAR_7, &VAR_6);
 if (VAR_8)
  return VAR_8;

 if (VAR_7) {
  VAR_6 = FUNC_5(VAR_7, VAR_0);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);
 }

 VAR_4->panel_bridge = VAR_6;

 FUNC_3(&VAR_4->bridge);

 if (VAR_5->host_ops && VAR_5->host_ops->attach) {
  VAR_8 = VAR_5->host_ops->attach(VAR_5->priv_data, VAR_3);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
