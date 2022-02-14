
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_5(VAR_0->base.dev);
 enum pipe VAR_2 = VAR_0->pipe;


 FUNC_0(FUNC_4(VAR_2, 0), 1 << 16);
 FUNC_0(FUNC_4(VAR_2, 1), 1 << 16);
 FUNC_0(FUNC_4(VAR_2, 2), 1 << 16);






 if (FUNC_1(VAR_1) >= 10 || FUNC_2(VAR_1)) {
  FUNC_0(FUNC_3(VAR_2, 0), 1 << 16);
  FUNC_0(FUNC_3(VAR_2, 1), 1 << 16);
  FUNC_0(FUNC_3(VAR_2, 2), 1 << 16);
 }
}
