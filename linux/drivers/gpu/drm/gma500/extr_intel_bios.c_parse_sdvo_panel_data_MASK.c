
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_dvo_timing {int dummy; } ;
struct drm_psb_private {struct drm_display_mode* sdvo_lvds_vbt_mode; } ;
struct drm_display_mode {int dummy; } ;
struct bdb_sdvo_lvds_options {int panel_type; } ;
struct bdb_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_display_mode*,struct lvds_dvo_timing*) ;
 void* FUNC_1 (struct bdb_header*,int ) ;
 struct drm_display_mode* FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_psb_private *VAR_3,
        struct bdb_header *VAR_4)
{
 struct bdb_sdvo_lvds_options *VAR_5;
 struct lvds_dvo_timing *VAR_6;
 struct drm_display_mode *VAR_7;

 VAR_3->sdvo_lvds_vbt_mode = ((void*)0);

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_6)
  return;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);

 if (!VAR_7)
  return;

 FUNC_0(VAR_7,
   VAR_6 + VAR_5->panel_type);

 VAR_3->sdvo_lvds_vbt_mode = VAR_7;

 return;
}
