
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int mocs_mmio_offset_list_cnt; int* mocs_mmio_offset_list; } ;
struct intel_gvt {TYPE_1__ engine_mmio_list; } ;
struct drm_i915_private {struct intel_gvt* gvt; } ;
struct TYPE_6__ {int reg; } ;
typedef TYPE_2__ i915_reg_t ;
struct TYPE_7__ {int initialized; void** l3cc_table; void*** control_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int) ;
 void* FUNC_1 (TYPE_2__) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2)
{
 struct intel_gvt *VAR_3 = VAR_2->gvt;
 i915_reg_t VAR_4;
 u32 VAR_5 = VAR_3->engine_mmio_list.mocs_mmio_offset_list_cnt;
 u32 *VAR_6 = VAR_3->engine_mmio_list.mocs_mmio_offset_list;
 int VAR_7, VAR_8;


 if (!VAR_6)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (!FUNC_0(VAR_2, VAR_7))
   continue;
  VAR_4.reg = VAR_6[VAR_7];
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_1.control_table[VAR_7][VAR_8] =
    FUNC_1(VAR_4);
   VAR_4.reg += 4;
  }
 }

 VAR_4.reg = 0xb020;
 for (VAR_8 = 0; VAR_8 < VAR_0 / 2; VAR_8++) {
  VAR_1.l3cc_table[VAR_8] =
   FUNC_1(VAR_4);
  VAR_4.reg += 4;
 }
 VAR_1.initialized = 1;
}
