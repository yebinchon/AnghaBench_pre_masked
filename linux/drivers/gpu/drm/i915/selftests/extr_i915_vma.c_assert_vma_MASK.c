
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct i915_vma {scalar_t__ vm; scalar_t__ size; TYPE_1__ ggtt_view; } ;
struct i915_gem_context {scalar_t__ vm; } ;
struct TYPE_4__ {scalar_t__ size; } ;
struct drm_i915_gem_object {TYPE_2__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(struct i915_vma *VAR_1,
         struct drm_i915_gem_object *VAR_2,
         struct i915_gem_context *VAR_3)
{
 bool VAR_4 = 1;

 if (VAR_1->vm != VAR_3->vm) {
  FUNC_0("VMA created with wrong VM\n");
  VAR_4 = 0;
 }

 if (VAR_1->size != VAR_2->base.size) {
  FUNC_0("VMA created with wrong size, found %llu, expected %zu\n",
         VAR_1->size, VAR_2->base.size);
  VAR_4 = 0;
 }

 if (VAR_1->ggtt_view.type != VAR_0) {
  FUNC_0("VMA created with wrong type [%d]\n",
         VAR_1->ggtt_view.type);
  VAR_4 = 0;
 }

 return VAR_4;
}
