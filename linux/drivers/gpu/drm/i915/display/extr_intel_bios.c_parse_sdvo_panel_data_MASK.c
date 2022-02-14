
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_display_mode* sdvo_lvds_vbt_mode; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct drm_display_mode {int dummy; } ;
struct bdb_sdvo_panel_dtds {int * dtds; } ;
struct bdb_sdvo_lvds_options {int panel_type; } ;
struct bdb_header {int dummy; } ;
struct TYPE_4__ {int vbt_sdvo_panel_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*,int *) ;
 void* FUNC_3 (struct bdb_header const*,int ) ;
 TYPE_2__ VAR_3 ;
 struct drm_display_mode* FUNC_4 (int,int ) ;

__attribute__((used)) static void
FUNC_5(struct drm_i915_private *VAR_4,
        const struct bdb_header *VAR_5)
{
 const struct bdb_sdvo_panel_dtds *VAR_6;
 struct drm_display_mode *VAR_7;
 int VAR_8;

 VAR_8 = VAR_3.vbt_sdvo_panel_type;
 if (VAR_8 == -2) {
  FUNC_0("Ignore SDVO panel mode from BIOS VBT tables.\n");
  return;
 }

 if (VAR_8 == -1) {
  const struct bdb_sdvo_lvds_options *VAR_9;

  VAR_9 = FUNC_3(VAR_5, VAR_0);
  if (!VAR_9)
   return;

  VAR_8 = VAR_9->panel_type;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_6)
  return;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return;

 FUNC_2(VAR_7, &VAR_6->dtds[VAR_8]);

 VAR_4->vbt.sdvo_lvds_vbt_mode = VAR_7;

 FUNC_0("Found SDVO panel mode in BIOS VBT tables:\n");
 FUNC_1(VAR_7);
}
