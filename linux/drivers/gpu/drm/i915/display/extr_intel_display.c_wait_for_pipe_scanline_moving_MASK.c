
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct intel_crtc *VAR_0, bool VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_0->base.dev);
 enum pipe VAR_3 = VAR_0->pipe;


 if (FUNC_5(FUNC_3(VAR_2, VAR_3) == VAR_1, 100))
  FUNC_0("pipe %c scanline %s wait timed out\n",
     FUNC_2(VAR_3), FUNC_1(VAR_1));
}
