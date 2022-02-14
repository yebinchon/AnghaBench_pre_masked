
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int* pipestat_irq_mask; int irq_lock; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,char*,int ,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

u32 FUNC_5(struct drm_i915_private *VAR_9,
         enum pipe VAR_10)
{
 u32 VAR_11 = VAR_9->pipestat_irq_mask[VAR_10];
 u32 VAR_12 = VAR_11 << 16;

 FUNC_3(&VAR_9->irq_lock);

 if (FUNC_0(VAR_9) < 5)
  goto out;





 if (FUNC_2(VAR_11 & VAR_2))
  return 0;




 if (FUNC_2(VAR_11 & VAR_3))
  return 0;

 VAR_12 &= ~(VAR_4 |
    VAR_5 |
    VAR_7);
 if (VAR_11 & VAR_6)
  VAR_12 |= VAR_5;
 if (VAR_11 & VAR_8)
  VAR_12 |= VAR_7;

out:
 FUNC_1(VAR_12 & ~VAR_0 ||
    VAR_11 & ~VAR_1,
    "pipe %c: enable_mask=0x%x, status_mask=0x%x\n",
    FUNC_4(VAR_10), VAR_12, VAR_11);

 return VAR_12;
}
