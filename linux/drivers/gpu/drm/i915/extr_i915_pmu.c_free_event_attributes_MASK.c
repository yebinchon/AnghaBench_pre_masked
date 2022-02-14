
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_pmu {struct attribute** pmu_attr; struct attribute** i915_attr; } ;
struct attribute {struct attribute** name; } ;
struct TYPE_2__ {struct attribute** attrs; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct attribute**) ;

__attribute__((used)) static void FUNC_1(struct i915_pmu *VAR_1)
{
 struct attribute **VAR_2 = VAR_0.attrs;

 for (; *VAR_2; VAR_2++)
  FUNC_0((*VAR_2)->name);

 FUNC_0(VAR_0.attrs);
 FUNC_0(VAR_1->i915_attr);
 FUNC_0(VAR_1->pmu_attr);

 VAR_0.attrs = ((void*)0);
 VAR_1->i915_attr = ((void*)0);
 VAR_1->pmu_attr = ((void*)0);
}
