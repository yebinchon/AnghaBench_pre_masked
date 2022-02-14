
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lvds_dvo_timing {int dummy; } ;
struct drm_psb_private {int lvds_vbt; int panel_type; TYPE_1__* dev; struct drm_display_mode* lfp_lvds_vbt_mode; int lvds_dither; } ;
struct drm_display_mode {scalar_t__ htotal; scalar_t__ vtotal; } ;
struct bdb_lvds_options {int panel_type; int pixel_dither; } ;
struct bdb_lvds_lfp_data_entry {struct lvds_dvo_timing dvo_timing; } ;
struct bdb_lvds_lfp_data {struct bdb_lvds_lfp_data_entry* data; } ;
struct bdb_header {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*,struct lvds_dvo_timing*) ;
 void* FUNC_4 (struct bdb_header*,int ) ;
 int FUNC_5 (struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct drm_psb_private *VAR_3,
       struct bdb_header *VAR_4)
{
 struct bdb_lvds_options *VAR_5;
 struct bdb_lvds_lfp_data *VAR_6;
 struct bdb_lvds_lfp_data_entry *VAR_7;
 struct lvds_dvo_timing *VAR_8;
 struct drm_display_mode *VAR_9;


 VAR_3->lvds_dither = 0;
 VAR_3->lvds_vbt = 0;

 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (!VAR_5)
  return;

 VAR_3->lvds_dither = VAR_5->pixel_dither;
 VAR_3->panel_type = VAR_5->panel_type;

 if (VAR_5->panel_type == 0xff)
  return;

 VAR_6 = FUNC_4(VAR_4, VAR_0);
 if (!VAR_6)
  return;


 VAR_7 = &VAR_6->data[VAR_5->panel_type];
 VAR_8 = &VAR_7->dvo_timing;

 VAR_9 = FUNC_6(sizeof(*VAR_9),
          VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_3->dev->dev, "out of memory for fixed panel mode\n");
  return;
 }

 VAR_3->lvds_vbt = 1;
 FUNC_3(VAR_9, VAR_8);

 if (VAR_9->htotal > 0 && VAR_9->vtotal > 0) {
  VAR_3->lfp_lvds_vbt_mode = VAR_9;
  FUNC_2(VAR_9);
 } else {
  FUNC_0(VAR_3->dev->dev, "ignoring invalid LVDS VBT\n");
  VAR_3->lvds_vbt = 0;
  FUNC_5(VAR_9);
 }
 return;
}
