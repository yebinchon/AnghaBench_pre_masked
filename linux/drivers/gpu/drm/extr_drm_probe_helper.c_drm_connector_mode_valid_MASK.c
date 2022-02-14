
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_connector_helper_funcs {int (* mode_valid ) (struct drm_connector*,struct drm_display_mode*) ;} ;
struct drm_connector {struct drm_connector_helper_funcs* helper_private; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,struct drm_display_mode*) ;

enum drm_mode_status FUNC_1(struct drm_connector *VAR_1,
           struct drm_display_mode *VAR_2)
{
 const struct drm_connector_helper_funcs *VAR_3 =
  VAR_1->helper_private;

 if (!VAR_3 || !VAR_3->mode_valid)
  return VAR_0;

 return VAR_3->mode_valid(VAR_1, VAR_2);
}
