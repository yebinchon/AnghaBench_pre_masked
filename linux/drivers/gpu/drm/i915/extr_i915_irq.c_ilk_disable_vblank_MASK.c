
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int irq_lock; } ;
struct drm_crtc {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {int pipe; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (struct drm_crtc*) ;

void FUNC_8(struct drm_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_6(VAR_0->dev);
 enum pipe VAR_2 = FUNC_7(VAR_0)->pipe;
 unsigned long VAR_3;
 u32 VAR_4 = FUNC_2(VAR_1) >= 7 ?
  FUNC_1(VAR_2) : FUNC_0(VAR_2);

 FUNC_4(&VAR_1->irq_lock, VAR_3);
 FUNC_3(VAR_1, VAR_4);
 FUNC_5(&VAR_1->irq_lock, VAR_3);
}
