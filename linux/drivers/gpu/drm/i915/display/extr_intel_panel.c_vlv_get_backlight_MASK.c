
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct intel_connector*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct intel_connector *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0->base.dev);
 enum pipe VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_2);
}
