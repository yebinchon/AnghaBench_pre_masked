
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vma; } ;
struct intel_engine_cs {int i915; TYPE_1__ status_page; } ;
struct i915_vma {int obj; } ;


 int FUNC_0 (int ) ;
 struct i915_vma* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (struct intel_engine_cs*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct intel_engine_cs *VAR_0)
{
 struct i915_vma *VAR_1;


 FUNC_5(VAR_0, ~0u);

 VAR_1 = FUNC_1(&VAR_0->status_page.vma);
 if (!VAR_1)
  return;

 if (!FUNC_0(VAR_0->i915))
  FUNC_4(VAR_1);

 FUNC_3(VAR_1->obj);
 FUNC_2(VAR_1->obj);
}
