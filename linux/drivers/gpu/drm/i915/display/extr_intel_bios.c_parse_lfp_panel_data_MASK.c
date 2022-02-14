
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lvds_fp_timing {scalar_t__ x_res; scalar_t__ y_res; int lvds_reg_val; } ;
struct lvds_dvo_timing {int dummy; } ;
struct TYPE_2__ {int panel_type; int bios_lvds_val; struct drm_display_mode* lfp_lvds_vbt_mode; int drrs_type; int lvds_dither; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct bdb_lvds_options {int panel_type; int dps_panel_type_bits; int pixel_dither; } ;
struct bdb_lvds_lfp_data_ptrs {int dummy; } ;
struct bdb_lvds_lfp_data {int dummy; } ;
struct bdb_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*,struct lvds_dvo_timing const*) ;
 void* FUNC_4 (struct bdb_header const*,int ) ;
 struct lvds_dvo_timing* FUNC_5 (struct bdb_lvds_lfp_data const*,struct bdb_lvds_lfp_data_ptrs const*,int) ;
 struct lvds_fp_timing* FUNC_6 (struct bdb_header const*,struct bdb_lvds_lfp_data const*,struct bdb_lvds_lfp_data_ptrs const*,int) ;
 int FUNC_7 (struct drm_i915_private*) ;
 struct drm_display_mode* FUNC_8 (int,int ) ;

__attribute__((used)) static void
FUNC_9(struct drm_i915_private *VAR_8,
       const struct bdb_header *VAR_9)
{
 const struct bdb_lvds_options *VAR_10;
 const struct bdb_lvds_lfp_data *VAR_11;
 const struct bdb_lvds_lfp_data_ptrs *VAR_12;
 const struct lvds_dvo_timing *VAR_13;
 const struct lvds_fp_timing *VAR_14;
 struct drm_display_mode *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_10 = FUNC_4(VAR_9, VAR_2);
 if (!VAR_10)
  return;

 VAR_8->vbt.lvds_dither = VAR_10->pixel_dither;

 VAR_18 = FUNC_7(VAR_8);
 if (VAR_18 >= 0) {
  FUNC_1(VAR_18 > 0xf);
  VAR_16 = VAR_18;
  FUNC_0("Panel type: %d (OpRegion)\n", VAR_16);
 } else {
  if (VAR_10->panel_type > 0xf) {
   FUNC_0("Invalid VBT panel type 0x%x\n",
          VAR_10->panel_type);
   return;
  }
  VAR_16 = VAR_10->panel_type;
  FUNC_0("Panel type: %d (VBT)\n", VAR_16);
 }

 VAR_8->vbt.panel_type = VAR_16;

 VAR_17 = (VAR_10->dps_panel_type_bits
    >> (VAR_16 * 2)) & VAR_5;





 switch (VAR_17) {
 case 0:
  VAR_8->vbt.drrs_type = VAR_7;
  FUNC_0("DRRS supported mode is static\n");
  break;
 case 2:
  VAR_8->vbt.drrs_type = VAR_6;
  FUNC_0("DRRS supported mode is seamless\n");
  break;
 default:
  VAR_8->vbt.drrs_type = VAR_3;
  FUNC_0("DRRS not supported (VBT input)\n");
  break;
 }

 VAR_11 = FUNC_4(VAR_9, VAR_0);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_4(VAR_9, VAR_1);
 if (!VAR_12)
  return;

 VAR_13 = FUNC_5(VAR_11,
            VAR_12,
            VAR_16);

 VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return;

 FUNC_3(VAR_15, VAR_13);

 VAR_8->vbt.lfp_lvds_vbt_mode = VAR_15;

 FUNC_0("Found panel mode in BIOS VBT tables:\n");
 FUNC_2(VAR_15);

 VAR_14 = FUNC_6(VAR_9, VAR_11,
           VAR_12,
           VAR_16);
 if (VAR_14) {

  if (VAR_14->x_res == VAR_15->hdisplay &&
      VAR_14->y_res == VAR_15->vdisplay) {
   VAR_8->vbt.bios_lvds_val = VAR_14->lvds_reg_val;
   FUNC_0("VBT initial LVDS value %x\n",
          VAR_8->vbt.bios_lvds_val);
  }
 }
}
