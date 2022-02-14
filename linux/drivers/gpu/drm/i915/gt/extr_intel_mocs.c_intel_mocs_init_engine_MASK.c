
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {int i915; struct intel_uncore* uncore; } ;
struct intel_engine_cs {int id; struct intel_gt* gt; } ;
struct drm_i915_mocs_table {unsigned int size; unsigned int n_entries; TYPE_1__* table; } ;
struct TYPE_2__ {int control_value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (struct intel_uncore*,int ) ;
 int FUNC_2 (struct drm_i915_mocs_table*,unsigned int) ;
 int FUNC_3 (struct intel_gt*,struct drm_i915_mocs_table*) ;
 int FUNC_4 (struct intel_uncore*,int ,int ) ;
 int FUNC_5 (int ,unsigned int) ;

void FUNC_6(struct intel_engine_cs *VAR_2)
{
 struct intel_gt *VAR_3 = VAR_2->gt;
 struct intel_uncore *VAR_4 = VAR_3->uncore;
 struct drm_i915_mocs_table VAR_5;
 unsigned int VAR_6;
 u32 VAR_7;


 if (FUNC_0(VAR_3->i915))
  return;


 FUNC_1(VAR_4, VAR_0);

 if (!FUNC_3(VAR_3, &VAR_5))
  return;


 VAR_7 = VAR_5.table[VAR_1].control_value;

 for (VAR_6 = 0; VAR_6 < VAR_5.size; VAR_6++) {
  u32 VAR_8 = FUNC_2(&VAR_5, VAR_6);

  FUNC_4(VAR_4,
          FUNC_5(VAR_2->id, VAR_6),
          VAR_8);
 }


 for (; VAR_6 < VAR_5.n_entries; VAR_6++)
  FUNC_4(VAR_4,
          FUNC_5(VAR_2->id, VAR_6),
          VAR_7);
}
