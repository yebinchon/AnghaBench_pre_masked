
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_device {int therm; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gf100_gr {int gpc_nr; int* tpc_nr; int rop_nr; TYPE_4__* func; scalar_t__ fuc_sw_nonctx; TYPE_3__ base; } ;
struct TYPE_8__ {int (* init_4188a4 ) (struct gf100_gr*) ;int (* init_400054 ) (struct gf100_gr*) ;int (* init_shader_exceptions ) (struct gf100_gr*,int,int) ;int (* init_504430 ) (struct gf100_gr*,int,int) ;int (* init_tex_hww_esr ) (struct gf100_gr*,int,int) ;int (* init_ppc_exceptions ) (struct gf100_gr*) ;int (* init_419c9c ) (struct gf100_gr*) ;int (* init_419eb4 ) (struct gf100_gr*) ;int (* init_419cc0 ) (struct gf100_gr*) ;int (* init_sked_hww_esr ) (struct gf100_gr*) ;int (* init_40601c ) (struct gf100_gr*) ;int (* init_ds_hww_esr_2 ) (struct gf100_gr*) ;int (* init_fecs_exceptions ) (struct gf100_gr*) ;int (* init_swdx_pes_mask ) (struct gf100_gr*) ;int (* init_bios_2 ) (struct gf100_gr*) ;int (* init_rop_active_fbps ) (struct gf100_gr*) ;int (* init_num_active_ltcs ) (struct gf100_gr*) ;int (* init_zcull ) (struct gf100_gr*) ;int (* init_vsc_stream_master ) (struct gf100_gr*) ;int (* init_bios ) (struct gf100_gr*) ;scalar_t__ clkgate_pack; int (* init_r405a14 ) (struct gf100_gr*) ;scalar_t__ mmio; int (* init_gpc_mmu ) (struct gf100_gr*) ;int (* init_419bd8 ) (struct gf100_gr*) ;} ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct gf100_gr*) ;
 int FUNC_4 (struct gf100_gr*,scalar_t__) ;
 int FUNC_5 (struct gf100_gr*) ;
 int FUNC_6 (struct gf100_gr*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct nvkm_device*,int,int) ;
 int FUNC_9 (struct gf100_gr*) ;
 int FUNC_10 (struct gf100_gr*) ;
 int FUNC_11 (struct gf100_gr*) ;
 int FUNC_12 (struct gf100_gr*) ;
 int FUNC_13 (struct gf100_gr*) ;
 int FUNC_14 (struct gf100_gr*) ;
 int FUNC_15 (struct gf100_gr*) ;
 int FUNC_16 (struct gf100_gr*) ;
 int FUNC_17 (struct gf100_gr*) ;
 int FUNC_18 (struct gf100_gr*) ;
 int FUNC_19 (struct gf100_gr*,int,int) ;
 int FUNC_20 (struct gf100_gr*) ;
 int FUNC_21 (struct gf100_gr*,int,int) ;
 int FUNC_22 (struct gf100_gr*,int,int) ;
 int FUNC_23 (struct gf100_gr*) ;
 int FUNC_24 (struct gf100_gr*) ;
 int FUNC_25 (struct gf100_gr*) ;
 int FUNC_26 (struct gf100_gr*) ;
 int FUNC_27 (struct gf100_gr*) ;
 int FUNC_28 (struct gf100_gr*) ;
 int FUNC_29 (struct gf100_gr*) ;
 int FUNC_30 (struct gf100_gr*) ;
 int FUNC_31 (struct gf100_gr*) ;

int
FUNC_32(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 int VAR_2, VAR_3, VAR_4;

 if (VAR_0->func->init_419bd8)
  VAR_0->func->init_419bd8(VAR_0);

 VAR_0->func->init_gpc_mmu(VAR_0);

 if (VAR_0->fuc_sw_nonctx)
  FUNC_4(VAR_0, VAR_0->fuc_sw_nonctx);
 else
  FUNC_4(VAR_0, VAR_0->func->mmio);

 FUNC_5(VAR_0);

 if (VAR_0->func->init_r405a14)
  VAR_0->func->init_r405a14(VAR_0);

 if (VAR_0->func->clkgate_pack)
  FUNC_7(VAR_1->therm, VAR_0->func->clkgate_pack);

 if (VAR_0->func->init_bios)
  VAR_0->func->init_bios(VAR_0);

 VAR_0->func->init_vsc_stream_master(VAR_0);
 VAR_0->func->init_zcull(VAR_0);
 VAR_0->func->init_num_active_ltcs(VAR_0);
 if (VAR_0->func->init_rop_active_fbps)
  VAR_0->func->init_rop_active_fbps(VAR_0);
 if (VAR_0->func->init_bios_2)
  VAR_0->func->init_bios_2(VAR_0);
 if (VAR_0->func->init_swdx_pes_mask)
  VAR_0->func->init_swdx_pes_mask(VAR_0);

 FUNC_8(VAR_1, 0x400500, 0x00010001);

 FUNC_8(VAR_1, 0x400100, 0xffffffff);
 FUNC_8(VAR_1, 0x40013c, 0xffffffff);
 FUNC_8(VAR_1, 0x400124, 0x00000002);

 VAR_0->func->init_fecs_exceptions(VAR_0);
 if (VAR_0->func->init_ds_hww_esr_2)
  VAR_0->func->init_ds_hww_esr_2(VAR_0);

 FUNC_8(VAR_1, 0x404000, 0xc0000000);
 FUNC_8(VAR_1, 0x404600, 0xc0000000);
 FUNC_8(VAR_1, 0x408030, 0xc0000000);

 if (VAR_0->func->init_40601c)
  VAR_0->func->init_40601c(VAR_0);

 FUNC_8(VAR_1, 0x404490, 0xc0000000);
 FUNC_8(VAR_1, 0x406018, 0xc0000000);

 if (VAR_0->func->init_sked_hww_esr)
  VAR_0->func->init_sked_hww_esr(VAR_0);

 FUNC_8(VAR_1, 0x405840, 0xc0000000);
 FUNC_8(VAR_1, 0x405844, 0x00ffffff);

 if (VAR_0->func->init_419cc0)
  VAR_0->func->init_419cc0(VAR_0);
 if (VAR_0->func->init_419eb4)
  VAR_0->func->init_419eb4(VAR_0);
 if (VAR_0->func->init_419c9c)
  VAR_0->func->init_419c9c(VAR_0);

 if (VAR_0->func->init_ppc_exceptions)
  VAR_0->func->init_ppc_exceptions(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_0->gpc_nr; VAR_2++) {
  FUNC_8(VAR_1, FUNC_0(VAR_2, 0x0420), 0xc0000000);
  FUNC_8(VAR_1, FUNC_0(VAR_2, 0x0900), 0xc0000000);
  FUNC_8(VAR_1, FUNC_0(VAR_2, 0x1028), 0xc0000000);
  FUNC_8(VAR_1, FUNC_0(VAR_2, 0x0824), 0xc0000000);
  for (VAR_3 = 0; VAR_3 < VAR_0->tpc_nr[VAR_2]; VAR_3++) {
   FUNC_8(VAR_1, FUNC_2(VAR_2, VAR_3, 0x508), 0xffffffff);
   FUNC_8(VAR_1, FUNC_2(VAR_2, VAR_3, 0x50c), 0xffffffff);
   if (VAR_0->func->init_tex_hww_esr)
    VAR_0->func->init_tex_hww_esr(VAR_0, VAR_2, VAR_3);
   FUNC_8(VAR_1, FUNC_2(VAR_2, VAR_3, 0x084), 0xc0000000);
   if (VAR_0->func->init_504430)
    VAR_0->func->init_504430(VAR_0, VAR_2, VAR_3);
   VAR_0->func->init_shader_exceptions(VAR_0, VAR_2, VAR_3);
  }
  FUNC_8(VAR_1, FUNC_0(VAR_2, 0x2c90), 0xffffffff);
  FUNC_8(VAR_1, FUNC_0(VAR_2, 0x2c94), 0xffffffff);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->rop_nr; VAR_4++) {
  FUNC_8(VAR_1, FUNC_1(VAR_4, 0x144), 0x40000000);
  FUNC_8(VAR_1, FUNC_1(VAR_4, 0x070), 0x40000000);
  FUNC_8(VAR_1, FUNC_1(VAR_4, 0x204), 0xffffffff);
  FUNC_8(VAR_1, FUNC_1(VAR_4, 0x208), 0xffffffff);
 }

 FUNC_8(VAR_1, 0x400108, 0xffffffff);
 FUNC_8(VAR_1, 0x400138, 0xffffffff);
 FUNC_8(VAR_1, 0x400118, 0xffffffff);
 FUNC_8(VAR_1, 0x400130, 0xffffffff);
 FUNC_8(VAR_1, 0x40011c, 0xffffffff);
 FUNC_8(VAR_1, 0x400134, 0xffffffff);

 if (VAR_0->func->init_400054)
  VAR_0->func->init_400054(VAR_0);

 FUNC_6(VAR_0);

 if (VAR_0->func->init_4188a4)
  VAR_0->func->init_4188a4(VAR_0);

 return FUNC_3(VAR_0);
}
