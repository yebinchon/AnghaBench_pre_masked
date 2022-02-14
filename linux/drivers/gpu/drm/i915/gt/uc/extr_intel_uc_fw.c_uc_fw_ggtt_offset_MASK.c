
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uc_fw {int dummy; } ;
struct drm_mm_node {scalar_t__ start; scalar_t__ size; int allocated; } ;
struct i915_ggtt {struct drm_mm_node uc_fw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct intel_uc_fw *VAR_0, struct i915_ggtt *VAR_1)
{
 struct drm_mm_node *VAR_2 = &VAR_1->uc_fw;

 FUNC_0(!VAR_2->allocated);
 FUNC_0(FUNC_2(VAR_2->start));
 FUNC_0(FUNC_2(VAR_2->start + VAR_2->size - 1));

 return FUNC_1(VAR_2->start);
}
