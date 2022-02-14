
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int dummy; } ;
struct dma_buf {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_0 (struct dma_buf*) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*,int) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;

__attribute__((used)) static int FUNC_6(struct dma_buf *VAR_2, enum dma_data_direction VAR_3)
{
 struct drm_i915_gem_object *VAR_4 = FUNC_0(VAR_2);
 bool VAR_5 = (VAR_3 == VAR_0 || VAR_3 == VAR_1);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 FUNC_4(VAR_4);

out:
 FUNC_5(VAR_4);
 return VAR_6;
}
