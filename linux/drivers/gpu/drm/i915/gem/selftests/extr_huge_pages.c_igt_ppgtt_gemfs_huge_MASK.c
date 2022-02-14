
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gem_context {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {scalar_t__ phys; } ;
struct TYPE_4__ {TYPE_1__ page_sizes; } ;
struct drm_i915_gem_object {TYPE_2__ mm; } ;


 int FUNC_0 (unsigned int const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;





 int FUNC_3 (struct drm_i915_gem_object*,int ) ;
 struct drm_i915_gem_object* FUNC_4 (struct drm_i915_private*,unsigned int) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct i915_gem_context*,struct drm_i915_gem_object*) ;
 int FUNC_10 (char*,unsigned int) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int FUNC_12(void *VAR_2)
{
 struct i915_gem_context *VAR_3 = VAR_2;
 struct drm_i915_private *VAR_4 = VAR_3->i915;
 struct drm_i915_gem_object *VAR_5;
 static const unsigned int VAR_6[] = {
  131,
  129,
  128,
  132,
  130,
 };
 int VAR_7;
 int VAR_8;






 if (!FUNC_8(VAR_4)) {
  FUNC_11("missing THP support, skipping\n");
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6); ++VAR_7) {
  unsigned int VAR_9 = VAR_6[VAR_7];

  VAR_5 = FUNC_4(VAR_4, VAR_9);
  if (FUNC_1(VAR_5))
   return FUNC_2(VAR_5);

  VAR_8 = FUNC_5(VAR_5);
  if (VAR_8)
   goto out_put;

  if (VAR_5->mm.page_sizes.phys < VAR_0) {
   FUNC_11("finishing test early, gemfs unable to allocate huge-page(s) with size=%u\n",
    VAR_9);
   goto out_unpin;
  }

  VAR_8 = FUNC_9(VAR_3, VAR_5);
  if (VAR_8) {
   FUNC_10("gemfs write-huge failed with size=%u\n",
          VAR_9);
   goto out_unpin;
  }

  FUNC_7(VAR_5);
  FUNC_3(VAR_5, VAR_1);
  FUNC_6(VAR_5);
 }

 return 0;

out_unpin:
 FUNC_7(VAR_5);
out_put:
 FUNC_6(VAR_5);

 return VAR_8;
}
