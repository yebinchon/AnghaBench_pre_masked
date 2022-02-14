
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ total; } ;
struct TYPE_5__ {TYPE_1__ vm; } ;
struct drm_i915_private {TYPE_2__ ggtt; } ;
struct TYPE_6__ {unsigned int const size; } ;
struct drm_i915_gem_object {TYPE_3__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 unsigned int const VAR_1 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_2 (struct drm_i915_private*,unsigned int const,scalar_t__) ;
 scalar_t__ FUNC_3 (struct drm_i915_gem_object*,unsigned int) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (char*,unsigned int const,unsigned int const,...) ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 const unsigned int VAR_3 = 509;
 struct drm_i915_private *VAR_4 = VAR_2;
 struct drm_i915_gem_object *VAR_5;
 unsigned int VAR_6;
 int VAR_7;



 VAR_5 = FUNC_2(VAR_4,
         VAR_3 * VAR_1,
         VAR_4->ggtt.vm.total + VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7) {
  FUNC_7("Failed to allocate %u pages (%lu total), err=%d\n",
         VAR_3, VAR_5->base.size / VAR_1, VAR_7);
  goto out;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->base.size / VAR_1; VAR_6++) {
  if (FUNC_3(VAR_5, VAR_6) !=
      FUNC_3(VAR_5, VAR_6 % VAR_3)) {
   FUNC_7("Page lookup mismatch at index %u [%u]\n",
          VAR_6, VAR_6 % VAR_3);
   VAR_7 = -VAR_0;
   goto out_unpin;
  }
 }

out_unpin:
 FUNC_6(VAR_5);
out:
 FUNC_5(VAR_5);
 return VAR_7;
}
