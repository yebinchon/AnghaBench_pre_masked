
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; } ;
struct drm_i915_mocs_table {int size; int n_entries; TYPE_1__* table; } ;
struct TYPE_2__ {int l3cc_value; } ;


 int FUNC_0 (unsigned int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct drm_i915_mocs_table*,int) ;
 int FUNC_2 (struct intel_gt*,struct drm_i915_mocs_table*) ;
 int FUNC_3 (struct intel_uncore*,int ,int ) ;
 int FUNC_4 (struct drm_i915_mocs_table*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct intel_gt *VAR_1)
{
 struct intel_uncore *VAR_2 = VAR_1->uncore;
 struct drm_i915_mocs_table VAR_3;
 unsigned int VAR_4;
 u16 VAR_5;

 if (!FUNC_2(VAR_1, &VAR_3))
  return;


 VAR_5 = VAR_3.table[VAR_0].l3cc_value;

 for (VAR_4 = 0; VAR_4 < VAR_3.size / 2; VAR_4++) {
  u16 VAR_6 = FUNC_1(&VAR_3, 2 * VAR_4);
  u16 VAR_7 = FUNC_1(&VAR_3, 2 * VAR_4 + 1);

  FUNC_3(VAR_2,
       FUNC_0(VAR_4),
       FUNC_4(&VAR_3, VAR_6, VAR_7));
 }


 if (VAR_3.size & 0x01) {
  u16 VAR_8 = FUNC_1(&VAR_3, 2 * VAR_4);

  FUNC_3(VAR_2,
       FUNC_0(VAR_4),
       FUNC_4(&VAR_3, VAR_8, VAR_5));
  VAR_4++;
 }


 for (; VAR_4 < VAR_3.n_entries / 2; VAR_4++)
  FUNC_3(VAR_2,
       FUNC_0(VAR_4),
       FUNC_4(&VAR_3, VAR_5,
      VAR_5));
}
