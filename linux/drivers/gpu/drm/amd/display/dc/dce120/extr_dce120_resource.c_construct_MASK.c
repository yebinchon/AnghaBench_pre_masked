
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct resource_create_funcs {int dummy; } ;
struct irq_service_init_data {struct dc_context* ctx; } ;
struct TYPE_7__ {int pipe_count; int timing_generator_count; unsigned int clk_src_count; int ** sw_i2cs; int ** hw_i2cs; int ** engines; TYPE_3__* res_cap; int ** opps; int ** transforms; int ** ipps; int ** mis; int ** timing_generators; int irqs; int * abm; int * dmcu; int ** clock_sources; void* dp_clock_source; int underlay_pipe_index; int * funcs; } ;
struct dce110_resource_pool {TYPE_2__ base; } ;
struct TYPE_10__ {int hw_internal_rev; } ;
struct dc_context {TYPE_5__ asic_id; TYPE_4__* dc_bios; } ;
struct TYPE_6__ {int max_downscale_ratio; int i2c_speed_in_khz; int max_cursor_size; int dual_link_dvi; int psp_setup_panel_mode; int max_planes; int * planes; } ;
struct dc {struct dc_context* ctx; int bw_vbios; int bw_dceip; TYPE_1__ caps; int debug; } ;
struct TYPE_9__ {int * regs; } ;
struct TYPE_8__ {int num_timing_generator; unsigned int num_ddc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
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
 int FUNC_2 (struct dc*) ;
 int FUNC_3 (int ,int ,TYPE_5__) ;
 int * VAR_19 ;
 int FUNC_4 (struct irq_service_init_data*) ;
 int * FUNC_5 (struct dc_context*,unsigned int) ;
 void* FUNC_6 (struct dc_context*,TYPE_4__*,int ,int *,int) ;
 int FUNC_7 (struct dc*) ;
 int * FUNC_8 (struct dc_context*,unsigned int) ;
 int * FUNC_9 (struct dc_context*,unsigned int) ;
 int * FUNC_10 (struct dc_context*,unsigned int) ;
 int * FUNC_11 (struct dc_context*,unsigned int) ;
 int VAR_20 ;
 int * VAR_21 ;
 int * FUNC_12 (struct dc_context*,unsigned int,int *) ;
 int * FUNC_13 (struct dc_context*,unsigned int) ;
 struct resource_create_funcs VAR_22 ;
 int * FUNC_14 (struct dc_context*,int *,int *,int *) ;
 int * FUNC_15 (struct dc_context*,int *,int *,int *) ;
 int VAR_23 ;
 int FUNC_16 (struct dce110_resource_pool*) ;
 int FUNC_17 (char*,...) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_18 (struct dc_context*) ;
 TYPE_3__ VAR_28 ;
 struct resource_create_funcs VAR_29 ;
 int FUNC_19 (int ,struct dc*,TYPE_2__*,struct resource_create_funcs const*) ;

__attribute__((used)) static bool FUNC_20(
 uint8_t VAR_30,
 struct dc *VAR_31,
 struct dce110_resource_pool *VAR_32)
{
 unsigned int VAR_33;
 int VAR_34;
 struct dc_context *VAR_35 = VAR_31->ctx;
 struct irq_service_init_data VAR_36;
 static const struct resource_create_funcs *VAR_37;
 bool VAR_38 = FUNC_0(VAR_35->asic_id.hw_internal_rev);
 uint32_t VAR_39;

 VAR_35->dc_bios->regs = &VAR_18;

 VAR_32->base.res_cap = &VAR_28;
 VAR_32->base.funcs = &VAR_20;


 VAR_32->base.pipe_count = VAR_28.num_timing_generator;
 VAR_32->base.timing_generator_count = VAR_32->base.res_cap->num_timing_generator;
 VAR_32->base.underlay_pipe_index = VAR_14;

 VAR_31->caps.max_downscale_ratio = 200;
 VAR_31->caps.i2c_speed_in_khz = 100;
 VAR_31->caps.max_cursor_size = 128;
 VAR_31->caps.dual_link_dvi = 1;
 VAR_31->caps.psp_setup_panel_mode = 1;

 VAR_31->debug = VAR_23;





 VAR_32->base.clock_sources[VAR_7] =
   FUNC_6(VAR_35, VAR_35->dc_bios,
    VAR_0,
    &VAR_19[0], 0);
 VAR_32->base.clock_sources[VAR_8] =
   FUNC_6(VAR_35, VAR_35->dc_bios,
    VAR_1,
    &VAR_19[1], 0);
 VAR_32->base.clock_sources[VAR_9] =
   FUNC_6(VAR_35, VAR_35->dc_bios,
    VAR_2,
    &VAR_19[2], 0);
 VAR_32->base.clock_sources[VAR_10] =
   FUNC_6(VAR_35, VAR_35->dc_bios,
    VAR_3,
    &VAR_19[3], 0);
 VAR_32->base.clock_sources[VAR_11] =
   FUNC_6(VAR_35, VAR_35->dc_bios,
    VAR_4,
    &VAR_19[4], 0);
 VAR_32->base.clock_sources[VAR_12] =
   FUNC_6(VAR_35, VAR_35->dc_bios,
    VAR_5,
    &VAR_19[5], 0);
 VAR_32->base.clk_src_count = VAR_13;

 VAR_32->base.dp_clock_source =
   FUNC_6(VAR_35, VAR_35->dc_bios,
    VAR_6,
    &VAR_19[0], 1);

 for (VAR_33 = 0; VAR_33 < VAR_32->base.clk_src_count; VAR_33++) {
  if (VAR_32->base.clock_sources[VAR_33] == ((void*)0)) {
   FUNC_17("DC: failed to create clock sources!\n");
   FUNC_1();
   goto clk_src_create_fail;
  }
 }

 VAR_32->base.dmcu = FUNC_15(VAR_35,
   &VAR_25,
   &VAR_26,
   &VAR_24);
 if (VAR_32->base.dmcu == ((void*)0)) {
  FUNC_17("DC: failed to create dmcu!\n");
  FUNC_1();
  goto res_create_fail;
 }

 VAR_32->base.abm = FUNC_14(VAR_35,
   &VAR_16,
   &VAR_17,
   &VAR_15);
 if (VAR_32->base.abm == ((void*)0)) {
  FUNC_17("DC: failed to create abm!\n");
  FUNC_1();
  goto res_create_fail;
 }


 VAR_36.ctx = VAR_31->ctx;
 VAR_32->base.irqs = FUNC_4(&VAR_36);
 if (!VAR_32->base.irqs)
  goto irqs_create_fail;


 if (VAR_38)
  VAR_39 = FUNC_18(VAR_35);


 VAR_34 = 0;
 for (VAR_33 = 0; VAR_33 < VAR_32->base.pipe_count; VAR_33++) {
  if (VAR_38) {
   if ((VAR_39 & (1 << VAR_33)) != 0) {
    FUNC_17("DC: skip invalid pipe %d!\n", VAR_33);
    continue;
   }
  }

  VAR_32->base.timing_generators[VAR_34] =
    FUNC_12(
     VAR_35,
     VAR_33,
     &VAR_21[VAR_33]);
  if (VAR_32->base.timing_generators[VAR_34] == ((void*)0)) {
   FUNC_1();
   FUNC_17("DC: failed to create tg!\n");
   goto controller_create_fail;
  }

  VAR_32->base.mis[VAR_34] = FUNC_10(VAR_35, VAR_33);

  if (VAR_32->base.mis[VAR_34] == ((void*)0)) {
   FUNC_1();
   FUNC_17(
    "DC: failed to create memory input!\n");
   goto controller_create_fail;
  }

  VAR_32->base.ipps[VAR_34] = FUNC_9(VAR_35, VAR_33);
  if (VAR_32->base.ipps[VAR_33] == ((void*)0)) {
   FUNC_1();
   FUNC_17(
    "DC: failed to create input pixel processor!\n");
   goto controller_create_fail;
  }

  VAR_32->base.transforms[VAR_34] = FUNC_13(VAR_35, VAR_33);
  if (VAR_32->base.transforms[VAR_33] == ((void*)0)) {
   FUNC_1();
   FUNC_17(
    "DC: failed to create transform!\n");
   goto res_create_fail;
  }

  VAR_32->base.opps[VAR_34] = FUNC_11(
   VAR_35,
   VAR_33);
  if (VAR_32->base.opps[VAR_34] == ((void*)0)) {
   FUNC_1();
   FUNC_17(
    "DC: failed to create output pixel processor!\n");
  }


  VAR_34++;
 }

 for (VAR_33 = 0; VAR_33 < VAR_32->base.res_cap->num_ddc; VAR_33++) {
  VAR_32->base.engines[VAR_33] = FUNC_5(VAR_35, VAR_33);
  if (VAR_32->base.engines[VAR_33] == ((void*)0)) {
   FUNC_1();
   FUNC_17(
    "DC:failed to create aux engine!!\n");
   goto res_create_fail;
  }
  VAR_32->base.hw_i2cs[VAR_33] = FUNC_8(VAR_35, VAR_33);
  if (VAR_32->base.hw_i2cs[VAR_33] == ((void*)0)) {
   FUNC_1();
   FUNC_17(
    "DC:failed to create i2c engine!!\n");
   goto res_create_fail;
  }
  VAR_32->base.sw_i2cs[VAR_33] = ((void*)0);
 }


 VAR_32->base.pipe_count = VAR_34;
 VAR_32->base.timing_generator_count = VAR_34;

 if (VAR_38)
  VAR_37 = &VAR_22;
 else
  VAR_37 = &VAR_29;

 if (!FUNC_19(VAR_30, VAR_31, &VAR_32->base, VAR_37))
  goto res_create_fail;


 if (!FUNC_7(VAR_31))
  goto controller_create_fail;

 VAR_31->caps.max_planes = VAR_32->base.pipe_count;

 for (VAR_33 = 0; VAR_33 < VAR_31->caps.max_planes; ++VAR_33)
  VAR_31->caps.planes[VAR_33] = VAR_27;

 FUNC_3(VAR_31->bw_dceip, VAR_31->bw_vbios, VAR_31->ctx->asic_id);

 FUNC_2(VAR_31);

 return 1;

irqs_create_fail:
controller_create_fail:
clk_src_create_fail:
res_create_fail:

 FUNC_16(VAR_32);

 return 0;
}
