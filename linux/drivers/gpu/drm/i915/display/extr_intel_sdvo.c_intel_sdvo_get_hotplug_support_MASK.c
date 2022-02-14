
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_sdvo {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int hotplug ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_3 (struct intel_sdvo*,int ,int *,int) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static u16 FUNC_5(struct intel_sdvo *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_1->base.base.dev);
 u16 VAR_3;

 if (!FUNC_0(VAR_2))
  return 0;





 if (FUNC_1(VAR_2) || FUNC_2(VAR_2))
  return 0;

 if (!FUNC_3(VAR_1, VAR_0,
     &VAR_3, sizeof(VAR_3)))
  return 0;

 return VAR_3;
}
