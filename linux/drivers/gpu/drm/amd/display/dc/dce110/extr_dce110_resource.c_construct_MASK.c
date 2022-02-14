
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct irq_service_init_data {struct dc_context* ctx; } ;
struct hw_asic_id {int dummy; } ;
struct TYPE_10__ {unsigned int pipe_count; unsigned int underlay_pipe_index; unsigned int timing_generator_count; int clk_src_count; int ** sw_i2cs; int ** hw_i2cs; int ** engines; TYPE_6__* res_cap; int ** opps; int ** transforms; int ** ipps; int ** mis; int ** timing_generators; int irqs; int * abm; int * dmcu; int ** clock_sources; int * dp_clock_source; int * funcs; } ;
struct dce110_resource_pool {TYPE_4__ base; } ;
struct dc_context {int asic_id; struct dc_bios* dc_bios; } ;
struct TYPE_9__ {scalar_t__ external_clock_source_frequency_for_dp; } ;
struct dc_bios {TYPE_3__ fw_info; scalar_t__ fw_info_valid; int * regs; } ;
struct TYPE_8__ {int max_downscale_ratio; int i2c_speed_in_khz; int max_cursor_size; int is_apu; unsigned int max_planes; int * planes; } ;
struct TYPE_7__ {scalar_t__ fbc_support; } ;
struct dc {struct dc_context* ctx; int bw_vbios; int bw_dceip; TYPE_2__ caps; int fbc_compressor; TYPE_1__ config; } ;
struct TYPE_11__ {unsigned int num_timing_generator; unsigned int num_ddc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dc*) ;
 int FUNC_2 (int ,int ,int ) ;
 int * VAR_7 ;
 int FUNC_3 (struct irq_service_init_data*) ;
 int * FUNC_4 (struct dc_context*,unsigned int) ;
 void* FUNC_5 (struct dc_context*,struct dc_bios*,int ,int *,int) ;
 int FUNC_6 (struct dc_context*) ;
 int FUNC_7 (struct dc*) ;
 int * FUNC_8 (struct dc_context*,unsigned int) ;
 int * FUNC_9 (struct dc_context*,unsigned int) ;
 int * FUNC_10 (struct dc_context*,unsigned int) ;
 int * FUNC_11 (struct dc_context*,unsigned int) ;
 int VAR_8 ;
 TYPE_6__* FUNC_12 (int *) ;
 int * VAR_9 ;
 int * FUNC_13 (struct dc_context*,unsigned int,int *) ;
 int * FUNC_14 (struct dc_context*,unsigned int) ;
 int * FUNC_15 (struct dc_context*,int *,int *,int *) ;
 int * FUNC_16 (struct dc_context*,int *,int *,int *) ;
 int FUNC_17 (struct dce110_resource_pool*) ;
 int FUNC_18 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (int ,struct dc*,TYPE_4__*,int *) ;
 int FUNC_20 (struct dc_context*,TYPE_4__*) ;
 int VAR_15 ;

__attribute__((used)) static bool FUNC_21(
 uint8_t VAR_16,
 struct dc *VAR_17,
 struct dce110_resource_pool *VAR_18,
 struct hw_asic_id VAR_19)
{
 unsigned int VAR_20;
 struct dc_context *VAR_21 = VAR_17->ctx;
 struct dc_bios *VAR_22;

 VAR_21->dc_bios->regs = &VAR_6;

 VAR_18->base.res_cap = FUNC_12(&VAR_21->asic_id);
 VAR_18->base.funcs = &VAR_8;





 VAR_18->base.pipe_count = VAR_18->base.res_cap->num_timing_generator;
 VAR_18->base.underlay_pipe_index = VAR_18->base.pipe_count;
 VAR_18->base.timing_generator_count = VAR_18->base.res_cap->num_timing_generator;
 VAR_17->caps.max_downscale_ratio = 150;
 VAR_17->caps.i2c_speed_in_khz = 100;
 VAR_17->caps.max_cursor_size = 128;
 VAR_17->caps.is_apu = 1;





 VAR_22 = VAR_21->dc_bios;

 if (VAR_22->fw_info_valid && VAR_22->fw_info.external_clock_source_frequency_for_dp != 0) {
  VAR_18->base.dp_clock_source =
    FUNC_5(VAR_21, VAR_22, VAR_0, ((void*)0), 1);

  VAR_18->base.clock_sources[0] =
    FUNC_5(VAR_21, VAR_22, VAR_1,
      &VAR_7[0], 0);
  VAR_18->base.clock_sources[1] =
    FUNC_5(VAR_21, VAR_22, VAR_2,
      &VAR_7[1], 0);

  VAR_18->base.clk_src_count = 2;


 }

 if (VAR_18->base.dp_clock_source == ((void*)0)) {
  FUNC_18("DC: failed to create dp clock source!\n");
  FUNC_0();
  goto res_create_fail;
 }

 for (VAR_20 = 0; VAR_20 < VAR_18->base.clk_src_count; VAR_20++) {
  if (VAR_18->base.clock_sources[VAR_20] == ((void*)0)) {
   FUNC_18("DC: failed to create clock sources!\n");
   FUNC_0();
   goto res_create_fail;
  }
 }

 VAR_18->base.dmcu = FUNC_16(VAR_21,
   &VAR_11,
   &VAR_12,
   &VAR_10);
 if (VAR_18->base.dmcu == ((void*)0)) {
  FUNC_18("DC: failed to create dmcu!\n");
  FUNC_0();
  goto res_create_fail;
 }

 VAR_18->base.abm = FUNC_15(VAR_21,
   &VAR_4,
   &VAR_5,
   &VAR_3);
 if (VAR_18->base.abm == ((void*)0)) {
  FUNC_18("DC: failed to create abm!\n");
  FUNC_0();
  goto res_create_fail;
 }

 {
  struct irq_service_init_data VAR_23;
  VAR_23.ctx = VAR_17->ctx;
  VAR_18->base.irqs = FUNC_3(&VAR_23);
  if (!VAR_18->base.irqs)
   goto res_create_fail;
 }

 for (VAR_20 = 0; VAR_20 < VAR_18->base.pipe_count; VAR_20++) {
  VAR_18->base.timing_generators[VAR_20] = FUNC_13(
    VAR_21, VAR_20, &VAR_9[VAR_20]);
  if (VAR_18->base.timing_generators[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_18("DC: failed to create tg!\n");
   goto res_create_fail;
  }

  VAR_18->base.mis[VAR_20] = FUNC_10(VAR_21, VAR_20);
  if (VAR_18->base.mis[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_18(
    "DC: failed to create memory input!\n");
   goto res_create_fail;
  }

  VAR_18->base.ipps[VAR_20] = FUNC_9(VAR_21, VAR_20);
  if (VAR_18->base.ipps[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_18(
    "DC: failed to create input pixel processor!\n");
   goto res_create_fail;
  }

  VAR_18->base.transforms[VAR_20] = FUNC_14(VAR_21, VAR_20);
  if (VAR_18->base.transforms[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_18(
    "DC: failed to create transform!\n");
   goto res_create_fail;
  }

  VAR_18->base.opps[VAR_20] = FUNC_11(VAR_21, VAR_20);
  if (VAR_18->base.opps[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_18(
    "DC: failed to create output pixel processor!\n");
   goto res_create_fail;
  }
 }

 for (VAR_20 = 0; VAR_20 < VAR_18->base.res_cap->num_ddc; VAR_20++) {
  VAR_18->base.engines[VAR_20] = FUNC_4(VAR_21, VAR_20);
  if (VAR_18->base.engines[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_18(
    "DC:failed to create aux engine!!\n");
   goto res_create_fail;
  }
  VAR_18->base.hw_i2cs[VAR_20] = FUNC_8(VAR_21, VAR_20);
  if (VAR_18->base.hw_i2cs[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_18(
    "DC:failed to create i2c engine!!\n");
   goto res_create_fail;
  }
  VAR_18->base.sw_i2cs[VAR_20] = ((void*)0);
 }

 if (VAR_17->config.fbc_support)
  VAR_17->fbc_compressor = FUNC_6(VAR_21);

 if (!FUNC_20(VAR_21, &VAR_18->base))
  goto res_create_fail;

 if (!FUNC_19(VAR_16, VAR_17, &VAR_18->base,
   &VAR_14))
  goto res_create_fail;


 FUNC_7(VAR_17);

 VAR_17->caps.max_planes = VAR_18->base.pipe_count;

 for (VAR_20 = 0; VAR_20 < VAR_18->base.underlay_pipe_index; ++VAR_20)
  VAR_17->caps.planes[VAR_20] = VAR_13;

 VAR_17->caps.planes[VAR_18->base.underlay_pipe_index] = VAR_15;

 FUNC_2(VAR_17->bw_dceip, VAR_17->bw_vbios, VAR_17->ctx->asic_id);

 FUNC_1(VAR_17);

 return 1;

res_create_fail:
 FUNC_17(VAR_18);
 return 0;
}
