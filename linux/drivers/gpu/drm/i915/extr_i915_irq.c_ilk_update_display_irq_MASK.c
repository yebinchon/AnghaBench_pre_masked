
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int irq_mask; int irq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_i915_private *VAR_1,
       u32 VAR_2,
       u32 VAR_3)
{
 u32 VAR_4;

 FUNC_4(&VAR_1->irq_lock);

 FUNC_2(VAR_3 & ~VAR_2);

 if (FUNC_2(!FUNC_3(VAR_1)))
  return;

 VAR_4 = VAR_1->irq_mask;
 VAR_4 &= ~VAR_2;
 VAR_4 |= (~VAR_3 & VAR_2);

 if (VAR_4 != VAR_1->irq_mask) {
  VAR_1->irq_mask = VAR_4;
  FUNC_0(VAR_0, VAR_1->irq_mask);
  FUNC_1(VAR_0);
 }
}
