
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int dummy; } ;
struct dma_buf {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 struct drm_i915_gem_object* FUNC_0 (struct dma_buf*) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*,int) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;

__attribute__((used)) static int FUNC_6(struct dma_buf *VAR_0, enum dma_data_direction VAR_1)
{
 struct drm_i915_gem_object *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_3(VAR_2, 0);
 FUNC_4(VAR_2);

out:
 FUNC_5(VAR_2);
 return VAR_3;
}
