
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reserved; } ;
struct i915_ggtt {TYPE_1__ vm; } ;
struct drm_mm_node {int size; scalar_t__ start; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct drm_mm_node*) ;
 int FUNC_2 (struct drm_mm_node*) ;

__attribute__((used)) static void FUNC_3(struct i915_ggtt *VAR_0,
    struct drm_mm_node *VAR_1)
{
 if (!FUNC_1(VAR_1))
  return;

 FUNC_0("deballoon space: range [0x%llx - 0x%llx] %llu KiB.\n",
    VAR_1->start,
    VAR_1->start + VAR_1->size,
    VAR_1->size / 1024);

 VAR_0->vm.reserved -= VAR_1->size;
 FUNC_2(VAR_1);
}
