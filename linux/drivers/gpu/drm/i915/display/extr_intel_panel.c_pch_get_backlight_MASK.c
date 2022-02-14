
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct intel_connector *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_1(VAR_2->base.dev);

 return FUNC_0(VAR_1) & VAR_0;
}
