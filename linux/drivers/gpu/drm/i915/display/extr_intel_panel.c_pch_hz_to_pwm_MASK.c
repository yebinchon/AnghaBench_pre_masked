
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_i915_private {int rawclk_freq; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct intel_connector *VAR_0, u32 VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_0->base.dev);

 return FUNC_0(FUNC_1(VAR_2->rawclk_freq), VAR_1 * 128);
}
