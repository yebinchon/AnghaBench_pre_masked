
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring {int * vaddr; int emit; int pin_count; struct i915_vma* vma; } ;
struct i915_vma {int obj; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (struct i915_vma*) ;
 int FUNC_6 (struct i915_vma*) ;
 int FUNC_7 (struct i915_vma*) ;
 int FUNC_8 (struct intel_ring*,int ) ;

void FUNC_9(struct intel_ring *VAR_0)
{
 struct i915_vma *VAR_1 = VAR_0->vma;

 if (!FUNC_1(&VAR_0->pin_count))
  return;


 FUNC_8(VAR_0, VAR_0->emit);

 FUNC_7(VAR_1);
 if (FUNC_3(VAR_1))
  FUNC_6(VAR_1);
 else
  FUNC_2(VAR_1->obj);

 FUNC_0(!VAR_0->vaddr);
 VAR_0->vaddr = ((void*)0);

 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
}
