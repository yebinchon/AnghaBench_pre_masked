
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
struct TYPE_6__ {unsigned int pipe_count; unsigned int timing_generator_count; unsigned int clk_src_count; int ** sw_i2cs; int ** hw_i2cs; int ** engines; TYPE_3__* res_cap; int ** opps; int ** transforms; int ** ipps; int ** mis; int ** timing_generators; int irqs; int * abm; int * dmcu; int ** clock_sources; void* dp_clock_source; int underlay_pipe_index; int * funcs; } ;
struct dce110_resource_pool {TYPE_2__ base; } ;
struct dc_context {int asic_id; TYPE_4__* dc_bios; } ;
struct TYPE_5__ {int max_downscale_ratio; int i2c_speed_in_khz; int max_cursor_size; int dual_link_dvi; unsigned int max_planes; int * planes; } ;
struct dc {struct dc_context* ctx; int bw_vbios; int bw_dceip; TYPE_1__ caps; } ;
struct TYPE_8__ {int * regs; } ;
struct TYPE_7__ {unsigned int num_timing_generator; unsigned int num_ddc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct dc*) ;
 int FUNC_2 (int ,int ,int ) ;
 int * VAR_19 ;
 int FUNC_3 (struct irq_service_init_data*) ;
 int * FUNC_4 (struct dc_context*,unsigned int) ;
 void* FUNC_5 (struct dc_context*,TYPE_4__*,int ,int *,int) ;
 int FUNC_6 (struct dc*) ;
 int * FUNC_7 (struct dc_context*,unsigned int) ;
 int * FUNC_8 (struct dc_context*,unsigned int) ;
 int * FUNC_9 (struct dc_context*,unsigned int) ;
 int * FUNC_10 (struct dc_context*,unsigned int) ;
 int VAR_20 ;
 TYPE_3__* FUNC_11 (int *) ;
 int * VAR_21 ;
 int * FUNC_12 (struct dc_context*,unsigned int,int *) ;
 int * FUNC_13 (struct dc_context*,unsigned int) ;
 int * FUNC_14 (struct dc_context*,int *,int *,int *) ;
 int * FUNC_15 (struct dc_context*,int *,int *,int *) ;
 int FUNC_16 (struct dce110_resource_pool*) ;
 int FUNC_17 (char*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_18 (int ,struct dc*,TYPE_2__*,int *) ;

__attribute__((used)) static bool FUNC_19(
 uint8_t VAR_27,
 struct dc *VAR_28,
 struct dce110_resource_pool *VAR_29)
{
 unsigned int VAR_30;
 struct dc_context *VAR_31 = VAR_28->ctx;

 VAR_31->dc_bios->regs = &VAR_18;

 VAR_29->base.res_cap = FUNC_11(&VAR_31->asic_id);
 VAR_29->base.funcs = &VAR_20;




 VAR_29->base.underlay_pipe_index = VAR_14;
 VAR_29->base.pipe_count = VAR_29->base.res_cap->num_timing_generator;
 VAR_29->base.timing_generator_count = VAR_29->base.res_cap->num_timing_generator;
 VAR_28->caps.max_downscale_ratio = 200;
 VAR_28->caps.i2c_speed_in_khz = 100;
 VAR_28->caps.max_cursor_size = 128;
 VAR_28->caps.dual_link_dvi = 1;






 VAR_29->base.clock_sources[VAR_7] =
   FUNC_5(
    VAR_31, VAR_31->dc_bios,
    VAR_0,
    &VAR_19[0], 0);
 VAR_29->base.clock_sources[VAR_8] =
   FUNC_5(
    VAR_31, VAR_31->dc_bios,
    VAR_1,
    &VAR_19[1], 0);
 VAR_29->base.clock_sources[VAR_9] =
   FUNC_5(
    VAR_31, VAR_31->dc_bios,
    VAR_2,
    &VAR_19[2], 0);
 VAR_29->base.clock_sources[VAR_10] =
   FUNC_5(
    VAR_31, VAR_31->dc_bios,
    VAR_3,
    &VAR_19[3], 0);
 VAR_29->base.clock_sources[VAR_11] =
   FUNC_5(
    VAR_31, VAR_31->dc_bios,
    VAR_4,
    &VAR_19[4], 0);
 VAR_29->base.clock_sources[VAR_12] =
   FUNC_5(
    VAR_31, VAR_31->dc_bios,
    VAR_5,
    &VAR_19[5], 0);
 VAR_29->base.clk_src_count = VAR_13;

 VAR_29->base.dp_clock_source = FUNC_5(
  VAR_31, VAR_31->dc_bios,
  VAR_6, &VAR_19[0], 1);


 for (VAR_30 = 0; VAR_30 < VAR_29->base.clk_src_count; VAR_30++) {
  if (VAR_29->base.clock_sources[VAR_30] == ((void*)0)) {
   FUNC_17("DC: failed to create clock sources!\n");
   FUNC_0();
   goto res_create_fail;
  }
 }

 VAR_29->base.dmcu = FUNC_15(VAR_31,
   &VAR_23,
   &VAR_24,
   &VAR_22);
 if (VAR_29->base.dmcu == ((void*)0)) {
  FUNC_17("DC: failed to create dmcu!\n");
  FUNC_0();
  goto res_create_fail;
 }

 VAR_29->base.abm = FUNC_14(VAR_31,
   &VAR_16,
   &VAR_17,
   &VAR_15);
 if (VAR_29->base.abm == ((void*)0)) {
  FUNC_17("DC: failed to create abm!\n");
  FUNC_0();
  goto res_create_fail;
 }

 {
  struct irq_service_init_data VAR_32;
  VAR_32.ctx = VAR_28->ctx;
  VAR_29->base.irqs = FUNC_3(&VAR_32);
  if (!VAR_29->base.irqs)
   goto res_create_fail;
 }

 for (VAR_30 = 0; VAR_30 < VAR_29->base.pipe_count; VAR_30++) {
  VAR_29->base.timing_generators[VAR_30] =
    FUNC_12(
     VAR_31,
     VAR_30,
     &VAR_21[VAR_30]);
  if (VAR_29->base.timing_generators[VAR_30] == ((void*)0)) {
   FUNC_0();
   FUNC_17("DC: failed to create tg!\n");
   goto res_create_fail;
  }

  VAR_29->base.mis[VAR_30] = FUNC_9(VAR_31, VAR_30);
  if (VAR_29->base.mis[VAR_30] == ((void*)0)) {
   FUNC_0();
   FUNC_17(
    "DC: failed to create memory input!\n");
   goto res_create_fail;
  }

  VAR_29->base.ipps[VAR_30] = FUNC_8(VAR_31, VAR_30);
  if (VAR_29->base.ipps[VAR_30] == ((void*)0)) {
   FUNC_0();
   FUNC_17(
    "DC:failed to create input pixel processor!\n");
   goto res_create_fail;
  }

  VAR_29->base.transforms[VAR_30] = FUNC_13(VAR_31, VAR_30);
  if (VAR_29->base.transforms[VAR_30] == ((void*)0)) {
   FUNC_0();
   FUNC_17(
    "DC: failed to create transform!\n");
   goto res_create_fail;
  }

  VAR_29->base.opps[VAR_30] = FUNC_10(
   VAR_31,
   VAR_30);
  if (VAR_29->base.opps[VAR_30] == ((void*)0)) {
   FUNC_0();
   FUNC_17(
    "DC:failed to create output pixel processor!\n");
   goto res_create_fail;
  }
 }

 for (VAR_30 = 0; VAR_30 < VAR_29->base.res_cap->num_ddc; VAR_30++) {
  VAR_29->base.engines[VAR_30] = FUNC_4(VAR_31, VAR_30);
  if (VAR_29->base.engines[VAR_30] == ((void*)0)) {
   FUNC_0();
   FUNC_17(
    "DC:failed to create aux engine!!\n");
   goto res_create_fail;
  }
  VAR_29->base.hw_i2cs[VAR_30] = FUNC_7(VAR_31, VAR_30);
  if (VAR_29->base.hw_i2cs[VAR_30] == ((void*)0)) {
   FUNC_0();
   FUNC_17(
    "DC:failed to create i2c engine!!\n");
   goto res_create_fail;
  }
  VAR_29->base.sw_i2cs[VAR_30] = ((void*)0);
 }

 if (!FUNC_18(VAR_27, VAR_28, &VAR_29->base,
     &VAR_26))
  goto res_create_fail;

 VAR_28->caps.max_planes = VAR_29->base.pipe_count;

 for (VAR_30 = 0; VAR_30 < VAR_28->caps.max_planes; ++VAR_30)
  VAR_28->caps.planes[VAR_30] = VAR_25;


 FUNC_6(VAR_28);

 FUNC_2(VAR_28->bw_dceip, VAR_28->bw_vbios, VAR_28->ctx->asic_id);

 FUNC_1(VAR_28);

 return 1;

res_create_fail:
 FUNC_16(VAR_29);
 return 0;
}
