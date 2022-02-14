
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bit_6_swizzle_x; scalar_t__ bit_6_swizzle_y; } ;
struct drm_i915_private {int quirks; TYPE_1__ mm; } ;
struct drm_i915_gem_object {int tiling_and_stride; } ;
struct drm_i915_gem_get_tiling {int tiling_mode; scalar_t__ swizzle_mode; scalar_t__ phys_swizzle_mode; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 struct drm_i915_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(struct drm_device *VAR_9, void *VAR_10,
     struct drm_file *VAR_11)
{
 struct drm_i915_gem_get_tiling *VAR_12 = VAR_10;
 struct drm_i915_private *VAR_13 = FUNC_4(VAR_9);
 struct drm_i915_gem_object *VAR_14;
 int VAR_15 = -VAR_0;

 FUNC_2();
 VAR_14 = FUNC_1(VAR_11, VAR_12->handle);
 if (VAR_14) {
  VAR_12->tiling_mode =
   FUNC_0(VAR_14->tiling_and_stride) & VAR_8;
  VAR_15 = 0;
 }
 FUNC_3();
 if (FUNC_5(VAR_15))
  return VAR_15;

 switch (VAR_12->tiling_mode) {
 case 129:
  VAR_12->swizzle_mode = VAR_13->mm.bit_6_swizzle_x;
  break;
 case 128:
  VAR_12->swizzle_mode = VAR_13->mm.bit_6_swizzle_y;
  break;
 default:
 case 130:
  VAR_12->swizzle_mode = VAR_5;
  break;
 }


 if (VAR_13->quirks & VAR_7)
  VAR_12->phys_swizzle_mode = VAR_6;
 else
  VAR_12->phys_swizzle_mode = VAR_12->swizzle_mode;
 if (VAR_12->swizzle_mode == VAR_4)
  VAR_12->swizzle_mode = VAR_1;
 if (VAR_12->swizzle_mode == VAR_3)
  VAR_12->swizzle_mode = VAR_2;

 return 0;
}
