
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct dw_hdmi {TYPE_1__* plat_data; struct drm_connector connector; } ;
struct drm_display_mode {int flags; } ;
struct drm_bridge {struct dw_hdmi* driver_private; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int (* mode_valid ) (struct drm_connector*,struct drm_display_mode const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_connector*,struct drm_display_mode const*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_1(struct drm_bridge *VAR_3,
     const struct drm_display_mode *VAR_4)
{
 struct dw_hdmi *VAR_5 = VAR_3->driver_private;
 struct drm_connector *VAR_6 = &VAR_5->connector;
 enum drm_mode_status VAR_7 = VAR_2;


 if (VAR_4->flags & VAR_0)
  return VAR_1;

 if (VAR_5->plat_data->mode_valid)
  VAR_7 = VAR_5->plat_data->mode_valid(VAR_6, VAR_4);

 return VAR_7;
}
