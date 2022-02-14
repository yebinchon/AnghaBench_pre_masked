
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct drm_i915_private {TYPE_1__ lpe_audio; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 int VAR_1;

 if (!FUNC_1(VAR_0))
  return;

 VAR_1 = FUNC_2(VAR_0->lpe_audio.irq);
 if (VAR_1)
  FUNC_0("error handling LPE audio irq: %d\n",
    VAR_1);
}
