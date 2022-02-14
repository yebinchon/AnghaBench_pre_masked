
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int drm; } ;
struct drm_i915_gem_object {int dummy; } ;
typedef struct drm_i915_gem_object dma_buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 void* FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*,void*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (int *,struct drm_i915_gem_object*) ;
 int FUNC_9 (void*,int,int ) ;
 struct drm_i915_gem_object* FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;
 struct drm_i915_gem_object* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(void *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2;
 struct drm_i915_gem_object *VAR_4;
 struct dma_buf *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_10(1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6) {
  FUNC_11("dma_buf_vmap failed\n");
  VAR_7 = -VAR_0;
  goto err_dmabuf;
 }

 FUNC_9(VAR_6, 0xc5, VAR_1);
 FUNC_4(VAR_5, VAR_6);

 VAR_4 = FUNC_12(FUNC_8(&VAR_3->drm, VAR_5));
 if (FUNC_0(VAR_4)) {
  FUNC_11("i915_gem_prime_import failed with err=%d\n",
         (int)FUNC_1(VAR_4));
  VAR_7 = FUNC_1(VAR_4);
  goto err_dmabuf;
 }

 FUNC_2(VAR_5);

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7) {
  FUNC_11("i915_gem_object_pin_pages failed with err=%d\n", VAR_7);
  goto out_obj;
 }

 VAR_7 = 0;
 FUNC_7(VAR_4);
out_obj:
 FUNC_6(VAR_4);
 return VAR_7;

err_dmabuf:
 FUNC_2(VAR_5);
 return VAR_7;
}
