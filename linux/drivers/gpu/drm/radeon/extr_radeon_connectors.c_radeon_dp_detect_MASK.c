
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct radeon_encoder {struct drm_display_mode native_mode; } ;
struct radeon_device {int flags; } ;
struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; int edp_on; scalar_t__ is_mst; } ;
struct TYPE_2__ {int hpd; } ;
struct radeon_connector {TYPE_1__ hpd; scalar_t__ dac_load_detect; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_device {int dev; struct radeon_device* dev_private; } ;
struct drm_connector {int status; scalar_t__ connector_type; struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drm_connector*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_encoder*) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct drm_connector*,struct drm_encoder*,int) ;
 struct drm_encoder* FUNC_7 (struct drm_connector*) ;
 scalar_t__ FUNC_8 (struct drm_connector*) ;
 scalar_t__ FUNC_9 (struct drm_connector*) ;
 int FUNC_10 (struct drm_connector*) ;
 int FUNC_11 (struct drm_connector*) ;
 int FUNC_12 (struct drm_connector*,int) ;
 scalar_t__ FUNC_13 (struct radeon_connector*,int) ;
 scalar_t__ FUNC_14 (struct radeon_connector*) ;
 scalar_t__ FUNC_15 (struct radeon_connector*) ;
 int FUNC_16 (struct radeon_connector*) ;
 scalar_t__ FUNC_17 (struct radeon_device*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_18 (struct drm_encoder*,struct drm_connector*) ;
 struct radeon_connector* FUNC_19 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_20 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_21(struct drm_connector *VAR_11, bool VAR_12)
{
 struct drm_device *VAR_13 = VAR_11->dev;
 struct radeon_device *VAR_14 = VAR_13->dev_private;
 struct radeon_connector *VAR_15 = FUNC_19(VAR_11);
 enum drm_connector_status VAR_16 = VAR_8;
 struct radeon_connector_atom_dig *VAR_17 = VAR_15->con_priv;
 struct drm_encoder *VAR_18 = FUNC_7(VAR_11);
 int VAR_19;

 if (VAR_17->is_mst)
  return VAR_8;

 if (!FUNC_1()) {
  VAR_19 = FUNC_2(VAR_11->dev->dev);
  if (VAR_19 < 0)
   return VAR_8;
 }

 if (!VAR_12 && FUNC_8(VAR_11)) {
  VAR_16 = VAR_11->status;
  goto out;
 }

 FUNC_10(VAR_11);

 if ((VAR_11->connector_type == VAR_4) ||
     (VAR_11->connector_type == VAR_3)) {
  if (VAR_18) {
   struct radeon_encoder *VAR_20 = FUNC_20(VAR_18);
   struct drm_display_mode *VAR_21 = &VAR_20->native_mode;


   if (VAR_21->hdisplay >= 320 && VAR_21->vdisplay >= 240)
    VAR_16 = VAR_7;



   if ((VAR_14->flags & VAR_6) && (VAR_10 != 0))
    VAR_16 = VAR_8;
  }

  VAR_17->dp_sink_type = VAR_2;
  if (!VAR_17->edp_on)
   FUNC_0(VAR_11,
           VAR_1);
  if (FUNC_14(VAR_15))
   VAR_16 = VAR_7;
  if (!VAR_17->edp_on)
   FUNC_0(VAR_11,
           VAR_0);
 } else if (FUNC_9(VAR_11) !=
     VAR_5) {

  VAR_17->dp_sink_type = VAR_2;

  FUNC_14(VAR_15);

  if (VAR_18) {

   FUNC_5(VAR_18);

   if (FUNC_13(VAR_15, 1))
    VAR_16 = VAR_7;
   else if (VAR_15->dac_load_detect) {
    const struct drm_encoder_helper_funcs *VAR_22 = VAR_18->helper_private;
    VAR_16 = VAR_22->detect(VAR_18, VAR_11);
   }
  }
 } else {
  VAR_17->dp_sink_type = FUNC_15(VAR_15);
  if (FUNC_17(VAR_14, VAR_15->hpd.hpd)) {
   VAR_16 = VAR_7;
   if (VAR_17->dp_sink_type == VAR_2) {
    FUNC_14(VAR_15);
    VAR_19 = FUNC_16(VAR_15);
    if (VAR_19 == 1)
     VAR_16 = VAR_8;
   }
  } else {
   if (VAR_17->dp_sink_type == VAR_2) {
    if (FUNC_14(VAR_15)) {
     VAR_19 = FUNC_16(VAR_15);
     if (VAR_19 == 1)
      VAR_16 = VAR_8;
     else
      VAR_16 = VAR_7;
    }
   } else {

    if (FUNC_13(VAR_15, 0))
     VAR_16 = VAR_7;
   }
  }
 }

 FUNC_12(VAR_11, VAR_16);

 if ((VAR_9 != 0) && VAR_18) {
  FUNC_11(VAR_11);
  FUNC_6(VAR_11, VAR_18, VAR_16);
 }

out:
 if (!FUNC_1()) {
  FUNC_3(VAR_11->dev->dev);
  FUNC_4(VAR_11->dev->dev);
 }

 return VAR_16;
}
