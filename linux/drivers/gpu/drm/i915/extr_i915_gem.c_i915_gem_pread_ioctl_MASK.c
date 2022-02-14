
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_gem_pread {scalar_t__ size; int offset; int handle; int data_ptr; } ;
struct TYPE_2__ {int size; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct drm_i915_gem_object*,struct drm_i915_gem_pread*) ;
 struct drm_i915_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*,int ,int ) ;
 int FUNC_7 (struct drm_i915_gem_object*,struct drm_i915_gem_pread*) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 (struct drm_i915_gem_object*,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;

int
FUNC_11(struct drm_device *VAR_7, void *VAR_8,
       struct drm_file *VAR_9)
{
 struct drm_i915_gem_pread *VAR_10 = VAR_8;
 struct drm_i915_gem_object *VAR_11;
 int VAR_12;

 if (VAR_10->size == 0)
  return 0;

 if (!FUNC_0(FUNC_10(VAR_10->data_ptr),
         VAR_10->size))
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_9, VAR_10->handle);
 if (!VAR_11)
  return -VAR_3;


 if (FUNC_8(VAR_6, VAR_10->offset, VAR_10->size, VAR_11->base.size)) {
  VAR_12 = -VAR_1;
  goto out;
 }

 FUNC_9(VAR_11, VAR_10->offset, VAR_10->size);

 VAR_12 = FUNC_6(VAR_11,
       VAR_4,
       VAR_5);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_7(VAR_11, VAR_10);
 if (VAR_12 == -VAR_0 || VAR_12 == -VAR_2)
  VAR_12 = FUNC_1(VAR_11, VAR_10);

 FUNC_5(VAR_11);
out:
 FUNC_4(VAR_11);
 return VAR_12;
}
