
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_6(VAR_0->base.dev);
 enum pipe VAR_2 = VAR_0->pipe;
 u32 VAR_3;

 VAR_3 = FUNC_2(2);

 if (FUNC_1(VAR_1) >= 12) {
  VAR_3 |= FUNC_3(2);
  VAR_3 |= FUNC_4(12);
 } else {
  VAR_3 |= FUNC_3(1);
  VAR_3 |= FUNC_4(8);
 }

 FUNC_0(FUNC_5(VAR_2), VAR_3);
}
