
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_plane {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct intel_plane *VAR_2,
         enum pipe *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_2->base.dev);
 enum intel_display_power_domain VAR_5;
 intel_wakeref_t VAR_6;
 bool VAR_7;

 VAR_5 = FUNC_2(VAR_1);
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_1(FUNC_0(VAR_1)) & VAR_0;

 *VAR_3 = VAR_1;

 FUNC_4(VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
