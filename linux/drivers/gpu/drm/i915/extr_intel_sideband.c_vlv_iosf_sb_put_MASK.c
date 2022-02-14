
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int sb_lock; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_1, unsigned long VAR_2)
{
 FUNC_2(&VAR_1->sb_lock);

 if (VAR_2 & FUNC_0(VAR_0))
  FUNC_1(VAR_1);
}
