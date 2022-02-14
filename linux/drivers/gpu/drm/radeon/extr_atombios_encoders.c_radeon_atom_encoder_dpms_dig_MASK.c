
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_atom_dig {int active_mst_links; int backlight_level; int panel_mode; } ;
struct radeon_encoder {int devices; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_2__ {int bl_encoder; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct radeon_connector_atom_dig {int edp_on; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int connector_type; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
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
 int VAR_16 ;




 int FUNC_4 (int ) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct drm_encoder*,int ,int ) ;
 int FUNC_6 (struct drm_encoder*,int ,int ,int ) ;
 int FUNC_7 (struct drm_encoder*,struct drm_encoder*,int ) ;
 int FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (struct radeon_encoder*,int ) ;
 int FUNC_10 (struct drm_connector*,int ) ;
 scalar_t__ FUNC_11 (struct drm_connector*) ;
 int FUNC_12 (struct drm_encoder*,struct drm_connector*) ;
 int FUNC_13 (struct drm_encoder*,struct drm_connector*) ;
 int FUNC_14 (struct drm_connector*,int ) ;
 struct drm_connector* FUNC_15 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_16 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_17 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_18 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_19(struct drm_encoder *VAR_19, int VAR_20)
{
 struct drm_device *VAR_21 = VAR_19->dev;
 struct radeon_device *VAR_22 = VAR_21->dev_private;
 struct radeon_encoder *VAR_23 = FUNC_18(VAR_19);
 struct drm_encoder *VAR_24 = FUNC_16(VAR_19);
 struct radeon_encoder_atom_dig *VAR_25 = VAR_23->enc_priv;
 struct drm_connector *VAR_26 = FUNC_15(VAR_19);
 struct radeon_connector *VAR_27 = ((void*)0);
 struct radeon_connector_atom_dig *VAR_28 = ((void*)0);
 bool VAR_29 = 0;

 if (VAR_26) {
  VAR_27 = FUNC_17(VAR_26);
  VAR_28 = VAR_27->con_priv;
  if ((FUNC_11(VAR_26) ==
       VAR_17) &&
      (VAR_23->devices & (VAR_0)) &&
      !FUNC_2(VAR_22))
   VAR_29 = 1;
 }

 switch (VAR_20) {
 case 130:
  if (FUNC_1(VAR_22) || FUNC_2(VAR_22)) {
   if (!VAR_26)
    VAR_25->panel_mode = VAR_14;
   else
    VAR_25->panel_mode = FUNC_12(VAR_19, VAR_26);


   FUNC_5(VAR_19, VAR_5, 0);
   FUNC_5(VAR_19,
         VAR_6,
         VAR_25->panel_mode);
   if (VAR_24) {
    if (FUNC_1(VAR_22) || FUNC_3(VAR_22))
     FUNC_7(VAR_19, VAR_24,
         VAR_18);
   }
  } else if (FUNC_0(VAR_22)) {

   FUNC_5(VAR_19, VAR_5, 0);
  } else {

   FUNC_5(VAR_19, VAR_2, 0);
   FUNC_6(VAR_19, VAR_13, 0, 0);
  }
  if (FUNC_4(FUNC_8(VAR_19)) && VAR_26) {
   if (VAR_26->connector_type == VAR_16) {
    FUNC_10(VAR_26,
            VAR_12);
    VAR_28->edp_on = 1;
   }
  }

  FUNC_6(VAR_19, VAR_8, 0, 0);
  if (FUNC_4(FUNC_8(VAR_19)) && VAR_26) {

   FUNC_13(VAR_19, VAR_26);
   if (FUNC_0(VAR_22))
    FUNC_5(VAR_19, VAR_4, 0);
  }
  if (VAR_23->devices & (VAR_0)) {
   if (VAR_22->mode_info.bl_encoder)
    FUNC_9(VAR_23, VAR_25->backlight_level);
   else
    FUNC_6(VAR_19,
              VAR_10, 0, 0);
  }
  if (VAR_24)
   FUNC_7(VAR_19, VAR_24, VAR_2);
  break;
 case 129:
 case 128:
 case 131:


  if (VAR_25->active_mst_links)
   return;

  if (FUNC_0(VAR_22)) {
   if (FUNC_4(FUNC_8(VAR_19)) && VAR_26)
    FUNC_5(VAR_19, VAR_3, 0);
  }
  if (VAR_24)
   FUNC_7(VAR_19, VAR_24, VAR_1);
  if (VAR_23->devices & (VAR_0))
   FUNC_6(VAR_19,
             VAR_9, 0, 0);

  if (FUNC_4(FUNC_8(VAR_19)) &&
      VAR_26 && !VAR_29)
   FUNC_14(VAR_26, VAR_15);
  if (FUNC_0(VAR_22)) {

   FUNC_6(VAR_19,
             VAR_7, 0, 0);
  } else {

   FUNC_6(VAR_19,
             VAR_7, 0, 0);
   FUNC_5(VAR_19, VAR_1, 0);
  }
  if (FUNC_4(FUNC_8(VAR_19)) && VAR_26) {
   if (VAR_29)
    FUNC_14(VAR_26, VAR_15);
   if (VAR_26->connector_type == VAR_16) {
    FUNC_10(VAR_26,
            VAR_11);
    VAR_28->edp_on = 0;
   }
  }
  break;
 }
}
