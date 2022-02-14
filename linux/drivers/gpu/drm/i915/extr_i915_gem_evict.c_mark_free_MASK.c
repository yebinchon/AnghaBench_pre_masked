
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct i915_vma {int node; int evict_link; } ;
struct drm_mm_scan {int dummy; } ;


 int FUNC_0 (struct drm_mm_scan*,int *) ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static bool
FUNC_3(struct drm_mm_scan *VAR_0,
   struct i915_vma *VAR_1,
   unsigned int VAR_2,
   struct list_head *VAR_3)
{
 if (FUNC_1(VAR_1))
  return 0;

 FUNC_2(&VAR_1->evict_link, VAR_3);
 return FUNC_0(VAR_0, &VAR_1->node);
}
