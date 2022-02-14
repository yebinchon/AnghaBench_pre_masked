
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct i915_gem_context {TYPE_1__* vm; } ;
struct drm_mm_node {scalar_t__ start; scalar_t__ size; } ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct drm_mm_node* FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct i915_gem_context *VAR_1, u64 VAR_2)
{
 struct drm_mm_node *VAR_3 =
  FUNC_1(&VAR_1->vm->mm,
     VAR_2, VAR_2 + sizeof(u32) - 1);
 if (!VAR_3 || VAR_3->start > VAR_2)
  return 0;

 FUNC_0(VAR_2 >= VAR_3->start + VAR_3->size);

 FUNC_3("Target offset 0x%08x_%08x overlaps with a node in the mm!\n",
        FUNC_4(VAR_2), FUNC_2(VAR_2));
 return -VAR_0;
}
