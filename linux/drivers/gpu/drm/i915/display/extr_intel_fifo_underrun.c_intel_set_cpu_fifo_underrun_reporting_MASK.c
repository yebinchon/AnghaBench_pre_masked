
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int irq_lock; int drm; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

bool FUNC_3(struct drm_i915_private *VAR_0,
        enum pipe VAR_1, bool VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;

 FUNC_1(&VAR_0->irq_lock, VAR_3);
 VAR_4 = FUNC_0(&VAR_0->drm, VAR_1,
            VAR_2);
 FUNC_2(&VAR_0->irq_lock, VAR_3);

 return VAR_4;
}
