
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {int dummy; } ;
struct intel_gt {int i915; struct intel_uncore* uncore; } ;
struct drm_i915_mocs_table {unsigned int size; unsigned int n_entries; TYPE_1__* table; } ;
struct TYPE_2__ {int control_value; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_gt*,struct drm_i915_mocs_table*) ;
 int FUNC_5 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct intel_gt *VAR_0)
{
 struct intel_uncore *VAR_1 = VAR_0->uncore;
 struct drm_i915_mocs_table VAR_2;
 unsigned int VAR_3;

 FUNC_0(!FUNC_3(VAR_0->i915));

 if (!FUNC_4(VAR_0, &VAR_2))
  return;

 if (FUNC_1(VAR_2.size > VAR_2.n_entries))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2.size; VAR_3++)
  FUNC_5(VAR_1,
       FUNC_2(VAR_3),
       VAR_2.table[VAR_3].control_value);






 for (; VAR_3 < VAR_2.n_entries; VAR_3++)
  FUNC_5(VAR_1,
       FUNC_2(VAR_3),
       VAR_2.table[0].control_value);
}
