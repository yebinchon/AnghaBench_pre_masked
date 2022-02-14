
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pipe_wm {scalar_t__ fbc_wm_enabled; TYPE_1__* wm; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ enable; } ;


 int FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static struct intel_pipe_wm *
FUNC_1(struct drm_i915_private *VAR_0,
       struct intel_pipe_wm *VAR_1,
       struct intel_pipe_wm *VAR_2)
{
 int VAR_3, VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = 0, VAR_6 = 0;

 for (VAR_3 = 1; VAR_3 <= VAR_4; VAR_3++) {
  if (VAR_1->wm[VAR_3].enable)
   VAR_5 = VAR_3;
  if (VAR_2->wm[VAR_3].enable)
   VAR_6 = VAR_3;
 }

 if (VAR_5 == VAR_6) {
  if (VAR_2->fbc_wm_enabled && !VAR_1->fbc_wm_enabled)
   return VAR_2;
  else
   return VAR_1;
 } else if (VAR_5 > VAR_6) {
  return VAR_1;
 } else {
  return VAR_2;
 }
}
