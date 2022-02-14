
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int irq_lock; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 int FUNC_8 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_9(struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_7(VAR_1->base.dev);
 enum pipe VAR_3 = VAR_1->pipe;
 u32 VAR_4 = FUNC_1(VAR_0);

 FUNC_5(&VAR_2->irq_lock);

 if ((VAR_4 & FUNC_4(VAR_3)) == 0)
  return;

 FUNC_2(VAR_0, FUNC_4(VAR_3));
 FUNC_3(VAR_0);

 FUNC_8(VAR_2, VAR_3);
 FUNC_0("pch fifo underrun on pch transcoder %c\n",
    FUNC_6(VAR_3));
}
