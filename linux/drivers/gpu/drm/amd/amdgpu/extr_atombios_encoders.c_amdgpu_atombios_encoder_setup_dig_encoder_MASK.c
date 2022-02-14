
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_19__ {int ucAction; int ucDigId; } ;
struct TYPE_18__ {int ucAction; int ucDigId; int ucLaneNum; int ucLinkRateIn270Mhz; void* ucBitPerColor; int ulPixelClock; void* ucDigMode; } ;
struct TYPE_17__ {int ucAction; int ucPanelMode; int ucDigId; } ;
struct TYPE_20__ {TYPE_6__ asCmdParam; TYPE_5__ asStreamParam; TYPE_4__ asDPPanelModeParam; } ;
struct TYPE_15__ {int ucDigSel; } ;
struct TYPE_16__ {int ucAction; int ucPanelMode; int ucLaneNum; int ucHPD_ID; void* ucBitPerColor; TYPE_2__ acConfig; void* ucEncoderMode; void* usPixelClock; } ;
struct TYPE_12__ {int ucAction; int ucLaneNum; int ucConfig; void* ucEncoderMode; void* usPixelClock; } ;
struct TYPE_14__ {int ucDigSel; } ;
struct TYPE_13__ {int ucPanelMode; int ucAction; int ucLaneNum; void* ucBitPerColor; TYPE_1__ acConfig; void* ucEncoderMode; void* usPixelClock; } ;
union dig_encoder_control {TYPE_7__ v5; TYPE_3__ v4; TYPE_10__ v1; TYPE_11__ v3; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder_atom_dig {int dig_encoder; int linkb; } ;
struct amdgpu_encoder {int pixel_clock; int encoder_id; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct TYPE_22__ {int atom_context; } ;
struct amdgpu_device {TYPE_9__ mode_info; } ;
struct amdgpu_connector_atom_dig {int dp_clock; int dp_lane_count; } ;
struct TYPE_21__ {int hpd; } ;
struct amdgpu_connector {TYPE_8__ hpd; struct amdgpu_connector_atom_dig* con_priv; } ;
typedef int args ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (void*) ;




 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int*,int*) ;
 void* FUNC_5 (struct drm_encoder*) ;
 void* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,int) ;
 struct drm_connector* FUNC_8 (struct drm_encoder*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (union dig_encoder_control*,int ,int) ;
 struct amdgpu_connector* FUNC_12 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_13 (struct drm_encoder*) ;

void
FUNC_14(struct drm_encoder *VAR_14,
       int VAR_15, int VAR_16)
{
 struct drm_device *VAR_17 = VAR_14->dev;
 struct amdgpu_device *VAR_18 = VAR_17->dev_private;
 struct amdgpu_encoder *VAR_19 = FUNC_13(VAR_14);
 struct amdgpu_encoder_atom_dig *VAR_20 = VAR_19->enc_priv;
 struct drm_connector *VAR_21 = FUNC_8(VAR_14);
 union dig_encoder_control VAR_22;
 int VAR_23 = FUNC_2(VAR_12, VAR_13);
 uint8_t VAR_24, VAR_25;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = VAR_0;

 if (VAR_21) {
  struct amdgpu_connector *VAR_29 = FUNC_12(VAR_21);
  struct amdgpu_connector_atom_dig *VAR_30 =
   VAR_29->con_priv;

  VAR_26 = VAR_30->dp_clock;
  VAR_27 = VAR_30->dp_lane_count;
  VAR_28 = VAR_29->hpd.hpd;
 }


 if (VAR_20->dig_encoder == -1)
  return;

 FUNC_11(&VAR_22, 0, sizeof(VAR_22));

 if (!FUNC_4(VAR_18->mode_info.atom_context, VAR_23, &VAR_24, &VAR_25))
  return;

 switch (VAR_24) {
 case 1:
  switch (VAR_25) {
  case 1:
   VAR_22.v1.ucAction = VAR_15;
   VAR_22.v1.usPixelClock = FUNC_9(VAR_19->pixel_clock / 10);
   if (VAR_15 == 133)
    VAR_22.v3.ucPanelMode = VAR_16;
   else
    VAR_22.v1.ucEncoderMode = FUNC_6(VAR_14);

   if (FUNC_1(VAR_22.v1.ucEncoderMode))
    VAR_22.v1.ucLaneNum = VAR_27;
   else if (FUNC_7(VAR_14, VAR_19->pixel_clock))
    VAR_22.v1.ucLaneNum = 8;
   else
    VAR_22.v1.ucLaneNum = 4;

   if (FUNC_1(VAR_22.v1.ucEncoderMode) && (VAR_26 == 270000))
    VAR_22.v1.ucConfig |= VAR_1;
   switch (VAR_19->encoder_id) {
   case 130:
    VAR_22.v1.ucConfig = VAR_4;
    break;
   case 129:
   case 131:
    VAR_22.v1.ucConfig = VAR_5;
    break;
   case 128:
    VAR_22.v1.ucConfig = VAR_6;
    break;
   }
   if (VAR_20->linkb)
    VAR_22.v1.ucConfig |= VAR_3;
   else
    VAR_22.v1.ucConfig |= VAR_2;
   break;
  case 2:
  case 3:
   VAR_22.v3.ucAction = VAR_15;
   VAR_22.v3.usPixelClock = FUNC_9(VAR_19->pixel_clock / 10);
   if (VAR_15 == 133)
    VAR_22.v3.ucPanelMode = VAR_16;
   else
    VAR_22.v3.ucEncoderMode = FUNC_6(VAR_14);

   if (FUNC_1(VAR_22.v3.ucEncoderMode))
    VAR_22.v3.ucLaneNum = VAR_27;
   else if (FUNC_7(VAR_14, VAR_19->pixel_clock))
    VAR_22.v3.ucLaneNum = 8;
   else
    VAR_22.v3.ucLaneNum = 4;

   if (FUNC_1(VAR_22.v3.ucEncoderMode) && (VAR_26 == 270000))
    VAR_22.v1.ucConfig |= VAR_7;
   VAR_22.v3.acConfig.ucDigSel = VAR_20->dig_encoder;
   VAR_22.v3.ucBitPerColor = FUNC_5(VAR_14);
   break;
  case 4:
   VAR_22.v4.ucAction = VAR_15;
   VAR_22.v4.usPixelClock = FUNC_9(VAR_19->pixel_clock / 10);
   if (VAR_15 == 133)
    VAR_22.v4.ucPanelMode = VAR_16;
   else
    VAR_22.v4.ucEncoderMode = FUNC_6(VAR_14);

   if (FUNC_1(VAR_22.v4.ucEncoderMode))
    VAR_22.v4.ucLaneNum = VAR_27;
   else if (FUNC_7(VAR_14, VAR_19->pixel_clock))
    VAR_22.v4.ucLaneNum = 8;
   else
    VAR_22.v4.ucLaneNum = 4;

   if (FUNC_1(VAR_22.v4.ucEncoderMode)) {
    if (VAR_26 == 540000)
     VAR_22.v1.ucConfig |= VAR_11;
    else if (VAR_26 == 324000)
     VAR_22.v1.ucConfig |= VAR_10;
    else if (VAR_26 == 270000)
     VAR_22.v1.ucConfig |= VAR_9;
    else
     VAR_22.v1.ucConfig |= VAR_8;
   }
   VAR_22.v4.acConfig.ucDigSel = VAR_20->dig_encoder;
   VAR_22.v4.ucBitPerColor = FUNC_5(VAR_14);
   if (VAR_28 == VAR_0)
    VAR_22.v4.ucHPD_ID = 0;
   else
    VAR_22.v4.ucHPD_ID = VAR_28 + 1;
   break;
  case 5:
   switch (VAR_15) {
   case 133:
    VAR_22.v5.asDPPanelModeParam.ucAction = VAR_15;
    VAR_22.v5.asDPPanelModeParam.ucPanelMode = VAR_16;
    VAR_22.v5.asDPPanelModeParam.ucDigId = VAR_20->dig_encoder;
    break;
   case 132:
    VAR_22.v5.asStreamParam.ucAction = VAR_15;
    VAR_22.v5.asStreamParam.ucDigId = VAR_20->dig_encoder;
    VAR_22.v5.asStreamParam.ucDigMode =
     FUNC_6(VAR_14);
    if (FUNC_1(VAR_22.v5.asStreamParam.ucDigMode))
     VAR_22.v5.asStreamParam.ucLaneNum = VAR_27;
    else if (FUNC_7(VAR_14,
         VAR_19->pixel_clock))
     VAR_22.v5.asStreamParam.ucLaneNum = 8;
    else
     VAR_22.v5.asStreamParam.ucLaneNum = 4;
    VAR_22.v5.asStreamParam.ulPixelClock =
     FUNC_10(VAR_19->pixel_clock / 10);
    VAR_22.v5.asStreamParam.ucBitPerColor =
     FUNC_5(VAR_14);
    VAR_22.v5.asStreamParam.ucLinkRateIn270Mhz = VAR_26 / 27000;
    break;
   case 136:
   case 140:
   case 139:
   case 138:
   case 137:
   case 141:
   case 135:
   case 134:
    VAR_22.v5.asCmdParam.ucAction = VAR_15;
    VAR_22.v5.asCmdParam.ucDigId = VAR_20->dig_encoder;
    break;
   default:
    FUNC_0("Unsupported action 0x%x\n", VAR_15);
    break;
   }
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_24, VAR_25);
   break;
  }
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_24, VAR_25);
  break;
 }

 FUNC_3(VAR_18->mode_info.atom_context, VAR_23, (uint32_t *)&VAR_22);

}
