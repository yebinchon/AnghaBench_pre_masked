
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_guc {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 TYPE_1__* FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (struct intel_guc*,int*,int ) ;

int FUNC_5(struct intel_guc *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3)->i915;
 u32 VAR_5[2];

 VAR_5[0] = VAR_2;

 if (!FUNC_1(VAR_4) || FUNC_2(VAR_4))
  VAR_5[1] = 0;
 else

  VAR_5[1] = VAR_1 | VAR_0;

 return FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_5));
}
