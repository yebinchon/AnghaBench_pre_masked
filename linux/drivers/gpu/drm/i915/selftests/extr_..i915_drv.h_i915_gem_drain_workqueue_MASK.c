
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void FUNC_4(struct drm_i915_private *VAR_0)
{
 int VAR_1 = 3;
 do {
  FUNC_1(VAR_0->wq);
  FUNC_3();
  FUNC_2(VAR_0);
 } while (--VAR_1);
 FUNC_0(VAR_0->wq);
}
