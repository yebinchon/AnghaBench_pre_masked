
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
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (struct drm_crtc*) ;

int FUNC_10(struct drm_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_8(VAR_0->dev);
 enum pipe VAR_2 = FUNC_9(VAR_0)->pipe;
 unsigned long VAR_3;
 u32 VAR_4 = FUNC_3(VAR_1) >= 7 ?
  FUNC_1(VAR_2) : FUNC_0(VAR_2);

 FUNC_6(&VAR_1->irq_lock, VAR_3);
 FUNC_5(VAR_1, VAR_4);
 FUNC_7(&VAR_1->irq_lock, VAR_3);




 if (FUNC_2(VAR_1))
  FUNC_4(VAR_0);

 return 0;
}
