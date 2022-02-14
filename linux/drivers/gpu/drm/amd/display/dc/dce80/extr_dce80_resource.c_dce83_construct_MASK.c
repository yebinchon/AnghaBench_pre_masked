
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct irq_service_init_data {struct dc_context* ctx; } ;
struct TYPE_7__ {unsigned int pipe_count; unsigned int timing_generator_count; int clk_src_count; int ** sw_i2cs; int ** hw_i2cs; int ** engines; TYPE_4__* res_cap; int ** opps; int ** transforms; int ** ipps; int ** mis; int ** timing_generators; int irqs; int * abm; int * dmcu; int ** clock_sources; int * dp_clock_source; int underlay_pipe_index; int * funcs; } ;
struct dce110_resource_pool {TYPE_3__ base; } ;
struct dc_context {struct dc_bios* dc_bios; } ;
struct TYPE_6__ {scalar_t__ external_clock_source_frequency_for_dp; } ;
struct dc_bios {TYPE_2__ fw_info; scalar_t__ fw_info_valid; int * regs; } ;
struct TYPE_5__ {int max_downscale_ratio; int i2c_speed_in_khz; int max_cursor_size; int is_apu; unsigned int max_planes; int disable_dp_clk_share; int * planes; } ;
struct dc {TYPE_1__ caps; struct dc_context* ctx; } ;
struct TYPE_8__ {unsigned int num_timing_generator; unsigned int num_ddc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (struct irq_service_init_data*) ;
 int * FUNC_2 (struct dc_context*,unsigned int) ;
 void* FUNC_3 (struct dc_context*,struct dc_bios*,int ,int *,int) ;
 int FUNC_4 (struct dc*) ;
 int * FUNC_5 (struct dc_context*,unsigned int) ;
 int * FUNC_6 (struct dc_context*) ;
 int * FUNC_7 (struct dc_context*,unsigned int) ;
 int * FUNC_8 (struct dc_context*,unsigned int) ;
 int * FUNC_9 (struct dc_context*,unsigned int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int * FUNC_10 (struct dc_context*,unsigned int,int *) ;
 int * FUNC_11 (struct dc_context*,unsigned int) ;
 int * FUNC_12 (struct dc_context*,int *,int *,int *) ;
 int * FUNC_13 (struct dc_context*,int *,int *,int *) ;
 int FUNC_14 (struct dce110_resource_pool*) ;
 int FUNC_15 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (int ,struct dc*,TYPE_3__*,int *) ;

__attribute__((used)) static bool FUNC_17(
 uint8_t VAR_17,
 struct dc *VAR_18,
 struct dce110_resource_pool *VAR_19)
{
 unsigned int VAR_20;
 struct dc_context *VAR_21 = VAR_18->ctx;
 struct dc_bios *VAR_22;

 VAR_21->dc_bios->regs = &VAR_7;

 VAR_19->base.res_cap = &VAR_15;
 VAR_19->base.funcs = &VAR_9;





 VAR_19->base.underlay_pipe_index = VAR_3;
 VAR_19->base.pipe_count = VAR_15;
 VAR_19->base.timing_generator_count = VAR_15;
 VAR_18->caps.max_downscale_ratio = 200;
 VAR_18->caps.i2c_speed_in_khz = 40;
 VAR_18->caps.max_cursor_size = 128;
 VAR_18->caps.is_apu = 1;





 VAR_22 = VAR_21->dc_bios;

 if (VAR_22->fw_info_valid && VAR_22->fw_info.external_clock_source_frequency_for_dp != 0) {
  VAR_19->base.dp_clock_source =
    FUNC_3(VAR_21, VAR_22, VAR_0, ((void*)0), 1);

  VAR_19->base.clock_sources[0] =
    FUNC_3(VAR_21, VAR_22, VAR_1, &VAR_8[0], 0);
  VAR_19->base.clock_sources[1] =
    FUNC_3(VAR_21, VAR_22, VAR_2, &VAR_8[1], 0);
  VAR_19->base.clk_src_count = 2;

 } else {
  VAR_19->base.dp_clock_source =
    FUNC_3(VAR_21, VAR_22, VAR_1, &VAR_8[0], 1);

  VAR_19->base.clock_sources[0] =
    FUNC_3(VAR_21, VAR_22, VAR_2, &VAR_8[1], 0);
  VAR_19->base.clk_src_count = 1;
 }

 if (VAR_19->base.dp_clock_source == ((void*)0)) {
  FUNC_15("DC: failed to create dp clock source!\n");
  FUNC_0();
  goto res_create_fail;
 }

 for (VAR_20 = 0; VAR_20 < VAR_19->base.clk_src_count; VAR_20++) {
  if (VAR_19->base.clock_sources[VAR_20] == ((void*)0)) {
   FUNC_15("DC: failed to create clock sources!\n");
   FUNC_0();
   goto res_create_fail;
  }
 }

 VAR_19->base.dmcu = FUNC_13(VAR_21,
   &VAR_12,
   &VAR_13,
   &VAR_11);
 if (VAR_19->base.dmcu == ((void*)0)) {
  FUNC_15("DC: failed to create dmcu!\n");
  FUNC_0();
  goto res_create_fail;
 }

 VAR_19->base.abm = FUNC_12(VAR_21,
   &VAR_5,
   &VAR_6,
   &VAR_4);
 if (VAR_19->base.abm == ((void*)0)) {
  FUNC_15("DC: failed to create abm!\n");
  FUNC_0();
  goto res_create_fail;
 }

 {
  struct irq_service_init_data VAR_23;
  VAR_23.ctx = VAR_18->ctx;
  VAR_19->base.irqs = FUNC_1(&VAR_23);
  if (!VAR_19->base.irqs)
   goto res_create_fail;
 }

 for (VAR_20 = 0; VAR_20 < VAR_19->base.pipe_count; VAR_20++) {
  VAR_19->base.timing_generators[VAR_20] = FUNC_10(
    VAR_21, VAR_20, &VAR_10[VAR_20]);
  if (VAR_19->base.timing_generators[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create tg!\n");
   goto res_create_fail;
  }

  VAR_19->base.mis[VAR_20] = FUNC_8(VAR_21, VAR_20);
  if (VAR_19->base.mis[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create memory input!\n");
   goto res_create_fail;
  }

  VAR_19->base.ipps[VAR_20] = FUNC_7(VAR_21, VAR_20);
  if (VAR_19->base.ipps[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create input pixel processor!\n");
   goto res_create_fail;
  }

  VAR_19->base.transforms[VAR_20] = FUNC_11(VAR_21, VAR_20);
  if (VAR_19->base.transforms[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create transform!\n");
   goto res_create_fail;
  }

  VAR_19->base.opps[VAR_20] = FUNC_9(VAR_21, VAR_20);
  if (VAR_19->base.opps[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create output pixel processor!\n");
   goto res_create_fail;
  }
 }

 for (VAR_20 = 0; VAR_20 < VAR_19->base.res_cap->num_ddc; VAR_20++) {
  VAR_19->base.engines[VAR_20] = FUNC_2(VAR_21, VAR_20);
  if (VAR_19->base.engines[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_15(
    "DC:failed to create aux engine!!\n");
   goto res_create_fail;
  }
  VAR_19->base.hw_i2cs[VAR_20] = FUNC_5(VAR_21, VAR_20);
  if (VAR_19->base.hw_i2cs[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_15(
    "DC:failed to create i2c engine!!\n");
   goto res_create_fail;
  }
  VAR_19->base.sw_i2cs[VAR_20] = FUNC_6(VAR_21);
  if (VAR_19->base.sw_i2cs[VAR_20] == ((void*)0)) {
   FUNC_0();
   FUNC_15(
    "DC:failed to create sw i2c!!\n");
   goto res_create_fail;
  }
 }

 VAR_18->caps.max_planes = VAR_19->base.pipe_count;

 for (VAR_20 = 0; VAR_20 < VAR_18->caps.max_planes; ++VAR_20)
  VAR_18->caps.planes[VAR_20] = VAR_14;

 VAR_18->caps.disable_dp_clk_share = 1;

 if (!FUNC_16(VAR_17, VAR_18, &VAR_19->base,
   &VAR_16))
  goto res_create_fail;


 FUNC_4(VAR_18);

 return 1;

res_create_fail:
 FUNC_14(VAR_19);
 return 0;
}
