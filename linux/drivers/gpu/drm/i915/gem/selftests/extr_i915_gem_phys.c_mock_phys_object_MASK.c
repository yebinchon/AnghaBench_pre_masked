
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct TYPE_4__ {int pages_pin_count; } ;
struct drm_i915_gem_object {TYPE_2__ mm; int * ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_gem_object*,int ) ;
 struct drm_i915_gem_object* FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*,int) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int FUNC_12(void *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3;
 struct drm_i915_gem_object *VAR_5;
 int VAR_6;





 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_11("i915_gem_object_create failed, err=%d\n", VAR_6);
  goto out;
 }

 FUNC_9(&VAR_4->drm.struct_mutex);
 VAR_6 = FUNC_3(VAR_5, VAR_1);
 FUNC_10(&VAR_4->drm.struct_mutex);
 if (VAR_6) {
  FUNC_11("i915_gem_object_attach_phys failed, err=%d\n", VAR_6);
  goto out_obj;
 }

 if (VAR_5->ops != &VAR_2) {
  FUNC_11("i915_gem_object_attach_phys did not create a phys object\n");
  VAR_6 = -VAR_0;
  goto out_obj;
 }

 if (!FUNC_2(&VAR_5->mm.pages_pin_count)) {
  FUNC_11("i915_gem_object_attach_phys did not pin its phys pages\n");
  VAR_6 = -VAR_0;
  goto out_obj;
 }


 FUNC_5(VAR_5);
 VAR_6 = FUNC_7(VAR_5, 1);
 FUNC_8(VAR_5);
 if (VAR_6) {
  FUNC_11("i915_gem_object_set_to_gtt_domain failed with err=%d\n",
         VAR_6);
  goto out_obj;
 }

out_obj:
 FUNC_6(VAR_5);
out:
 return VAR_6;
}
