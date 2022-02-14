
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_4__ {int connection_mutex; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct drm_connector_helper_funcs {int (* detect_ctx ) (struct drm_connector*,struct drm_modeset_acquire_ctx*,int) ;} ;
struct drm_connector {TYPE_1__* funcs; struct drm_device* dev; struct drm_connector_helper_funcs* helper_private; } ;
struct TYPE_3__ {int (* detect ) (struct drm_connector*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,int) ;
 int FUNC_1 (int *,struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (struct drm_connector*,struct drm_modeset_acquire_ctx*,int) ;
 int FUNC_3 (struct drm_connector*,int) ;

int
FUNC_4(struct drm_connector *VAR_1,
   struct drm_modeset_acquire_ctx *VAR_2,
   bool VAR_3)
{
 const struct drm_connector_helper_funcs *VAR_4 = VAR_1->helper_private;
 struct drm_device *VAR_5 = VAR_1->dev;
 int VAR_6;

 if (!VAR_2)
  return FUNC_0(VAR_1, VAR_3);

 VAR_6 = FUNC_1(&VAR_5->mode_config.connection_mutex, VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->detect_ctx)
  return VAR_4->detect_ctx(VAR_1, VAR_2, VAR_3);
 else if (VAR_1->funcs->detect)
  return VAR_1->funcs->detect(VAR_1, VAR_3);
 else
  return VAR_0;
}
