
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int irq_lock; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*,int ,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3)
{
 if (!FUNC_2(VAR_3))
  return;

 FUNC_3(&VAR_3->irq_lock);

 FUNC_1(VAR_3, VAR_1, VAR_2);
 if (FUNC_0(VAR_3) >= 4)
  FUNC_1(VAR_3, VAR_0,
         VAR_2);

 FUNC_4(&VAR_3->irq_lock);
}
