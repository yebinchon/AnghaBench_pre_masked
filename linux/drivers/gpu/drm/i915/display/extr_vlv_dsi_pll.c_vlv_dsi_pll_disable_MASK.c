
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_i915_private* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ,int ) ;

void FUNC_6(struct intel_encoder *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_1(VAR_3->base.dev);
 u32 VAR_5;

 FUNC_0("\n");

 FUNC_2(VAR_4);

 VAR_5 = FUNC_4(VAR_4, VAR_0);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_1;
 FUNC_5(VAR_4, VAR_0, VAR_5);

 FUNC_3(VAR_4);
}
