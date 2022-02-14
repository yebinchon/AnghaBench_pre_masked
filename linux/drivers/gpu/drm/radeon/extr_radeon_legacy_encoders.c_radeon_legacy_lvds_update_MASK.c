
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_encoder_lvds {int panel_pwr_delay; int backlight_level; scalar_t__ bl_dev; } ;
struct radeon_encoder_atom_dig {int panel_pwr_delay; int backlight_level; scalar_t__ bl_dev; } ;
struct radeon_encoder {struct radeon_encoder_lvds* enc_priv; } ;
struct TYPE_2__ {scalar_t__ connector_table; } ;
struct radeon_device {scalar_t__ is_atom_bios; TYPE_1__ mode_info; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;




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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_encoder*,int) ;
 int FUNC_8 (struct drm_encoder*,int) ;
 struct radeon_encoder* FUNC_9 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_20, int VAR_21)
{
 struct drm_device *VAR_22 = VAR_20->dev;
 struct radeon_device *VAR_23 = VAR_22->dev_private;
 struct radeon_encoder *VAR_24 = FUNC_9(VAR_20);
 uint32_t VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29 = 2000;
 bool VAR_30 = 0;
 uint8_t VAR_31;
 FUNC_0("\n");

 VAR_25 = FUNC_1(VAR_13);
 VAR_31 = (VAR_25 >> VAR_9) & 0xff;

 if (VAR_24->enc_priv) {
  if (VAR_23->is_atom_bios) {
   struct radeon_encoder_atom_dig *VAR_32 = VAR_24->enc_priv;
   VAR_29 = VAR_32->panel_pwr_delay;
   if (VAR_32->bl_dev)
    VAR_31 = VAR_32->backlight_level;
  } else {
   struct radeon_encoder_lvds *VAR_33 = VAR_24->enc_priv;
   VAR_29 = VAR_33->panel_pwr_delay;
   if (VAR_33->bl_dev)
    VAR_31 = VAR_33->backlight_level;
  }
 }




 if ((VAR_23->mode_info.connector_table == VAR_0) ||
     (VAR_23->mode_info.connector_table == VAR_1) ||
     (VAR_23->mode_info.connector_table == VAR_2) ||
     (VAR_23->mode_info.connector_table == VAR_3))
  VAR_30 = 1;

 switch (VAR_21) {
 case 130:
  VAR_28 = FUNC_1(VAR_5);
  VAR_28 |= VAR_4;
  FUNC_3(VAR_5, VAR_28);
  VAR_26 = FUNC_1(VAR_15);
  VAR_26 |= VAR_16;
  FUNC_3(VAR_15, VAR_26);
  FUNC_6(1);

  VAR_26 = FUNC_1(VAR_15);
  VAR_26 &= ~VAR_17;
  FUNC_3(VAR_15, VAR_26);

  VAR_25 &= ~(VAR_11 |
       VAR_8);
  VAR_25 |= (VAR_14 | VAR_12 |
      VAR_10 | VAR_6 |
      (VAR_31 << VAR_9));
  if (VAR_30)
   VAR_25 |= VAR_7;
  FUNC_6(VAR_29);
  FUNC_3(VAR_13, VAR_25);
  break;
 case 129:
 case 128:
 case 131:
  VAR_27 = FUNC_2(VAR_18);
  FUNC_5(VAR_18, 0, ~VAR_19);
  VAR_25 |= VAR_11;
  if (VAR_30) {
   VAR_25 &= ~VAR_7;
   FUNC_3(VAR_13, VAR_25);
   VAR_25 &= ~(VAR_14 | VAR_12);
  } else {
   FUNC_3(VAR_13, VAR_25);
   VAR_25 &= ~(VAR_14 | VAR_6 | VAR_12 | VAR_10);
  }
  FUNC_6(VAR_29);
  FUNC_3(VAR_13, VAR_25);
  FUNC_4(VAR_18, VAR_27);
  FUNC_6(VAR_29);
  break;
 }

 if (VAR_23->is_atom_bios)
  FUNC_7(VAR_20, (VAR_21 == 130) ? 1 : 0);
 else
  FUNC_8(VAR_20, (VAR_21 == 130) ? 1 : 0);

}
