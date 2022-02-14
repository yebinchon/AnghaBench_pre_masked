
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* enable_metric_set; int disable_metric_set; int * is_valid_flex_reg; int is_valid_mux_reg; void* is_valid_b_counter_reg; int oa_hw_tail_read; int read; int oa_disable; int oa_enable; } ;
struct TYPE_5__ {int ctx_oactxctrl_offset; int ctx_flexeu0_offset; int initialized; int spurious_report_rs; int metrics_idr; int metrics_lock; int sysctl_header; int lock; int streams; TYPE_1__ ops; void* gen8_valid_ctx_bit; int oa_formats; } ;
struct drm_i915_private {TYPE_2__ perf; } ;
struct TYPE_6__ {int cs_timestamp_frequency_khz; } ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_7 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_24 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct drm_i915_private *VAR_25)
{
 if (FUNC_6(VAR_25)) {
  VAR_25->perf.ops.is_valid_b_counter_reg =
   VAR_6;
  VAR_25->perf.ops.is_valid_mux_reg =
   VAR_22;
  VAR_25->perf.ops.is_valid_flex_reg = ((void*)0);
  VAR_25->perf.ops.enable_metric_set = VAR_21;
  VAR_25->perf.ops.disable_metric_set = VAR_20;
  VAR_25->perf.ops.oa_enable = VAR_8;
  VAR_25->perf.ops.oa_disable = VAR_7;
  VAR_25->perf.ops.read = VAR_10;
  VAR_25->perf.ops.oa_hw_tail_read =
   VAR_9;

  VAR_25->perf.oa_formats = VAR_23;
 } else if (FUNC_1(VAR_25)) {






  VAR_25->perf.oa_formats = VAR_19;

  VAR_25->perf.ops.oa_enable = VAR_16;
  VAR_25->perf.ops.oa_disable = VAR_15;
  VAR_25->perf.ops.read = VAR_18;
  VAR_25->perf.ops.oa_hw_tail_read = VAR_17;

  if (FUNC_5(VAR_25, 8, 9)) {
   VAR_25->perf.ops.is_valid_b_counter_reg =
    VAR_6;
   VAR_25->perf.ops.is_valid_mux_reg =
    VAR_14;
   VAR_25->perf.ops.is_valid_flex_reg =
    VAR_13;

   if (FUNC_3(VAR_25)) {
    VAR_25->perf.ops.is_valid_mux_reg =
     VAR_2;
   }

   VAR_25->perf.ops.enable_metric_set = VAR_12;
   VAR_25->perf.ops.disable_metric_set = VAR_11;

   if (FUNC_4(VAR_25, 8)) {
    VAR_25->perf.ctx_oactxctrl_offset = 0x120;
    VAR_25->perf.ctx_flexeu0_offset = 0x2ce;

    VAR_25->perf.gen8_valid_ctx_bit = FUNC_0(25);
   } else {
    VAR_25->perf.ctx_oactxctrl_offset = 0x128;
    VAR_25->perf.ctx_flexeu0_offset = 0x3de;

    VAR_25->perf.gen8_valid_ctx_bit = FUNC_0(16);
   }
  } else if (FUNC_5(VAR_25, 10, 11)) {
   VAR_25->perf.ops.is_valid_b_counter_reg =
    VAR_6;
   VAR_25->perf.ops.is_valid_mux_reg =
    VAR_5;
   VAR_25->perf.ops.is_valid_flex_reg =
    VAR_13;

   VAR_25->perf.ops.enable_metric_set = VAR_12;
   VAR_25->perf.ops.disable_metric_set = VAR_4;

   if (FUNC_4(VAR_25, 10)) {
    VAR_25->perf.ctx_oactxctrl_offset = 0x128;
    VAR_25->perf.ctx_flexeu0_offset = 0x3de;
   } else {
    VAR_25->perf.ctx_oactxctrl_offset = 0x124;
    VAR_25->perf.ctx_flexeu0_offset = 0x78e;
   }
   VAR_25->perf.gen8_valid_ctx_bit = FUNC_0(16);
  }
 }

 if (VAR_25->perf.ops.enable_metric_set) {
  FUNC_2(&VAR_25->perf.streams);
  FUNC_9(&VAR_25->perf.lock);

  VAR_24 = 1000 *
   (FUNC_7(VAR_25)->cs_timestamp_frequency_khz / 2);
  VAR_25->perf.sysctl_header = FUNC_12(VAR_3);

  FUNC_9(&VAR_25->perf.metrics_lock);
  FUNC_8(&VAR_25->perf.metrics_idr);
  FUNC_11(&VAR_25->perf.spurious_report_rs,
         5 * VAR_0, 10);




  FUNC_10(&VAR_25->perf.spurious_report_rs,
        VAR_1);

  VAR_25->perf.initialized = 1;
 }
}
