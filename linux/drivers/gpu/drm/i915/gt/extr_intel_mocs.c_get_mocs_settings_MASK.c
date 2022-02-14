
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_mocs_table {int size; TYPE_1__* table; void* n_entries; } ;
struct TYPE_2__ {int l3cc_value; } ;


 void* FUNC_0 (void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,char*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static bool FUNC_10(struct intel_gt *VAR_6,
         struct drm_i915_mocs_table *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_6->i915;
 bool VAR_9 = 0;

 if (FUNC_1(VAR_8) >= 12) {
  VAR_7->size = FUNC_0(VAR_5);
  VAR_7->table = VAR_5;
  VAR_7->n_entries = VAR_0;
  VAR_9 = 1;
 } else if (FUNC_3(VAR_8, 11)) {
  VAR_7->size = FUNC_0(VAR_3);
  VAR_7->table = VAR_3;
  VAR_7->n_entries = VAR_0;
  VAR_9 = 1;
 } else if (FUNC_4(VAR_8) || FUNC_2(VAR_8)) {
  VAR_7->size = FUNC_0(VAR_4);
  VAR_7->n_entries = VAR_1;
  VAR_7->table = VAR_4;
  VAR_9 = 1;
 } else if (FUNC_5(VAR_8)) {
  VAR_7->size = FUNC_0(VAR_2);
  VAR_7->n_entries = VAR_1;
  VAR_7->table = VAR_2;
  VAR_9 = 1;
 } else {
  FUNC_9(FUNC_1(VAR_8) >= 9,
     "Platform that should have a MOCS table does not.\n");
 }


 if (FUNC_3(VAR_8, 9)) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_7->size; VAR_10++)
   if (FUNC_8(VAR_7->table[VAR_10].l3cc_value &
        (FUNC_6(1) | FUNC_7(0x7))))
    return 0;
 }

 return VAR_9;
}
