
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int vma_node; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (int *) ;
 struct drm_i915_gem_object* FUNC_2 (struct drm_file*,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;

int
FUNC_5(struct drm_file *VAR_2,
    struct drm_device *VAR_3,
    u32 VAR_4,
    u64 *VAR_5)
{
 struct drm_i915_gem_object *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_6)
  return -VAR_1;

 if (FUNC_3(VAR_6)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 == 0)
  *VAR_5 = FUNC_1(&VAR_6->base.vma_node);

out:
 FUNC_4(VAR_6);
 return VAR_7;
}
