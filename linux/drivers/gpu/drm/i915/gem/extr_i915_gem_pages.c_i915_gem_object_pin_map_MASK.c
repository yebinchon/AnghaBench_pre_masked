
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pages_pin_count; int lock; int * mapping; } ;
struct drm_i915_gem_object {TYPE_1__ mm; } ;
typedef enum i915_map_type { ____Placeholder_i915_map_type } i915_map_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 void* FUNC_9 (struct drm_i915_gem_object*,int) ;
 scalar_t__ FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (void*,int) ;
 void* FUNC_16 (int *,int*) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (void*) ;

void *FUNC_20(struct drm_i915_gem_object *VAR_4,
         enum i915_map_type VAR_5)
{
 enum i915_map_type VAR_6;
 bool VAR_7;
 void *VAR_8;
 int VAR_9;

 if (FUNC_18(!FUNC_8(VAR_4)))
  return FUNC_0(-VAR_2);

 VAR_9 = FUNC_13(&VAR_4->mm.lock);
 if (VAR_9)
  return FUNC_0(VAR_9);

 VAR_7 = !(VAR_5 & VAR_3);
 VAR_5 &= ~VAR_3;

 if (!FUNC_5(&VAR_4->mm.pages_pin_count)) {
  if (FUNC_18(!FUNC_6(VAR_4))) {
   FUNC_1(FUNC_7(VAR_4));

   VAR_9 = FUNC_2(VAR_4);
   if (VAR_9)
    goto err_unlock;

   FUNC_17();
  }
  FUNC_4(&VAR_4->mm.pages_pin_count);
  VAR_7 = 0;
 }
 FUNC_1(!FUNC_6(VAR_4));

 VAR_8 = FUNC_16(VAR_4->mm.mapping, &VAR_6);
 if (VAR_8 && VAR_6 != VAR_5) {
  if (VAR_7) {
   VAR_9 = -VAR_0;
   goto err_unpin;
  }

  if (FUNC_10(VAR_8))
   FUNC_19(VAR_8);
  else
   FUNC_12(FUNC_11(VAR_8));

  VAR_8 = VAR_4->mm.mapping = ((void*)0);
 }

 if (!VAR_8) {
  VAR_8 = FUNC_9(VAR_4, VAR_5);
  if (!VAR_8) {
   VAR_9 = -VAR_1;
   goto err_unpin;
  }

  VAR_4->mm.mapping = FUNC_15(VAR_8, VAR_5);
 }

out_unlock:
 FUNC_14(&VAR_4->mm.lock);
 return VAR_8;

err_unpin:
 FUNC_3(&VAR_4->mm.pages_pin_count);
err_unlock:
 VAR_8 = FUNC_0(VAR_9);
 goto out_unlock;
}
