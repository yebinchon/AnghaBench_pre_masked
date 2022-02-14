
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fixed_mode; } ;
struct intel_connector {TYPE_1__ panel; struct edid* detect_edid; } ;
struct edid {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dev; } ;


 struct drm_display_mode* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct intel_connector* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_0)
{
 struct intel_connector *VAR_1 = FUNC_5(VAR_0);
 struct edid *VAR_2;

 VAR_2 = VAR_1->detect_edid;
 if (VAR_2) {
  int VAR_3 = FUNC_3(VAR_0, VAR_2);
  if (VAR_3)
   return VAR_3;
 }


 if (FUNC_4(FUNC_2(VAR_0)) &&
     VAR_1->panel.fixed_mode) {
  struct drm_display_mode *VAR_4;

  VAR_4 = FUNC_0(VAR_0->dev,
       VAR_1->panel.fixed_mode);
  if (VAR_4) {
   FUNC_1(VAR_0, VAR_4);
   return 1;
  }
 }

 return 0;
}
