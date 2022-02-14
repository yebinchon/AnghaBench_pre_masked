
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct TYPE_2__ {int irq; int * platdev; } ;
struct drm_i915_private {TYPE_1__ lpe_audio; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int) ;
 struct irq_desc* FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*) ;

void FUNC_4(struct drm_i915_private *VAR_0)
{
 struct irq_desc *VAR_1;

 if (!FUNC_0(VAR_0))
  return;

 VAR_1 = FUNC_2(VAR_0->lpe_audio.irq);

 FUNC_3(VAR_0);

 FUNC_1(VAR_0->lpe_audio.irq);

 VAR_0->lpe_audio.irq = -1;
 VAR_0->lpe_audio.platdev = ((void*)0);
}
