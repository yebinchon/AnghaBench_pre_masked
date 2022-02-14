
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ucMisc; int ucAction; int ucTemporal; int ucSpatial; int ucFRC; int ucTruncate; void* usPixelClock; } ;
struct TYPE_4__ {int ucMisc; int ucAction; void* usPixelClock; } ;
union lvds_encoder_control {TYPE_2__ v2; TYPE_1__ v1; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_encoder_atom_dig {int lcd_misc; int linkb; int coherent_mode; } ;
struct radeon_encoder {int encoder_id; int devices; int pixel_clock; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_6__ {int atom_context; } ;
struct radeon_device {TYPE_3__ mode_info; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int args ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int) ;




 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 scalar_t__ FUNC_4 (struct drm_encoder*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (union lvds_encoder_control*,int ,int) ;
 int FUNC_7 (struct drm_encoder*,int) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

void
FUNC_9(struct drm_encoder *VAR_20, int VAR_21)
{
 struct drm_device *VAR_22 = VAR_20->dev;
 struct radeon_device *VAR_23 = VAR_22->dev_private;
 struct radeon_encoder *VAR_24 = FUNC_8(VAR_20);
 struct radeon_encoder_atom_dig *VAR_25 = VAR_24->enc_priv;
 union lvds_encoder_control VAR_26;
 int VAR_27 = 0;
 int VAR_28 = 0;
 uint8_t VAR_29, VAR_30;

 if (!VAR_25)
  return;

 if (FUNC_4(VAR_20) == VAR_1)
  VAR_28 = 1;

 FUNC_6(&VAR_26, 0, sizeof(VAR_26));

 switch (VAR_24->encoder_id) {
 case 130:
  VAR_27 = FUNC_1(VAR_7, VAR_8);
  break;
 case 128:
 case 131:
  VAR_27 = FUNC_1(VAR_7, VAR_18);
  break;
 case 129:
  if (VAR_24->devices & (VAR_0))
   VAR_27 = FUNC_1(VAR_7, VAR_8);
  else
   VAR_27 = FUNC_1(VAR_7, VAR_19);
  break;
 }

 if (!FUNC_3(VAR_23->mode_info.atom_context, VAR_27, &VAR_29, &VAR_30))
  return;

 switch (VAR_29) {
 case 1:
 case 2:
  switch (VAR_30) {
  case 1:
   VAR_26.v1.ucMisc = 0;
   VAR_26.v1.ucAction = VAR_21;
   if (VAR_28)
    VAR_26.v1.ucMisc |= VAR_11;
   VAR_26.v1.usPixelClock = FUNC_5(VAR_24->pixel_clock / 10);
   if (VAR_24->devices & (VAR_0)) {
    if (VAR_25->lcd_misc & VAR_3)
     VAR_26.v1.ucMisc |= VAR_10;
    if (VAR_25->lcd_misc & VAR_2)
     VAR_26.v1.ucMisc |= VAR_2;
   } else {
    if (VAR_25->linkb)
     VAR_26.v1.ucMisc |= VAR_12;
    if (FUNC_7(VAR_20, VAR_24->pixel_clock))
     VAR_26.v1.ucMisc |= VAR_10;

    VAR_26.v1.ucMisc |= VAR_2;
   }
   break;
  case 2:
  case 3:
   VAR_26.v2.ucMisc = 0;
   VAR_26.v2.ucAction = VAR_21;
   if (VAR_30 == 3) {
    if (VAR_25->coherent_mode)
     VAR_26.v2.ucMisc |= VAR_9;
   }
   if (VAR_28)
    VAR_26.v2.ucMisc |= VAR_11;
   VAR_26.v2.usPixelClock = FUNC_5(VAR_24->pixel_clock / 10);
   VAR_26.v2.ucTruncate = 0;
   VAR_26.v2.ucSpatial = 0;
   VAR_26.v2.ucTemporal = 0;
   VAR_26.v2.ucFRC = 0;
   if (VAR_24->devices & (VAR_0)) {
    if (VAR_25->lcd_misc & VAR_3)
     VAR_26.v2.ucMisc |= VAR_10;
    if (VAR_25->lcd_misc & VAR_5) {
     VAR_26.v2.ucSpatial = VAR_14;
     if (VAR_25->lcd_misc & VAR_2)
      VAR_26.v2.ucSpatial |= VAR_13;
    }
    if (VAR_25->lcd_misc & VAR_6) {
     VAR_26.v2.ucTemporal = VAR_16;
     if (VAR_25->lcd_misc & VAR_2)
      VAR_26.v2.ucTemporal |= VAR_15;
     if (((VAR_25->lcd_misc >> VAR_4) & 0x3) == 2)
      VAR_26.v2.ucTemporal |= VAR_17;
    }
   } else {
    if (VAR_25->linkb)
     VAR_26.v2.ucMisc |= VAR_12;
    if (FUNC_7(VAR_20, VAR_24->pixel_clock))
     VAR_26.v2.ucMisc |= VAR_10;
   }
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_29, VAR_30);
   break;
  }
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_29, VAR_30);
  break;
 }

 FUNC_2(VAR_23->mode_info.atom_context, VAR_27, (uint32_t *)&VAR_26);
}
