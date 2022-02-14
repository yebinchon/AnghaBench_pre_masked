
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fixed_mode; } ;
struct intel_connector {TYPE_1__ panel; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dev; } ;


 int FUNC_0 (char*) ;
 struct drm_display_mode* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 struct intel_connector* FUNC_3 (struct drm_connector*) ;

int FUNC_4(struct drm_connector *VAR_0)
{
 struct intel_connector *VAR_1 = FUNC_3(VAR_0);
 struct drm_display_mode *VAR_2;

 FUNC_0("\n");

 if (!VAR_1->panel.fixed_mode) {
  FUNC_0("no fixed mode\n");
  return 0;
 }

 VAR_2 = FUNC_1(VAR_0->dev,
      VAR_1->panel.fixed_mode);
 if (!VAR_2) {
  FUNC_0("drm_mode_duplicate failed\n");
  return 0;
 }

 FUNC_2(VAR_0, VAR_2);
 return 1;
}
