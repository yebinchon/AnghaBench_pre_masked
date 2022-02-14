
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct radeon_encoder {scalar_t__ rmx_type; struct drm_display_mode native_mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct drm_encoder* FUNC_0 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_mode_status FUNC_2(struct drm_connector *VAR_3,
      struct drm_display_mode *VAR_4)
{
 struct drm_encoder *VAR_5 = FUNC_0(VAR_3);

 if ((VAR_4->hdisplay < 320) || (VAR_4->vdisplay < 240))
  return VAR_1;

 if (VAR_5) {
  struct radeon_encoder *VAR_6 = FUNC_1(VAR_5);
  struct drm_display_mode *VAR_7 = &VAR_6->native_mode;




  if ((VAR_4->hdisplay > VAR_7->hdisplay) ||
      (VAR_4->vdisplay > VAR_7->vdisplay))
   return VAR_1;


  if (VAR_6->rmx_type == VAR_2) {
   if ((VAR_4->hdisplay != VAR_7->hdisplay) ||
       (VAR_4->vdisplay != VAR_7->vdisplay))
    return VAR_1;
  }
 }

 return VAR_0;
}
