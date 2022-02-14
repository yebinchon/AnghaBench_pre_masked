
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; int clock; } ;
struct radeon_encoder {scalar_t__ rmx_type; struct drm_display_mode native_mode; } ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {scalar_t__ connector_type; struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 struct drm_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,struct drm_display_mode*) ;
 struct radeon_connector* FUNC_5 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_mode_status FUNC_7(struct drm_connector *VAR_8,
      struct drm_display_mode *VAR_9)
{
 struct drm_device *VAR_10 = VAR_8->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_connector *VAR_12 = FUNC_5(VAR_8);
 struct radeon_connector_atom_dig *VAR_13 = VAR_12->con_priv;



 if ((VAR_8->connector_type == VAR_3) ||
     (VAR_8->connector_type == VAR_2)) {
  struct drm_encoder *VAR_14 = FUNC_2(VAR_8);

  if ((VAR_9->hdisplay < 320) || (VAR_9->vdisplay < 240))
   return VAR_6;

  if (VAR_14) {
   struct radeon_encoder *VAR_15 = FUNC_6(VAR_14);
   struct drm_display_mode *VAR_16 = &VAR_15->native_mode;




   if ((VAR_9->hdisplay > VAR_16->hdisplay) ||
       (VAR_9->vdisplay > VAR_16->vdisplay))
    return VAR_6;


   if (VAR_15->rmx_type == VAR_7) {
    if ((VAR_9->hdisplay != VAR_16->hdisplay) ||
        (VAR_9->vdisplay != VAR_16->vdisplay))
     return VAR_6;
   }
  }
 } else {
  if ((VAR_13->dp_sink_type == VAR_0) ||
      (VAR_13->dp_sink_type == VAR_1)) {
   return FUNC_4(VAR_8, VAR_9);
  } else {
   if (FUNC_0(VAR_11) && FUNC_1(FUNC_3(VAR_8))) {

    if (VAR_9->clock > 340000)
     return VAR_4;
   } else {
    if (VAR_9->clock > 165000)
     return VAR_4;
   }
  }
 }

 return VAR_5;
}
