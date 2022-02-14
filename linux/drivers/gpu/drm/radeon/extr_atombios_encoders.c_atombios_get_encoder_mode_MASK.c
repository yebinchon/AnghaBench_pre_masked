
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_atom_dig {scalar_t__ active_mst_links; } ;
struct radeon_encoder {scalar_t__ encoder_id; scalar_t__ offset; scalar_t__ is_mst_encoder; struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {int dp_sink_type; } ;
struct radeon_connector {int audio; struct radeon_connector_atom_dig* con_priv; int use_digital; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int connector_type; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_16 ;
 int FUNC_4 (struct drm_connector*) ;
 scalar_t__ FUNC_5 (struct drm_encoder*) ;
 scalar_t__ FUNC_6 (struct drm_encoder*) ;
 struct drm_connector* FUNC_7 (struct drm_encoder*) ;
 struct drm_connector* FUNC_8 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_9 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_10 (struct drm_encoder*) ;

int
FUNC_11(struct drm_encoder *VAR_17)
{
 struct drm_device *VAR_18 = VAR_17->dev;
 struct radeon_device *VAR_19 = VAR_18->dev_private;
 struct radeon_encoder *VAR_20 = FUNC_10(VAR_17);
 struct drm_connector *VAR_21;
 struct radeon_connector *VAR_22;
 struct radeon_connector_atom_dig *VAR_23;
 struct radeon_encoder_atom_dig *VAR_24;

 if (FUNC_6(VAR_17)) {
  VAR_24 = VAR_20->enc_priv;
  if (VAR_24->active_mst_links)
   return VAR_3;
 }
 if (VAR_20->is_mst_encoder || VAR_20->offset)
  return VAR_3;

 if (FUNC_5(VAR_17) != VAR_13)
  return VAR_1;


 if ((VAR_20->encoder_id == VAR_11) ||
     (VAR_20->encoder_id == VAR_12))
  return VAR_5;

 VAR_21 = FUNC_7(VAR_17);



 if (!VAR_21)
  VAR_21 = FUNC_8(VAR_17);
 VAR_22 = FUNC_9(VAR_21);

 switch (VAR_21->connector_type) {
 case 135:
 case 132:
  if (VAR_16 != 0) {
   if (VAR_22->use_digital &&
       (VAR_22->audio == VAR_15))
    return VAR_6;
   else if (FUNC_2(FUNC_4(VAR_21)) &&
     (VAR_22->audio == VAR_14))
    return VAR_6;
   else if (VAR_22->use_digital)
    return VAR_4;
   else
    return VAR_0;
  } else if (VAR_22->use_digital) {
   return VAR_4;
  } else {
   return VAR_0;
  }
  break;
 case 136:
 case 133:
 default:
  if (VAR_16 != 0) {
   if (VAR_22->audio == VAR_15)
    return VAR_6;
   else if (FUNC_2(FUNC_4(VAR_21)) &&
     (VAR_22->audio == VAR_14))
    return VAR_6;
   else
    return VAR_4;
  } else {
   return VAR_4;
  }
  break;
 case 131:
  return VAR_7;
  break;
 case 134:
  VAR_23 = VAR_22->con_priv;
  if ((VAR_23->dp_sink_type == VAR_9) ||
      (VAR_23->dp_sink_type == VAR_10)) {
   if (VAR_16 != 0 &&
       FUNC_3(FUNC_4(VAR_21)) &&
       FUNC_0(VAR_19) && !FUNC_1(VAR_19))
    return VAR_2;
   return VAR_1;
  } else if (VAR_16 != 0) {
   if (VAR_22->audio == VAR_15)
    return VAR_6;
   else if (FUNC_2(FUNC_4(VAR_21)) &&
     (VAR_22->audio == VAR_14))
    return VAR_6;
   else
    return VAR_4;
  } else {
   return VAR_4;
  }
  break;
 case 128:
  if (VAR_16 != 0 &&
      FUNC_3(FUNC_4(VAR_21)) &&
      FUNC_0(VAR_19) && !FUNC_1(VAR_19))
   return VAR_2;
  return VAR_1;
 case 137:
 case 129:
  return VAR_0;
  break;
 case 138:
 case 130:
 case 139:

  return VAR_8;

  break;
 }
}
