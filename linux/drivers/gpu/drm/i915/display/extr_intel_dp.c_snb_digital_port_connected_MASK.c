
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {scalar_t__ hpd_pin; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_encoder*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_encoder *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_3->base.dev);

 if (VAR_3->hpd_pin == VAR_2)
  return FUNC_0(VAR_0) & VAR_1;
 else
  return FUNC_1(VAR_3);
}
