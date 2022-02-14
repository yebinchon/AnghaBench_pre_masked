
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_connector {int connector_type; } ;
struct amdgpu_encoder {scalar_t__ encoder_id; } ;
struct amdgpu_connector_atom_dig {int dp_sink_type; } ;
struct amdgpu_connector {int audio; struct amdgpu_connector_atom_dig* con_priv; int use_digital; } ;


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
 int FUNC_0 (struct drm_connector*) ;
 scalar_t__ FUNC_1 (struct drm_encoder*) ;
 struct drm_connector* FUNC_2 (struct drm_encoder*) ;
 struct drm_connector* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (int ) ;
 struct amdgpu_connector* FUNC_5 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_6 (struct drm_encoder*) ;

int FUNC_7(struct drm_encoder *VAR_15)
{
 struct amdgpu_encoder *VAR_16 = FUNC_6(VAR_15);
 struct drm_connector *VAR_17;
 struct amdgpu_connector *VAR_18;
 struct amdgpu_connector_atom_dig *VAR_19;


 if (FUNC_1(VAR_15) != VAR_13)
  return VAR_3;


 if ((VAR_16->encoder_id == VAR_11) ||
     (VAR_16->encoder_id == VAR_12))
  return VAR_5;

 VAR_17 = FUNC_2(VAR_15);



 if (!VAR_17)
  VAR_17 = FUNC_3(VAR_15);
 VAR_18 = FUNC_5(VAR_17);

 switch (VAR_17->connector_type) {
 case 135:
 case 132:
  if (VAR_14 != 0) {
   if (VAR_18->use_digital &&
       (VAR_18->audio == VAR_1))
    return VAR_6;
   else if (FUNC_4(FUNC_0(VAR_17)) &&
     (VAR_18->audio == VAR_0))
    return VAR_6;
   else if (VAR_18->use_digital)
    return VAR_4;
   else
    return VAR_2;
  } else if (VAR_18->use_digital) {
   return VAR_4;
  } else {
   return VAR_2;
  }
  break;
 case 136:
 case 133:
 default:
  if (VAR_14 != 0) {
   if (VAR_18->audio == VAR_1)
    return VAR_6;
   else if (FUNC_4(FUNC_0(VAR_17)) &&
     (VAR_18->audio == VAR_0))
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
  VAR_19 = VAR_18->con_priv;
  if ((VAR_19->dp_sink_type == VAR_9) ||
      (VAR_19->dp_sink_type == VAR_10)) {
   return VAR_3;
  } else if (VAR_14 != 0) {
   if (VAR_18->audio == VAR_1)
    return VAR_6;
   else if (FUNC_4(FUNC_0(VAR_17)) &&
     (VAR_18->audio == VAR_0))
    return VAR_6;
   else
    return VAR_4;
  } else {
   return VAR_4;
  }
  break;
 case 128:
  return VAR_3;
 case 137:
 case 129:
  return VAR_2;
  break;
 case 138:
 case 130:
 case 139:

  return VAR_8;

  break;
 }
}
