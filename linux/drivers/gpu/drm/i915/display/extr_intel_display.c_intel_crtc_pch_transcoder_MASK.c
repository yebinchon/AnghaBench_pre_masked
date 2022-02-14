
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 struct drm_i915_private* FUNC_1 (int ) ;

enum pipe FUNC_2(struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_1->base.dev);

 if (FUNC_0(VAR_2))
  return VAR_0;
 else
  return VAR_1->pipe;
}
