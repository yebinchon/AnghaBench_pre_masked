
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
struct TYPE_5__ {int max_downscale_ratio; int i2c_speed_in_khz; int max_cursor_size; int dual_link_dvi; unsigned int max_planes; int disable_dp_clk_share; int * planes; } ;
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
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (struct irq_service_init_data*) ;
 int * FUNC_2 (struct dc_context*,unsigned int) ;
 void* FUNC_3 (struct dc_context*,struct dc_bios*,int ,int *,int) ;
 int FUNC_4 (struct dc*) ;
 int * FUNC_5 (struct dc_context*,unsigned int) ;
 int * FUNC_6 (struct dc_context*) ;
 int * FUNC_7 (struct dc_context*,unsigned int) ;
 int * FUNC_8 (struct dc_context*,unsigned int) ;
 int * FUNC_9 (struct dc_context*,unsigned int) ;
 int VAR_10 ;
 int * VAR_11 ;
 int * FUNC_10 (struct dc_context*,unsigned int,int *) ;
 int * FUNC_11 (struct dc_context*,unsigned int) ;
 int * FUNC_12 (struct dc_context*,int *,int *,int *) ;
 int * FUNC_13 (struct dc_context*,int *,int *,int *) ;
 int FUNC_14 (struct dce110_resource_pool*) ;
 int FUNC_15 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_4__ VAR_16 ;
 int VAR_17 ;
 int FUNC_16 (int ,struct dc*,TYPE_3__*,int *) ;

__attribute__((used)) static bool FUNC_17(
 uint8_t VAR_18,
 struct dc *VAR_19,
 struct dce110_resource_pool *VAR_20)
{
 unsigned int VAR_21;
 struct dc_context *VAR_22 = VAR_19->ctx;
 struct dc_bios *VAR_23;

 VAR_22->dc_bios->regs = &VAR_8;

 VAR_20->base.res_cap = &VAR_16;
 VAR_20->base.funcs = &VAR_10;





 VAR_20->base.underlay_pipe_index = VAR_4;
 VAR_20->base.pipe_count = VAR_16.num_timing_generator;
 VAR_20->base.timing_generator_count = VAR_16.num_timing_generator;
 VAR_19->caps.max_downscale_ratio = 200;
 VAR_19->caps.i2c_speed_in_khz = 40;
 VAR_19->caps.max_cursor_size = 128;
 VAR_19->caps.dual_link_dvi = 1;





 VAR_23 = VAR_22->dc_bios;

 if (VAR_23->fw_info_valid && VAR_23->fw_info.external_clock_source_frequency_for_dp != 0) {
  VAR_20->base.dp_clock_source =
    FUNC_3(VAR_22, VAR_23, VAR_0, ((void*)0), 1);

  VAR_20->base.clock_sources[0] =
    FUNC_3(VAR_22, VAR_23, VAR_1, &VAR_9[0], 0);
  VAR_20->base.clock_sources[1] =
    FUNC_3(VAR_22, VAR_23, VAR_2, &VAR_9[1], 0);
  VAR_20->base.clock_sources[2] =
    FUNC_3(VAR_22, VAR_23, VAR_3, &VAR_9[2], 0);
  VAR_20->base.clk_src_count = 3;

 } else {
  VAR_20->base.dp_clock_source =
    FUNC_3(VAR_22, VAR_23, VAR_1, &VAR_9[0], 1);

  VAR_20->base.clock_sources[0] =
    FUNC_3(VAR_22, VAR_23, VAR_2, &VAR_9[1], 0);
  VAR_20->base.clock_sources[1] =
    FUNC_3(VAR_22, VAR_23, VAR_3, &VAR_9[2], 0);
  VAR_20->base.clk_src_count = 2;
 }

 if (VAR_20->base.dp_clock_source == ((void*)0)) {
  FUNC_15("DC: failed to create dp clock source!\n");
  FUNC_0();
  goto res_create_fail;
 }

 for (VAR_21 = 0; VAR_21 < VAR_20->base.clk_src_count; VAR_21++) {
  if (VAR_20->base.clock_sources[VAR_21] == ((void*)0)) {
   FUNC_15("DC: failed to create clock sources!\n");
   FUNC_0();
   goto res_create_fail;
  }
 }

 VAR_20->base.dmcu = FUNC_13(VAR_22,
   &VAR_13,
   &VAR_14,
   &VAR_12);
 if (VAR_20->base.dmcu == ((void*)0)) {
  FUNC_15("DC: failed to create dmcu!\n");
  FUNC_0();
  goto res_create_fail;
 }

 VAR_20->base.abm = FUNC_12(VAR_22,
   &VAR_6,
   &VAR_7,
   &VAR_5);
 if (VAR_20->base.abm == ((void*)0)) {
  FUNC_15("DC: failed to create abm!\n");
  FUNC_0();
  goto res_create_fail;
 }

 {
  struct irq_service_init_data VAR_24;
  VAR_24.ctx = VAR_19->ctx;
  VAR_20->base.irqs = FUNC_1(&VAR_24);
  if (!VAR_20->base.irqs)
   goto res_create_fail;
 }

 for (VAR_21 = 0; VAR_21 < VAR_20->base.pipe_count; VAR_21++) {
  VAR_20->base.timing_generators[VAR_21] = FUNC_10(
    VAR_22, VAR_21, &VAR_11[VAR_21]);
  if (VAR_20->base.timing_generators[VAR_21] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create tg!\n");
   goto res_create_fail;
  }

  VAR_20->base.mis[VAR_21] = FUNC_8(VAR_22, VAR_21);
  if (VAR_20->base.mis[VAR_21] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create memory input!\n");
   goto res_create_fail;
  }

  VAR_20->base.ipps[VAR_21] = FUNC_7(VAR_22, VAR_21);
  if (VAR_20->base.ipps[VAR_21] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create input pixel processor!\n");
   goto res_create_fail;
  }

  VAR_20->base.transforms[VAR_21] = FUNC_11(VAR_22, VAR_21);
  if (VAR_20->base.transforms[VAR_21] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create transform!\n");
   goto res_create_fail;
  }

  VAR_20->base.opps[VAR_21] = FUNC_9(VAR_22, VAR_21);
  if (VAR_20->base.opps[VAR_21] == ((void*)0)) {
   FUNC_0();
   FUNC_15("DC: failed to create output pixel processor!\n");
   goto res_create_fail;
  }
 }

 for (VAR_21 = 0; VAR_21 < VAR_20->base.res_cap->num_ddc; VAR_21++) {
  VAR_20->base.engines[VAR_21] = FUNC_2(VAR_22, VAR_21);
  if (VAR_20->base.engines[VAR_21] == ((void*)0)) {
   FUNC_0();
   FUNC_15(
    "DC:failed to create aux engine!!\n");
   goto res_create_fail;
  }
  VAR_20->base.hw_i2cs[VAR_21] = FUNC_5(VAR_22, VAR_21);
  if (VAR_20->base.hw_i2cs[VAR_21] == ((void*)0)) {
   FUNC_0();
   FUNC_15(
    "DC:failed to create i2c engine!!\n");
   goto res_create_fail;
  }
  VAR_20->base.sw_i2cs[VAR_21] = FUNC_6(VAR_22);
  if (VAR_20->base.sw_i2cs[VAR_21] == ((void*)0)) {
   FUNC_0();
   FUNC_15(
    "DC:failed to create sw i2c!!\n");
   goto res_create_fail;
  }
 }

 VAR_19->caps.max_planes = VAR_20->base.pipe_count;

 for (VAR_21 = 0; VAR_21 < VAR_19->caps.max_planes; ++VAR_21)
  VAR_19->caps.planes[VAR_21] = VAR_15;

 VAR_19->caps.disable_dp_clk_share = 1;

 if (!FUNC_16(VAR_18, VAR_19, &VAR_20->base,
   &VAR_17))
  goto res_create_fail;


 FUNC_4(VAR_19);

 return 1;

res_create_fail:
 FUNC_14(VAR_20);
 return 0;
}
