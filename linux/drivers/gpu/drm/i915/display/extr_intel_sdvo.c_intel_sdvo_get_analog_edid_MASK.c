
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edid {int dummy; } ;
struct TYPE_2__ {int crt_ddc_pin; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct drm_connector {int dev; } ;


 struct edid* FUNC_0 (struct drm_connector*,int ) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static struct edid *
FUNC_3(struct drm_connector *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0->dev);

 return FUNC_0(VAR_0,
       FUNC_1(VAR_1,
          VAR_1->vbt.crt_ddc_pin));
}
