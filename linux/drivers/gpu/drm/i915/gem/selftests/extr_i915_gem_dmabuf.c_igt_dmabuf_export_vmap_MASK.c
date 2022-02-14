
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int size; int base; } ;
struct dma_buf {int size; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 void* FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*,void*) ;
 struct drm_i915_gem_object* FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (void*,int ,int ) ;
 int FUNC_9 (void*,int,int ) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int FUNC_11(void *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3;
 struct drm_i915_gem_object *VAR_5;
 struct dma_buf *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_5(VAR_4, VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_7(&VAR_5->base, 0);
 if (FUNC_0(VAR_6)) {
  FUNC_10("i915_gem_prime_export failed with err=%d\n",
         (int)FUNC_1(VAR_6));
  VAR_8 = FUNC_1(VAR_6);
  goto err_obj;
 }
 FUNC_6(VAR_5);

 VAR_7 = FUNC_3(VAR_6);
 if (!VAR_7) {
  FUNC_10("dma_buf_vmap failed\n");
  VAR_8 = -VAR_1;
  goto out;
 }

 if (FUNC_8(VAR_7, 0, VAR_6->size)) {
  FUNC_10("Exported object not initialiased to zero!\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 FUNC_9(VAR_7, 0xc5, VAR_6->size);

 VAR_8 = 0;
 FUNC_4(VAR_6, VAR_7);
out:
 FUNC_2(VAR_6);
 return VAR_8;

err_obj:
 FUNC_6(VAR_5);
 return VAR_8;
}
