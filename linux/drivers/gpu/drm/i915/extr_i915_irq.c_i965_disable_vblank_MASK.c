
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int irq_lock; } ;
struct drm_crtc {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {int pipe; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct drm_crtc*) ;

void FUNC_5(struct drm_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->dev);
 enum pipe VAR_3 = FUNC_4(VAR_1)->pipe;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->irq_lock, VAR_4);
 FUNC_0(VAR_2, VAR_3,
         VAR_0);
 FUNC_2(&VAR_2->irq_lock, VAR_4);
}
