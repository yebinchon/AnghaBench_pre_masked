
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* ucEncoderID; int ucDstBpc; int ucCRTC; } ;
struct TYPE_7__ {void* ucEncodeMode; void* ucEncoderID; int ucCRTC; } ;
struct TYPE_6__ {void* ucDevice; int ucCRTC; } ;
union crtc_source_param {TYPE_4__ v3; TYPE_3__ v2; TYPE_2__ v1; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int connector_type; } ;
struct amdgpu_encoder_atom_dig {int dig_encoder; } ;
struct amdgpu_encoder {int devices; int active_device; struct amdgpu_encoder_atom_dig* enc_priv; int encoder_id; } ;
struct TYPE_5__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct amdgpu_crtc {int crtc_id; } ;
typedef int args ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int ,int ) ;
 int VAR_29 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 int FUNC_4 (struct drm_encoder*) ;
 void* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*) ;
 struct drm_connector* FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (union crtc_source_param*,int ,int) ;
 struct amdgpu_crtc* FUNC_9 (int ) ;
 struct amdgpu_encoder* FUNC_10 (struct drm_encoder*) ;

void
FUNC_11(struct drm_encoder *VAR_30)
{
 struct drm_device *VAR_31 = VAR_30->dev;
 struct amdgpu_device *VAR_32 = VAR_31->dev_private;
 struct amdgpu_encoder *VAR_33 = FUNC_10(VAR_30);
 struct amdgpu_crtc *VAR_34 = FUNC_9(VAR_30->crtc);
 union crtc_source_param VAR_35;
 int VAR_36 = FUNC_1(VAR_25, VAR_29);
 uint8_t VAR_37, VAR_38;
 struct amdgpu_encoder_atom_dig *VAR_39;

 FUNC_8(&VAR_35, 0, sizeof(VAR_35));

 if (!FUNC_3(VAR_32->mode_info.atom_context, VAR_36, &VAR_37, &VAR_38))
  return;

 switch (VAR_37) {
 case 1:
  switch (VAR_38) {
  case 1:
  default:
   VAR_35.v1.ucCRTC = VAR_34->crtc_id;
   switch (VAR_33->encoder_id) {
   case 132:
   case 135:
    VAR_35.v1.ucDevice = VAR_15;
    break;
   case 134:
   case 133:
    if (VAR_33->devices & VAR_19)
     VAR_35.v1.ucDevice = VAR_18;
    else
     VAR_35.v1.ucDevice = VAR_17;
    break;
   case 140:
   case 141:
   case 137:
    VAR_35.v1.ucDevice = VAR_16;
    break;
   case 143:
   case 139:
    if (VAR_33->active_device & (VAR_22))
     VAR_35.v1.ucDevice = VAR_21;
    else if (VAR_33->active_device & (VAR_14))
     VAR_35.v1.ucDevice = VAR_13;
    else
     VAR_35.v1.ucDevice = VAR_11;
    break;
   case 142:
   case 138:
    if (VAR_33->active_device & (VAR_22))
     VAR_35.v1.ucDevice = VAR_21;
    else if (VAR_33->active_device & (VAR_14))
     VAR_35.v1.ucDevice = VAR_13;
    else
     VAR_35.v1.ucDevice = VAR_12;
    break;
   }
   break;
  case 2:
   VAR_35.v2.ucCRTC = VAR_34->crtc_id;
   if (FUNC_6(VAR_30) != VAR_28) {
    struct drm_connector *VAR_40 = FUNC_7(VAR_30);

    if (VAR_40->connector_type == VAR_26)
     VAR_35.v2.ucEncodeMode = VAR_24;
    else if (VAR_40->connector_type == VAR_27)
     VAR_35.v2.ucEncodeMode = VAR_23;
    else
     VAR_35.v2.ucEncodeMode = FUNC_5(VAR_30);
   } else if (VAR_33->devices & (VAR_20)) {
    VAR_35.v2.ucEncodeMode = VAR_24;
   } else {
    VAR_35.v2.ucEncodeMode = FUNC_5(VAR_30);
   }
   switch (VAR_33->encoder_id) {
   case 131:
   case 130:
   case 129:
   case 128:
   case 136:
    VAR_39 = VAR_33->enc_priv;
    switch (VAR_39->dig_encoder) {
    case 0:
     VAR_35.v2.ucEncoderID = VAR_2;
     break;
    case 1:
     VAR_35.v2.ucEncoderID = VAR_3;
     break;
    case 2:
     VAR_35.v2.ucEncoderID = VAR_4;
     break;
    case 3:
     VAR_35.v2.ucEncoderID = VAR_5;
     break;
    case 4:
     VAR_35.v2.ucEncoderID = VAR_6;
     break;
    case 5:
     VAR_35.v2.ucEncoderID = VAR_7;
     break;
    case 6:
     VAR_35.v2.ucEncoderID = VAR_8;
     break;
    }
    break;
   case 137:
    VAR_35.v2.ucEncoderID = VAR_9;
    break;
   case 139:
    if (VAR_33->active_device & (VAR_22))
     VAR_35.v2.ucEncoderID = VAR_10;
    else if (VAR_33->active_device & (VAR_14))
     VAR_35.v2.ucEncoderID = VAR_10;
    else
     VAR_35.v2.ucEncoderID = VAR_0;
    break;
   case 138:
    if (VAR_33->active_device & (VAR_22))
     VAR_35.v2.ucEncoderID = VAR_10;
    else if (VAR_33->active_device & (VAR_14))
     VAR_35.v2.ucEncoderID = VAR_10;
    else
     VAR_35.v2.ucEncoderID = VAR_1;
    break;
   }
   break;
  case 3:
   VAR_35.v3.ucCRTC = VAR_34->crtc_id;
   if (FUNC_6(VAR_30) != VAR_28) {
    struct drm_connector *VAR_41 = FUNC_7(VAR_30);

    if (VAR_41->connector_type == VAR_26)
     VAR_35.v2.ucEncodeMode = VAR_24;
    else if (VAR_41->connector_type == VAR_27)
     VAR_35.v2.ucEncodeMode = VAR_23;
    else
     VAR_35.v2.ucEncodeMode = FUNC_5(VAR_30);
   } else if (VAR_33->devices & (VAR_20)) {
    VAR_35.v2.ucEncodeMode = VAR_24;
   } else {
    VAR_35.v2.ucEncodeMode = FUNC_5(VAR_30);
   }
   VAR_35.v3.ucDstBpc = FUNC_4(VAR_30);
   switch (VAR_33->encoder_id) {
   case 131:
   case 130:
   case 129:
   case 128:
   case 136:
    VAR_39 = VAR_33->enc_priv;
    switch (VAR_39->dig_encoder) {
    case 0:
     VAR_35.v3.ucEncoderID = VAR_2;
     break;
    case 1:
     VAR_35.v3.ucEncoderID = VAR_3;
     break;
    case 2:
     VAR_35.v3.ucEncoderID = VAR_4;
     break;
    case 3:
     VAR_35.v3.ucEncoderID = VAR_5;
     break;
    case 4:
     VAR_35.v3.ucEncoderID = VAR_6;
     break;
    case 5:
     VAR_35.v3.ucEncoderID = VAR_7;
     break;
    case 6:
     VAR_35.v3.ucEncoderID = VAR_8;
     break;
    }
    break;
   case 137:
    VAR_35.v3.ucEncoderID = VAR_9;
    break;
   case 139:
    if (VAR_33->active_device & (VAR_22))
     VAR_35.v3.ucEncoderID = VAR_10;
    else if (VAR_33->active_device & (VAR_14))
     VAR_35.v3.ucEncoderID = VAR_10;
    else
     VAR_35.v3.ucEncoderID = VAR_0;
    break;
   case 138:
    if (VAR_33->active_device & (VAR_22))
     VAR_35.v3.ucEncoderID = VAR_10;
    else if (VAR_33->active_device & (VAR_14))
     VAR_35.v3.ucEncoderID = VAR_10;
    else
     VAR_35.v3.ucEncoderID = VAR_1;
    break;
   }
   break;
  }
  break;
 default:
  FUNC_0("Unknown table version: %d, %d\n", VAR_37, VAR_38);
  return;
 }

 FUNC_2(VAR_32->mode_info.atom_context, VAR_36, (uint32_t *)&VAR_35);
}
