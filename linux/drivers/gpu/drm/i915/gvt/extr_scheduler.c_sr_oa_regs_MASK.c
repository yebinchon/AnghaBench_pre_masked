
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu_workload {scalar_t__ ring_id; int oactxctrl; int* flex_mmio; TYPE_2__* vgpu; } ;
struct TYPE_6__ {int ctx_oactxctrl_offset; int ctx_flexeu0_offset; } ;
struct drm_i915_private {TYPE_3__ perf; } ;
struct TYPE_5__ {TYPE_1__* gvt; } ;
struct TYPE_4__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu_workload *VAR_9,
  u32 *VAR_10, bool VAR_11)
{
 struct drm_i915_private *VAR_12 = VAR_9->vgpu->gvt->dev_priv;
 u32 VAR_13 = VAR_12->perf.ctx_oactxctrl_offset;
 u32 VAR_14 = VAR_12->perf.ctx_flexeu0_offset;
 int VAR_15 = 0;
 u32 VAR_16[] = {
  FUNC_1(VAR_0),
  FUNC_1(VAR_1),
  FUNC_1(VAR_2),
  FUNC_1(VAR_3),
  FUNC_1(VAR_4),
  FUNC_1(VAR_5),
  FUNC_1(VAR_6),
 };

 if (VAR_9->ring_id != VAR_8)
  return;

 if (VAR_11) {
  VAR_9->oactxctrl = VAR_10[VAR_13 + 1];

  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9->flex_mmio); VAR_15++) {
   u32 VAR_17 = VAR_14 + VAR_15 * 2;

   VAR_9->flex_mmio[VAR_15] = VAR_10[VAR_17 + 1];
  }
 } else {
  VAR_10[VAR_13] =
   FUNC_1(VAR_7);
  VAR_10[VAR_13 + 1] = VAR_9->oactxctrl;

  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9->flex_mmio); VAR_15++) {
   u32 VAR_18 = VAR_14 + VAR_15 * 2;
   u32 VAR_19 = VAR_16[VAR_15];

   VAR_10[VAR_18] = VAR_19;
   VAR_10[VAR_18 + 1] = VAR_9->flex_mmio[VAR_15];
  }
 }
}
