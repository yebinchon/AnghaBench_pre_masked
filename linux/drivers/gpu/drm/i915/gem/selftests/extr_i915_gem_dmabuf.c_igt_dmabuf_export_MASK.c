
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int base; } ;
struct dma_buf {int base; } ;


 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1;
 struct drm_i915_gem_object *VAR_3;
 struct dma_buf *VAR_4;

 VAR_3 = FUNC_3(VAR_2, VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_5(&VAR_3->base, 0);
 FUNC_4(VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_6("i915_gem_prime_export failed with err=%d\n",
         (int)FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 FUNC_2(VAR_4);
 return 0;
}
