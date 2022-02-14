
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct intel_gt {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int ) ;

__attribute__((used)) static u64 FUNC_4(struct intel_gt *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->i915;
 u64 VAR_6;

 VAR_6 = FUNC_3(VAR_5,
         FUNC_2(VAR_5) ?
         VAR_3 :
         VAR_0);

 if (FUNC_0(VAR_5))
  VAR_6 += FUNC_3(VAR_5, VAR_1);

 if (FUNC_1(VAR_5))
  VAR_6 += FUNC_3(VAR_5, VAR_2);

 return VAR_6;
}
