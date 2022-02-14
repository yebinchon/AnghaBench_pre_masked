
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct radeon_encoder_atom_dig {int backlight_level; } ;
struct radeon_encoder {int encoder_id; int devices; int active_device; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_4__ {int atom_context; int bl_encoder; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int args ;
struct TYPE_5__ {int ucAction; } ;
typedef TYPE_2__ DISPLAY_DEVICE_OUTPUT_CONTROL_PS_ALLOCATION ;


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
 int FUNC_0 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (struct radeon_encoder*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_7(struct drm_encoder *VAR_18, int VAR_19)
{
 struct drm_device *VAR_20 = VAR_18->dev;
 struct radeon_device *VAR_21 = VAR_20->dev_private;
 struct radeon_encoder *VAR_22 = FUNC_6(VAR_18);
 DISPLAY_DEVICE_OUTPUT_CONTROL_PS_ALLOCATION VAR_23;
 int VAR_24 = 0;

 FUNC_5(&VAR_23, 0, sizeof(VAR_23));

 switch (VAR_22->encoder_id) {
 case 128:
 case 131:
  VAR_24 = FUNC_0(VAR_8, VAR_16);
  break;
 case 135:
 case 136:
 case 132:
  VAR_24 = FUNC_0(VAR_8, VAR_12);
  break;
 case 130:
  VAR_24 = FUNC_0(VAR_8, VAR_13);
  break;
 case 129:
  if (VAR_22->devices & (VAR_1))
   VAR_24 = FUNC_0(VAR_8, VAR_13);
  else
   VAR_24 = FUNC_0(VAR_8, VAR_14);
  break;
 case 138:
 case 134:
  if (VAR_22->active_device & (VAR_2))
   VAR_24 = FUNC_0(VAR_8, VAR_17);
  else if (VAR_22->active_device & (VAR_0))
   VAR_24 = FUNC_0(VAR_8, VAR_9);
  else
   VAR_24 = FUNC_0(VAR_8, VAR_10);
  break;
 case 137:
 case 133:
  if (VAR_22->active_device & (VAR_2))
   VAR_24 = FUNC_0(VAR_8, VAR_17);
  else if (VAR_22->active_device & (VAR_0))
   VAR_24 = FUNC_0(VAR_8, VAR_9);
  else
   VAR_24 = FUNC_0(VAR_8, VAR_11);
  break;
 default:
  return;
 }

 switch (VAR_19) {
 case 141:
  VAR_23.ucAction = VAR_4;

  if (VAR_22->encoder_id == 136) {
   u32 VAR_25 = FUNC_1(VAR_15);
   FUNC_2(VAR_15, VAR_25 & ~VAR_7);
   FUNC_3(VAR_21->mode_info.atom_context, VAR_24, (uint32_t *)&VAR_23);
   FUNC_2(VAR_15, VAR_25);
  } else
   FUNC_3(VAR_21->mode_info.atom_context, VAR_24, (uint32_t *)&VAR_23);
  if (VAR_22->devices & (VAR_1)) {
   if (VAR_21->mode_info.bl_encoder) {
    struct radeon_encoder_atom_dig *VAR_26 = VAR_22->enc_priv;

    FUNC_4(VAR_22, VAR_26->backlight_level);
   } else {
    VAR_23.ucAction = VAR_6;
    FUNC_3(VAR_21->mode_info.atom_context, VAR_24, (uint32_t *)&VAR_23);
   }
  }
  break;
 case 140:
 case 139:
 case 142:
  VAR_23.ucAction = VAR_3;
  FUNC_3(VAR_21->mode_info.atom_context, VAR_24, (uint32_t *)&VAR_23);
  if (VAR_22->devices & (VAR_1)) {
   VAR_23.ucAction = VAR_5;
   FUNC_3(VAR_21->mode_info.atom_context, VAR_24, (uint32_t *)&VAR_23);
  }
  break;
 }
}
