
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int vtotal; int vsync_end; int vsync_start; int hdisplay; } ;
struct drm_bridge {int dummy; } ;
struct cdns_dsi_output {TYPE_1__* dev; } ;
struct cdns_dsi_input {int dummy; } ;
struct cdns_dsi_cfg {int dummy; } ;
struct cdns_dsi {struct cdns_dsi_output output; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cdns_dsi_input* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct cdns_dsi*,struct drm_display_mode const*,struct cdns_dsi_cfg*,int) ;
 struct cdns_dsi* FUNC_2 (struct cdns_dsi_input*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum drm_mode_status
FUNC_4(struct drm_bridge *VAR_4,
      const struct drm_display_mode *VAR_5)
{
 struct cdns_dsi_input *VAR_6 = FUNC_0(VAR_4);
 struct cdns_dsi *VAR_7 = FUNC_2(VAR_6);
 struct cdns_dsi_output *VAR_8 = &VAR_7->output;
 struct cdns_dsi_cfg VAR_9;
 int VAR_10, VAR_11;





 if (VAR_5->vtotal - VAR_5->vsync_end < 2)
  return VAR_3;


 if (VAR_5->vsync_end - VAR_5->vsync_start < 2)
  return VAR_3;


 VAR_10 = FUNC_3(VAR_8->dev->format);
 if ((VAR_5->hdisplay * VAR_10) % 32)
  return VAR_1;

 VAR_11 = FUNC_1(VAR_7, VAR_5, &VAR_9, 1);
 if (VAR_11)
  return VAR_0;

 return VAR_2;
}
