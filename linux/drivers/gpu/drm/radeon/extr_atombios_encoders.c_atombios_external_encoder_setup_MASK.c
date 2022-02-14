
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ucAction; int ucLaneNum; int ucBitPerColor; int ucConfig; void* ucEncoderMode; void* usPixelClock; void* usConnectorId; } ;
struct TYPE_9__ {TYPE_3__ sExtEncoder; } ;
struct TYPE_6__ {int ucAction; int ucLaneNum; int ucConfig; void* ucEncoderMode; void* usPixelClock; } ;
struct TYPE_7__ {TYPE_1__ sDigEncoder; } ;
union external_encoder_control {TYPE_4__ v3; TYPE_2__ v1; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct radeon_encoder {int encoder_enum; int pixel_clock; } ;
struct TYPE_10__ {int atom_context; } ;
struct radeon_device {TYPE_5__ mode_info; } ;
struct radeon_connector_atom_dig {int dp_clock; int dp_lane_count; } ;
struct radeon_connector {int connector_object_id; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int*,int*) ;
 void* FUNC_5 (struct drm_encoder*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (union external_encoder_control*,int ,int) ;
 int FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (struct drm_encoder*,int) ;
 struct drm_connector* FUNC_10 (struct drm_encoder*) ;
 struct drm_connector* FUNC_11 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_12 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_13 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_14(struct drm_encoder *VAR_13,
    struct drm_encoder *VAR_14,
    int VAR_15)
{
 struct drm_device *VAR_16 = VAR_13->dev;
 struct radeon_device *VAR_17 = VAR_16->dev_private;
 struct radeon_encoder *VAR_18 = FUNC_13(VAR_13);
 struct radeon_encoder *VAR_19 = FUNC_13(VAR_14);
 union external_encoder_control VAR_20;
 struct drm_connector *VAR_21;
 int VAR_22 = FUNC_2(VAR_1, VAR_10);
 u8 VAR_23, VAR_24;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0;
 u32 VAR_28 = (VAR_19->encoder_enum & VAR_2) >> VAR_3;

 if (VAR_15 == VAR_4)
  VAR_21 = FUNC_11(VAR_13);
 else
  VAR_21 = FUNC_10(VAR_13);

 if (VAR_21) {
  struct radeon_connector *VAR_29 = FUNC_12(VAR_21);
  struct radeon_connector_atom_dig *VAR_30 =
   VAR_29->con_priv;

  VAR_25 = VAR_30->dp_clock;
  VAR_26 = VAR_30->dp_lane_count;
  VAR_27 =
   (VAR_29->connector_object_id & VAR_11) >> VAR_12;
 }

 FUNC_7(&VAR_20, 0, sizeof(VAR_20));

 if (!FUNC_4(VAR_17->mode_info.atom_context, VAR_22, &VAR_23, &VAR_24))
  return;

 switch (VAR_23) {
 case 1:

  break;
 case 2:
  switch (VAR_24) {
  case 1:
  case 2:
   VAR_20.v1.sDigEncoder.ucAction = VAR_15;
   VAR_20.v1.sDigEncoder.usPixelClock = FUNC_6(VAR_18->pixel_clock / 10);
   VAR_20.v1.sDigEncoder.ucEncoderMode = FUNC_5(VAR_13);

   if (FUNC_1(VAR_20.v1.sDigEncoder.ucEncoderMode)) {
    if (VAR_25 == 270000)
     VAR_20.v1.sDigEncoder.ucConfig |= VAR_0;
    VAR_20.v1.sDigEncoder.ucLaneNum = VAR_26;
   } else if (FUNC_9(VAR_13, VAR_18->pixel_clock))
    VAR_20.v1.sDigEncoder.ucLaneNum = 8;
   else
    VAR_20.v1.sDigEncoder.ucLaneNum = 4;
   break;
  case 3:
   VAR_20.v3.sExtEncoder.ucAction = VAR_15;
   if (VAR_15 == VAR_4)
    VAR_20.v3.sExtEncoder.usConnectorId = FUNC_6(VAR_27);
   else
    VAR_20.v3.sExtEncoder.usPixelClock = FUNC_6(VAR_18->pixel_clock / 10);
   VAR_20.v3.sExtEncoder.ucEncoderMode = FUNC_5(VAR_13);

   if (FUNC_1(VAR_20.v3.sExtEncoder.ucEncoderMode)) {
    if (VAR_25 == 270000)
     VAR_20.v3.sExtEncoder.ucConfig |= VAR_5;
    else if (VAR_25 == 540000)
     VAR_20.v3.sExtEncoder.ucConfig |= VAR_6;
    VAR_20.v3.sExtEncoder.ucLaneNum = VAR_26;
   } else if (FUNC_9(VAR_13, VAR_18->pixel_clock))
    VAR_20.v3.sExtEncoder.ucLaneNum = 8;
   else
    VAR_20.v3.sExtEncoder.ucLaneNum = 4;
   switch (VAR_28) {
   case 130:
    VAR_20.v3.sExtEncoder.ucConfig |= VAR_7;
    break;
   case 129:
    VAR_20.v3.sExtEncoder.ucConfig |= VAR_8;
    break;
   case 128:
    VAR_20.v3.sExtEncoder.ucConfig |= VAR_9;
    break;
   }
   VAR_20.v3.sExtEncoder.ucBitPerColor = FUNC_8(VAR_13);
   break;
  default:
   FUNC_0("Unknown table version: %d, %d\n", VAR_23, VAR_24);
   return;
  }
  break;
 default:
  FUNC_0("Unknown table version: %d, %d\n", VAR_23, VAR_24);
  return;
 }
 FUNC_3(VAR_17->mode_info.atom_context, VAR_22, (uint32_t *)&VAR_20);
}
