
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int clock; } ;
struct drm_connector {scalar_t__ connector_type; } ;
struct amdgpu_encoder {scalar_t__ rmx_type; struct drm_display_mode native_mode; } ;
struct amdgpu_connector_atom_dig {scalar_t__ dp_sink_type; } ;
struct amdgpu_connector {struct amdgpu_connector_atom_dig* con_priv; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct drm_connector*,struct drm_display_mode*) ;
 struct drm_encoder* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct amdgpu_connector* FUNC_4 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_mode_status FUNC_6(struct drm_connector *VAR_8,
        struct drm_display_mode *VAR_9)
{
 struct amdgpu_connector *VAR_10 = FUNC_4(VAR_8);
 struct amdgpu_connector_atom_dig *VAR_11 = VAR_10->con_priv;



 if ((VAR_8->connector_type == VAR_3) ||
     (VAR_8->connector_type == VAR_2)) {
  struct drm_encoder *VAR_12 = FUNC_1(VAR_8);

  if ((VAR_9->hdisplay < 320) || (VAR_9->vdisplay < 240))
   return VAR_6;

  if (VAR_12) {
   struct amdgpu_encoder *VAR_13 = FUNC_5(VAR_12);
   struct drm_display_mode *VAR_14 = &VAR_13->native_mode;




   if ((VAR_9->hdisplay > VAR_14->hdisplay) ||
       (VAR_9->vdisplay > VAR_14->vdisplay))
    return VAR_6;


   if (VAR_13->rmx_type == VAR_7) {
    if ((VAR_9->hdisplay != VAR_14->hdisplay) ||
        (VAR_9->vdisplay != VAR_14->vdisplay))
     return VAR_6;
   }
  }
  return VAR_5;
 } else {
  if ((VAR_11->dp_sink_type == VAR_0) ||
      (VAR_11->dp_sink_type == VAR_1)) {
   return FUNC_0(VAR_8, VAR_9);
  } else {
   if (FUNC_3(FUNC_2(VAR_8))) {

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
