
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_gem_set_tiling {scalar_t__ tiling_mode; scalar_t__ swizzle_mode; scalar_t__ stride; int handle; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;
struct TYPE_3__ {scalar_t__ bit_6_swizzle_x; scalar_t__ bit_6_swizzle_y; } ;
struct TYPE_4__ {TYPE_1__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_1 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_2 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct drm_i915_gem_object*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (struct drm_device*) ;

int
FUNC_10(struct drm_device *VAR_11, void *VAR_12,
     struct drm_file *VAR_13)
{
 struct drm_i915_gem_set_tiling *VAR_14 = VAR_12;
 struct drm_i915_gem_object *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_13, VAR_14->handle);
 if (!VAR_15)
  return -VAR_1;





 if (FUNC_2(VAR_15)) {
  VAR_16 = -VAR_2;
  goto err;
 }

 if (!FUNC_6(VAR_15, VAR_14->tiling_mode, VAR_14->stride)) {
  VAR_16 = -VAR_0;
  goto err;
 }

 if (VAR_14->tiling_mode == VAR_9) {
  VAR_14->swizzle_mode = VAR_7;
  VAR_14->stride = 0;
 } else {
  if (VAR_14->tiling_mode == VAR_10)
   VAR_14->swizzle_mode = FUNC_9(VAR_11)->mm.bit_6_swizzle_x;
  else
   VAR_14->swizzle_mode = FUNC_9(VAR_11)->mm.bit_6_swizzle_y;
  if (VAR_14->swizzle_mode == VAR_6)
   VAR_14->swizzle_mode = VAR_3;
  if (VAR_14->swizzle_mode == VAR_5)
   VAR_14->swizzle_mode = VAR_4;


  if (VAR_14->swizzle_mode == VAR_8) {
   VAR_14->tiling_mode = VAR_9;
   VAR_14->swizzle_mode = VAR_7;
   VAR_14->stride = 0;
  }
 }

 VAR_16 = FUNC_7(&VAR_11->struct_mutex);
 if (VAR_16)
  goto err;

 VAR_16 = FUNC_5(VAR_15, VAR_14->tiling_mode, VAR_14->stride);
 FUNC_8(&VAR_11->struct_mutex);


 VAR_14->stride = FUNC_0(VAR_15);
 VAR_14->tiling_mode = FUNC_1(VAR_15);

err:
 FUNC_4(VAR_15);
 return VAR_16;
}
