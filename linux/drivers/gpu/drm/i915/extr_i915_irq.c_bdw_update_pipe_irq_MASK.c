
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int* de_irq_mask; int irq_lock; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_i915_private *VAR_0,
    enum pipe VAR_1,
    u32 VAR_2,
    u32 VAR_3)
{
 u32 VAR_4;

 FUNC_5(&VAR_0->irq_lock);

 FUNC_3(VAR_3 & ~VAR_2);

 if (FUNC_3(!FUNC_4(VAR_0)))
  return;

 VAR_4 = VAR_0->de_irq_mask[VAR_1];
 VAR_4 &= ~VAR_2;
 VAR_4 |= (~VAR_3 & VAR_2);

 if (VAR_4 != VAR_0->de_irq_mask[VAR_1]) {
  VAR_0->de_irq_mask[VAR_1] = VAR_4;
  FUNC_1(FUNC_0(VAR_1), VAR_0->de_irq_mask[VAR_1]);
  FUNC_2(FUNC_0(VAR_1));
 }
}
