
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dev; int probed_modes; } ;
struct TYPE_3__ {struct drm_display_mode* fixed_mode; } ;
struct TYPE_4__ {TYPE_1__ panel; } ;


 int VAR_0 ;
 struct drm_display_mode* FUNC_0 (int ,struct drm_display_mode const*) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (int *) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_5(VAR_1->dev);
 const struct drm_display_mode *VAR_3 =
  FUNC_6(VAR_1)->panel.fixed_mode;







 FUNC_2(VAR_1,
       FUNC_3(VAR_2, VAR_0));
 if (!FUNC_4(&VAR_1->probed_modes))
  return 1;

 if (VAR_3) {
  struct drm_display_mode *VAR_4;
  VAR_4 = FUNC_0(VAR_1->dev, VAR_3);
  if (VAR_4) {
   FUNC_1(VAR_1, VAR_4);
   return 1;
  }
 }

 return 0;
}
