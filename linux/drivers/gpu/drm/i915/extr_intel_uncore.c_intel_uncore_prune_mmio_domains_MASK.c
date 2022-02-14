
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int fw_domains; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;
typedef enum forcewake_domain_id { ____Placeholder_forcewake_domain_id } forcewake_domain_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct intel_uncore*,int) ;
 int FUNC_6 (struct intel_uncore*) ;

void FUNC_7(struct intel_uncore *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->i915;
 enum forcewake_domains VAR_6 = VAR_4->fw_domains;
 enum forcewake_domain_id VAR_7;
 int VAR_8;

 if (!FUNC_6(VAR_4) || FUNC_2(VAR_5) < 11)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_7 = VAR_0 + VAR_8;

  if (FUNC_1(VAR_5, FUNC_3(VAR_8)))
   continue;

  if (VAR_6 & FUNC_0(VAR_7))
   FUNC_5(VAR_4, VAR_7);
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = VAR_1 + VAR_8;

  if (FUNC_1(VAR_5, FUNC_4(VAR_8)))
   continue;

  if (VAR_6 & FUNC_0(VAR_7))
   FUNC_5(VAR_4, VAR_7);
 }
}
