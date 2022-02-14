
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int irq_lock; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 int FUNC_9 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_10(struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_8(VAR_1->base.dev);
 i915_reg_t VAR_3 = FUNC_3(VAR_1->pipe);
 u32 VAR_4;

 FUNC_6(&VAR_2->irq_lock);

 if ((FUNC_1(VAR_3) & VAR_0) == 0)
  return;

 VAR_4 = FUNC_5(VAR_2, VAR_1->pipe);
 FUNC_2(VAR_3, VAR_4 | VAR_0);
 FUNC_4(VAR_3);

 FUNC_9(VAR_2, VAR_1->pipe);
 FUNC_0("pipe %c underrun\n", FUNC_7(VAR_1->pipe));
}
