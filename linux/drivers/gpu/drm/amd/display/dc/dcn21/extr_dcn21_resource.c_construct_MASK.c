
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct irq_service_init_data {struct dc_context* ctx; } ;
struct TYPE_9__ {int pipe_count; int clk_src_count; int timing_generator_count; int ** dscs; TYPE_3__* res_cap; int * hubbub; int * mpc; int ** timing_generators; int ** opps; int ** sw_i2cs; int ** hw_i2cs; int ** engines; int ** dpps; int ** ipps; int ** hubps; int irqs; int pp_smu; int * dmcub; int * dccg; int ** clock_sources; void* dp_clock_source; int underlay_pipe_index; int * funcs; } ;
struct dcn21_resource_pool {TYPE_2__ base; } ;
struct dc_context {scalar_t__ dce_environment; TYPE_5__* dc_bios; } ;
struct TYPE_8__ {int max_downscale_ratio; int i2c_speed_in_khz; int max_cursor_size; int dmdata_alloc_size; int hw_3d_lut; int max_slave_planes; int post_blend_color_processing; int force_dp_tps4_for_cp2520; int max_planes; int * planes; } ;
struct dc {int cap_funcs; TYPE_1__ caps; struct dc_context* ctx; int dml; scalar_t__ vm_helper; void* debug; } ;
struct TYPE_11__ {int * regs; } ;
struct TYPE_10__ {int num_ddc; int num_opp; int num_timing_generator; int num_dsc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_2 (struct irq_service_init_data*) ;
 int * FUNC_3 (struct dc_context*,int *,int *,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct dc_context*,TYPE_2__*) ;
 int FUNC_5 (struct dc*) ;
 int FUNC_6 (struct dc_context*,TYPE_2__*) ;
 int * FUNC_7 (struct dc_context*,int) ;
 void* FUNC_8 (struct dc_context*,TYPE_5__*,int ,int *,int) ;
 int * FUNC_9 (struct dc_context*,int *,int *,int *) ;
 int * FUNC_10 (struct dc_context*,int) ;
 int * FUNC_11 (struct dc_context*,int) ;
 int * FUNC_12 (struct dc_context*) ;
 int * FUNC_13 (struct dc_context*,int) ;
 int * FUNC_14 (struct dc_context*,int) ;
 int * FUNC_15 (struct dc_context*,int) ;
 int * FUNC_16 (struct dc_context*) ;
 int * FUNC_17 (struct dc_context*,int) ;
 int FUNC_18 (struct dc_context*) ;
 int VAR_16 ;
 int * FUNC_19 (struct dc_context*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_20 (struct dcn21_resource_pool*) ;
 int FUNC_21 (char*,...) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_22 (int *,int *,int *,int ) ;
 int VAR_24 ;
 TYPE_3__ VAR_25 ;
 TYPE_3__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_23 (int ,struct dc*,TYPE_2__*,int *) ;
 int FUNC_24 (scalar_t__,int) ;

__attribute__((used)) static bool FUNC_25(
 uint8_t VAR_29,
 struct dc *VAR_30,
 struct dcn21_resource_pool *VAR_31)
{
 int VAR_32;
 struct dc_context *VAR_33 = VAR_30->ctx;
 struct irq_service_init_data VAR_34;

 VAR_33->dc_bios->regs = &VAR_10;

 VAR_31->base.res_cap = &VAR_25;






 VAR_31->base.funcs = &VAR_16;




 VAR_31->base.underlay_pipe_index = VAR_9;

 VAR_31->base.pipe_count = 4;
 VAR_30->caps.max_downscale_ratio = 200;
 VAR_30->caps.i2c_speed_in_khz = 100;
 VAR_30->caps.max_cursor_size = 256;
 VAR_30->caps.dmdata_alloc_size = 2048;
 VAR_30->caps.hw_3d_lut = 1;

 VAR_30->caps.max_slave_planes = 1;
 VAR_30->caps.post_blend_color_processing = 1;
 VAR_30->caps.force_dp_tps4_for_cp2520 = 1;

 if (VAR_30->ctx->dce_environment == VAR_4)
  VAR_30->debug = VAR_20;
 else if (VAR_30->ctx->dce_environment == VAR_3) {
  VAR_31->base.pipe_count = 4;
  VAR_30->debug = VAR_19;
 } else
  VAR_30->debug = VAR_19;


 if (VAR_30->vm_helper)
  FUNC_24(VAR_30->vm_helper, 16);





 VAR_31->base.clock_sources[VAR_5] =
   FUNC_8(VAR_33, VAR_33->dc_bios,
    VAR_0,
    &VAR_12[0], 0);
 VAR_31->base.clock_sources[VAR_6] =
   FUNC_8(VAR_33, VAR_33->dc_bios,
    VAR_1,
    &VAR_12[1], 0);

 VAR_31->base.clk_src_count = VAR_7;


 VAR_31->base.dp_clock_source =
   FUNC_8(VAR_33, VAR_33->dc_bios,
    VAR_2,
    &VAR_12[0], 1);

 for (VAR_32 = 0; VAR_32 < VAR_31->base.clk_src_count; VAR_32++) {
  if (VAR_31->base.clock_sources[VAR_32] == ((void*)0)) {
   FUNC_21("DC: failed to create clock sources!\n");
   FUNC_0();
   goto create_fail;
  }
 }

 VAR_31->base.dccg = FUNC_3(VAR_33, &VAR_14, &VAR_15, &VAR_13);
 if (VAR_31->base.dccg == ((void*)0)) {
  FUNC_21("DC: failed to create dccg!\n");
  FUNC_0();
  goto create_fail;
 }
 VAR_31->base.pp_smu = FUNC_18(VAR_33);

 FUNC_22(&VAR_30->dml, &VAR_18, &VAR_17, VAR_8);

 VAR_34.ctx = VAR_30->ctx;
 VAR_31->base.irqs = FUNC_2(&VAR_34);
 if (!VAR_31->base.irqs)
  goto create_fail;


 for (VAR_32 = 0; VAR_32 < VAR_31->base.pipe_count; VAR_32++) {
  VAR_31->base.hubps[VAR_32] = FUNC_13(VAR_33, VAR_32);
  if (VAR_31->base.hubps[VAR_32] == ((void*)0)) {
   FUNC_0();
   FUNC_21(
    "DC: failed to create memory input!\n");
   goto create_fail;
  }

  VAR_31->base.ipps[VAR_32] = FUNC_15(VAR_33, VAR_32);
  if (VAR_31->base.ipps[VAR_32] == ((void*)0)) {
   FUNC_0();
   FUNC_21(
    "DC: failed to create input pixel processor!\n");
   goto create_fail;
  }

  VAR_31->base.dpps[VAR_32] = FUNC_10(VAR_33, VAR_32);
  if (VAR_31->base.dpps[VAR_32] == ((void*)0)) {
   FUNC_0();
   FUNC_21(
    "DC: failed to create dpps!\n");
   goto create_fail;
  }
 }

 for (VAR_32 = 0; VAR_32 < VAR_31->base.res_cap->num_ddc; VAR_32++) {
  VAR_31->base.engines[VAR_32] = FUNC_7(VAR_33, VAR_32);
  if (VAR_31->base.engines[VAR_32] == ((void*)0)) {
   FUNC_0();
   FUNC_21(
    "DC:failed to create aux engine!!\n");
   goto create_fail;
  }
  VAR_31->base.hw_i2cs[VAR_32] = FUNC_14(VAR_33, VAR_32);
  if (VAR_31->base.hw_i2cs[VAR_32] == ((void*)0)) {
   FUNC_0();
   FUNC_21(
    "DC:failed to create hw i2c!!\n");
   goto create_fail;
  }
  VAR_31->base.sw_i2cs[VAR_32] = ((void*)0);
 }

 for (VAR_32 = 0; VAR_32 < VAR_31->base.res_cap->num_opp; VAR_32++) {
  VAR_31->base.opps[VAR_32] = FUNC_17(VAR_33, VAR_32);
  if (VAR_31->base.opps[VAR_32] == ((void*)0)) {
   FUNC_0();
   FUNC_21(
    "DC: failed to create output pixel processor!\n");
   goto create_fail;
  }
 }

 for (VAR_32 = 0; VAR_32 < VAR_31->base.res_cap->num_timing_generator; VAR_32++) {
  VAR_31->base.timing_generators[VAR_32] = FUNC_19(
    VAR_33, VAR_32);
  if (VAR_31->base.timing_generators[VAR_32] == ((void*)0)) {
   FUNC_0();
   FUNC_21("DC: failed to create tg!\n");
   goto create_fail;
  }
 }

 VAR_31->base.timing_generator_count = VAR_32;

 VAR_31->base.mpc = FUNC_16(VAR_33);
 if (VAR_31->base.mpc == ((void*)0)) {
  FUNC_0();
  FUNC_21("DC: failed to create mpc!\n");
  goto create_fail;
 }

 VAR_31->base.hubbub = FUNC_12(VAR_33);
 if (VAR_31->base.hubbub == ((void*)0)) {
  FUNC_0();
  FUNC_21("DC: failed to create hubbub!\n");
  goto create_fail;
 }
 if (!FUNC_4(VAR_33, &VAR_31->base)) {
  FUNC_0();
  FUNC_21("DC: failed to create dwbc!\n");
  goto create_fail;
 }
 if (!FUNC_6(VAR_33, &VAR_31->base)) {
  FUNC_0();
  FUNC_21("DC: failed to create mcif_wb!\n");
  goto create_fail;
 }

 if (!FUNC_23(VAR_29, VAR_30, &VAR_31->base,
   (!FUNC_1(VAR_30->ctx->dce_environment) ?
   &VAR_27 : &VAR_28)))
   goto create_fail;

 FUNC_5(VAR_30);

 VAR_30->caps.max_planes = VAR_31->base.pipe_count;

 for (VAR_32 = 0; VAR_32 < VAR_30->caps.max_planes; ++VAR_32)
  VAR_30->caps.planes[VAR_32] = VAR_24;

 VAR_30->cap_funcs = VAR_11;

 return 1;

create_fail:

 FUNC_20(VAR_31);

 return 0;
}
