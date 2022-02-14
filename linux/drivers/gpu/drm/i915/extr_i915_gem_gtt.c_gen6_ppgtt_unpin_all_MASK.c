
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ppgtt {int dummy; } ;
struct gen6_ppgtt {int vma; scalar_t__ pin_count; } ;


 int FUNC_0 (int ) ;
 struct gen6_ppgtt* FUNC_1 (struct i915_ppgtt*) ;

void FUNC_2(struct i915_ppgtt *VAR_0)
{
 struct gen6_ppgtt *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->pin_count)
  return;

 VAR_1->pin_count = 0;
 FUNC_0(VAR_1->vma);
}
