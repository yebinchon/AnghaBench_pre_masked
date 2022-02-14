
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ucDigSel; } ;
struct TYPE_14__ {int ucAction; int ucPanelMode; int ucLaneNum; int ucHPD_ID; void* ucBitPerColor; TYPE_1__ acConfig; void* ucEncoderMode; void* usPixelClock; } ;
struct TYPE_11__ {int ucAction; int ucLaneNum; int ucConfig; void* ucEncoderMode; void* usPixelClock; } ;
struct TYPE_12__ {int ucDigSel; } ;
struct TYPE_13__ {int ucPanelMode; int ucAction; int ucLaneNum; void* ucBitPerColor; TYPE_5__ acConfig; void* ucEncoderMode; void* usPixelClock; } ;
union dig_encoder_control {TYPE_7__ v4; TYPE_4__ v1; TYPE_6__ v3; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_encoder_atom_dig {int dig_encoder; int linkb; } ;
struct radeon_encoder {int pixel_clock; int encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_10__ {int atom_context; } ;
struct radeon_device {TYPE_3__ mode_info; } ;
struct radeon_connector_atom_dig {int dp_clock; int dp_lane_count; } ;
struct TYPE_9__ {int hpd; } ;
struct radeon_connector {TYPE_2__ hpd; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
typedef int args ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (void*) ;




 int FUNC_3 (int ,int ) ;
 int VAR_16 ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,int*,int*) ;
 void* FUNC_6 (struct drm_encoder*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (union dig_encoder_control*,int ,int) ;
 void* FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (struct drm_encoder*,int) ;
 struct drm_connector* FUNC_11 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_12 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_13 (struct drm_encoder*) ;

void
FUNC_14(struct drm_encoder *VAR_17, int VAR_18, int VAR_19, int VAR_20)
{
 struct drm_device *VAR_21 = VAR_17->dev;
 struct radeon_device *VAR_22 = VAR_21->dev_private;
 struct radeon_encoder *VAR_23 = FUNC_13(VAR_17);
 struct radeon_encoder_atom_dig *VAR_24 = VAR_23->enc_priv;
 struct drm_connector *VAR_25 = FUNC_11(VAR_17);
 union dig_encoder_control VAR_26;
 int VAR_27 = 0;
 uint8_t VAR_28, VAR_29;
 int VAR_30 = 0;
 int VAR_31 = 0;
 int VAR_32 = VAR_16;

 if (VAR_25) {
  struct radeon_connector *VAR_33 = FUNC_12(VAR_25);
  struct radeon_connector_atom_dig *VAR_34 =
   VAR_33->con_priv;

  VAR_30 = VAR_34->dp_clock;
  VAR_31 = VAR_34->dp_lane_count;
  VAR_32 = VAR_33->hpd.hpd;
 }


 if (VAR_24->dig_encoder == -1)
  return;

 FUNC_8(&VAR_26, 0, sizeof(VAR_26));

 if (FUNC_0(VAR_22))
  VAR_27 = FUNC_3(VAR_12, VAR_15);
 else {
  if (VAR_24->dig_encoder)
   VAR_27 = FUNC_3(VAR_12, VAR_14);
  else
   VAR_27 = FUNC_3(VAR_12, VAR_13);
 }

 if (!FUNC_5(VAR_22->mode_info.atom_context, VAR_27, &VAR_28, &VAR_29))
  return;

 switch (VAR_28) {
 case 1:
  switch (VAR_29) {
  case 1:
   VAR_26.v1.ucAction = VAR_18;
   VAR_26.v1.usPixelClock = FUNC_7(VAR_23->pixel_clock / 10);
   if (VAR_18 == VAR_0)
    VAR_26.v3.ucPanelMode = VAR_19;
   else
    VAR_26.v1.ucEncoderMode = FUNC_6(VAR_17);

   if (FUNC_2(VAR_26.v1.ucEncoderMode))
    VAR_26.v1.ucLaneNum = VAR_31;
   else if (FUNC_10(VAR_17, VAR_23->pixel_clock))
    VAR_26.v1.ucLaneNum = 8;
   else
    VAR_26.v1.ucLaneNum = 4;

   switch (VAR_23->encoder_id) {
   case 130:
    VAR_26.v1.ucConfig = VAR_4;
    break;
   case 129:
   case 131:
    VAR_26.v1.ucConfig = VAR_5;
    break;
   case 128:
    VAR_26.v1.ucConfig = VAR_6;
    break;
   }
   if (VAR_24->linkb)
    VAR_26.v1.ucConfig |= VAR_3;
   else
    VAR_26.v1.ucConfig |= VAR_2;

   if (FUNC_2(VAR_26.v1.ucEncoderMode) && (VAR_30 == 270000))
    VAR_26.v1.ucConfig |= VAR_1;

   break;
  case 2:
  case 3:
   VAR_26.v3.ucAction = VAR_18;
   VAR_26.v3.usPixelClock = FUNC_7(VAR_23->pixel_clock / 10);
   if (VAR_18 == VAR_0)
    VAR_26.v3.ucPanelMode = VAR_19;
   else
    VAR_26.v3.ucEncoderMode = FUNC_6(VAR_17);

   if (FUNC_2(VAR_26.v3.ucEncoderMode))
    VAR_26.v3.ucLaneNum = VAR_31;
   else if (FUNC_10(VAR_17, VAR_23->pixel_clock))
    VAR_26.v3.ucLaneNum = 8;
   else
    VAR_26.v3.ucLaneNum = 4;

   if (FUNC_2(VAR_26.v3.ucEncoderMode) && (VAR_30 == 270000))
    VAR_26.v1.ucConfig |= VAR_7;
   if (VAR_20 != -1)
    VAR_26.v3.acConfig.ucDigSel = VAR_20;
   else
    VAR_26.v3.acConfig.ucDigSel = VAR_24->dig_encoder;
   VAR_26.v3.ucBitPerColor = FUNC_9(VAR_17);
   break;
  case 4:
   VAR_26.v4.ucAction = VAR_18;
   VAR_26.v4.usPixelClock = FUNC_7(VAR_23->pixel_clock / 10);
   if (VAR_18 == VAR_0)
    VAR_26.v4.ucPanelMode = VAR_19;
   else
    VAR_26.v4.ucEncoderMode = FUNC_6(VAR_17);

   if (FUNC_2(VAR_26.v4.ucEncoderMode))
    VAR_26.v4.ucLaneNum = VAR_31;
   else if (FUNC_10(VAR_17, VAR_23->pixel_clock))
    VAR_26.v4.ucLaneNum = 8;
   else
    VAR_26.v4.ucLaneNum = 4;

   if (FUNC_2(VAR_26.v4.ucEncoderMode)) {
    if (VAR_30 == 540000)
     VAR_26.v1.ucConfig |= VAR_11;
    else if (VAR_30 == 324000)
     VAR_26.v1.ucConfig |= VAR_10;
    else if (VAR_30 == 270000)
     VAR_26.v1.ucConfig |= VAR_9;
    else
     VAR_26.v1.ucConfig |= VAR_8;
   }

   if (VAR_20 != -1)
    VAR_26.v4.acConfig.ucDigSel = VAR_20;
   else
    VAR_26.v4.acConfig.ucDigSel = VAR_24->dig_encoder;
   VAR_26.v4.ucBitPerColor = FUNC_9(VAR_17);
   if (VAR_32 == VAR_16)
    VAR_26.v4.ucHPD_ID = 0;
   else
    VAR_26.v4.ucHPD_ID = VAR_32 + 1;
   break;
  default:
   FUNC_1("Unknown table version %d, %d\n", VAR_28, VAR_29);
   break;
  }
  break;
 default:
  FUNC_1("Unknown table version %d, %d\n", VAR_28, VAR_29);
  break;
 }

 FUNC_4(VAR_22->mode_info.atom_context, VAR_27, (uint32_t *)&VAR_26);

}
