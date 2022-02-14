
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct truly_nt35597 {int dev; struct nt35597_config* config; } ;
struct nt35597_config {int dm; int height_mm; int width_mm; } ;
struct drm_panel {struct drm_connector* connector; } ;
struct drm_display_mode {int type; } ;
struct TYPE_2__ {int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_display_mode*,int ) ;
 struct drm_display_mode* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 struct truly_nt35597* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_2->connector;
 struct truly_nt35597 *VAR_4 = FUNC_4(VAR_2);
 struct drm_display_mode *VAR_5;
 const struct nt35597_config *VAR_6;

 VAR_6 = VAR_4->config;
 VAR_5 = FUNC_2(VAR_3->dev);
 if (!VAR_5) {
  FUNC_0(VAR_4->dev,
   "failed to create a new display mode\n");
  return 0;
 }

 VAR_3->display_info.width_mm = VAR_6->width_mm;
 VAR_3->display_info.height_mm = VAR_6->height_mm;
 FUNC_1(VAR_5, VAR_6->dm);
 VAR_5->type = VAR_0 | VAR_1;
 FUNC_3(VAR_3, VAR_5);

 return 1;
}
