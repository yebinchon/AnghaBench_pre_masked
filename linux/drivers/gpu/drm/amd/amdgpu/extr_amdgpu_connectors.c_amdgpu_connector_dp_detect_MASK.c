
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_device {int dev; struct amdgpu_device* dev_private; } ;
struct drm_connector {int status; scalar_t__ connector_type; struct drm_device* dev; } ;
struct amdgpu_encoder {struct drm_display_mode native_mode; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_connector_atom_dig {scalar_t__ dp_sink_type; int edp_on; } ;
struct TYPE_2__ {int hpd; } ;
struct amdgpu_connector {TYPE_1__ hpd; scalar_t__ dac_load_detect; struct amdgpu_connector_atom_dig* con_priv; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct amdgpu_connector*) ;
 scalar_t__ FUNC_1 (struct amdgpu_connector*) ;
 int FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_4 (struct drm_connector*) ;
 scalar_t__ FUNC_5 (struct drm_connector*) ;
 scalar_t__ FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_connector*,int) ;
 scalar_t__ FUNC_9 (struct amdgpu_connector*,int) ;
 scalar_t__ FUNC_10 (struct amdgpu_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct drm_encoder*,struct drm_connector*) ;
 struct amdgpu_connector* FUNC_16 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_17 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_18(struct drm_connector *VAR_8, bool VAR_9)
{
 struct drm_device *VAR_10 = VAR_8->dev;
 struct amdgpu_device *VAR_11 = VAR_10->dev_private;
 struct amdgpu_connector *VAR_12 = FUNC_16(VAR_8);
 enum drm_connector_status VAR_13 = VAR_7;
 struct amdgpu_connector_atom_dig *VAR_14 = VAR_12->con_priv;
 struct drm_encoder *VAR_15 = FUNC_4(VAR_8);
 int VAR_16;

 if (!FUNC_11()) {
  VAR_16 = FUNC_12(VAR_8->dev->dev);
  if (VAR_16 < 0)
   return VAR_7;
 }

 if (!VAR_9 && FUNC_5(VAR_8)) {
  VAR_13 = VAR_8->status;
  goto out;
 }

 FUNC_7(VAR_8);

 if ((VAR_8->connector_type == VAR_4) ||
     (VAR_8->connector_type == VAR_3)) {
  if (VAR_15) {
   struct amdgpu_encoder *VAR_17 = FUNC_17(VAR_15);
   struct drm_display_mode *VAR_18 = &VAR_17->native_mode;


   if (VAR_18->hdisplay >= 320 && VAR_18->vdisplay >= 240)
    VAR_13 = VAR_6;
  }

  VAR_14->dp_sink_type = VAR_2;
  if (!VAR_14->edp_on)
   FUNC_2(VAR_8,
            VAR_1);
  if (!FUNC_0(VAR_12))
   VAR_13 = VAR_6;
  if (!VAR_14->edp_on)
   FUNC_2(VAR_8,
            VAR_0);
 } else if (FUNC_6(VAR_8) !=
     VAR_5) {

  VAR_14->dp_sink_type = VAR_2;

  FUNC_0(VAR_12);

  if (VAR_15) {

   FUNC_3(VAR_15);


   if (FUNC_9(VAR_12, 1))
    VAR_13 = VAR_6;
   else if (VAR_12->dac_load_detect) {
    const struct drm_encoder_helper_funcs *VAR_19 = VAR_15->helper_private;
    VAR_13 = VAR_19->detect(VAR_15, VAR_8);
   }
  }
 } else {
  VAR_14->dp_sink_type =
   FUNC_1(VAR_12);
  if (FUNC_10(VAR_11, VAR_12->hpd.hpd)) {
   VAR_13 = VAR_6;
   if (VAR_14->dp_sink_type == VAR_2)
    FUNC_0(VAR_12);
  } else {
   if (VAR_14->dp_sink_type == VAR_2) {
    if (!FUNC_0(VAR_12))
     VAR_13 = VAR_6;
   } else {

    if (FUNC_9(VAR_12,
            0))
     VAR_13 = VAR_6;
   }
  }
 }

 FUNC_8(VAR_8, VAR_13);
out:
 if (!FUNC_11()) {
  FUNC_13(VAR_8->dev->dev);
  FUNC_14(VAR_8->dev->dev);
 }

 return VAR_13;
}
