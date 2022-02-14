
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_submission {void** i915_context_pdps; void* i915_context_pml4; } ;
struct i915_ppgtt {struct i915_page_directory* const pd; int vm; } ;
struct i915_page_directory {int dummy; } ;


 int VAR_0 ;
 struct i915_page_directory* FUNC_0 (struct i915_page_directory* const,int) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (struct i915_page_directory* const) ;

__attribute__((used)) static void
FUNC_3(struct intel_vgpu_submission *VAR_1,
        struct i915_ppgtt *VAR_2)
{
 int VAR_3;

 if (FUNC_1(&VAR_2->vm)) {
  VAR_1->i915_context_pml4 = FUNC_2(VAR_2->pd);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   struct i915_page_directory * const VAR_4 =
    FUNC_0(VAR_2->pd, VAR_3);

   VAR_1->i915_context_pdps[VAR_3] = FUNC_2(VAR_4);
  }
 }
}
