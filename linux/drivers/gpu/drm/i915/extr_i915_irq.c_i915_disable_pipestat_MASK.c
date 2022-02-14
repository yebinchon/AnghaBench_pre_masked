
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int* pipestat_irq_mask; int irq_lock; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int ,int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

void FUNC_9(struct drm_i915_private *VAR_1,
      enum pipe VAR_2, u32 VAR_3)
{
 i915_reg_t VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;

 FUNC_4(VAR_3 & ~VAR_0,
    "pipe %c: status_mask=0x%x\n",
    FUNC_8(VAR_2), VAR_3);

 FUNC_7(&VAR_1->irq_lock);
 FUNC_3(!FUNC_6(VAR_1));

 if ((VAR_1->pipestat_irq_mask[VAR_2] & VAR_3) == 0)
  return;

 VAR_1->pipestat_irq_mask[VAR_2] &= ~VAR_3;
 VAR_5 = FUNC_5(VAR_1, VAR_2);

 FUNC_0(VAR_4, VAR_5 | VAR_3);
 FUNC_2(VAR_4);
}
