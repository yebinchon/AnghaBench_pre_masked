
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gf100_gr {int tpc_total; TYPE_4__* func; int fuc_sw_nonctx; TYPE_3__ base; } ;
struct TYPE_8__ {int (* set_hww_esr_report_mask ) (struct gf100_gr*) ;int (* init_rop_active_fbps ) (struct gf100_gr*) ;int (* init_zcull ) (struct gf100_gr*) ;int (* init_gpc_mmu ) (struct gf100_gr*) ;} ;


 int FUNC_0 (struct gf100_gr*) ;
 int FUNC_1 (struct gf100_gr*,int ) ;
 int FUNC_2 (struct gf100_gr*) ;
 int FUNC_3 (struct gf100_gr*) ;
 int FUNC_4 (struct gf100_gr*) ;
 int FUNC_5 (struct nvkm_device*,int,int,int) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;
 int FUNC_7 (struct gf100_gr*) ;
 int FUNC_8 (struct gf100_gr*) ;
 int FUNC_9 (struct gf100_gr*) ;
 int FUNC_10 (struct gf100_gr*) ;

int
FUNC_11(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 int VAR_2;


 FUNC_6(VAR_1, 0x40802c, 0x1);

 FUNC_1(VAR_0, VAR_0->fuc_sw_nonctx);

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;


 if (VAR_0->func->init_gpc_mmu)
  VAR_0->func->init_gpc_mmu(VAR_0);


 FUNC_5(VAR_1, 0x503018, 0x1, 0x1);


 VAR_0->func->init_zcull(VAR_0);

 VAR_0->func->init_rop_active_fbps(VAR_0);


 FUNC_6(VAR_1, 0x400500, 0x00010001);


 FUNC_6(VAR_1, 0x400100, 0xffffffff);
 FUNC_6(VAR_1, 0x40013c, 0xffffffff);


 FUNC_6(VAR_1, 0x409c24, 0x000f0000);


 FUNC_6(VAR_1, 0x404000, 0xc0000000);
 FUNC_6(VAR_1, 0x404600, 0xc0000000);

 if (VAR_0->func->set_hww_esr_report_mask)
  VAR_0->func->set_hww_esr_report_mask(VAR_0);


 FUNC_6(VAR_1, 0x419d0c, 0x2);
 FUNC_6(VAR_1, 0x41ac94, (((1 << VAR_0->tpc_total) - 1) & 0xff) << 16);


 FUNC_6(VAR_1, 0x400108, 0xffffffff);
 FUNC_6(VAR_1, 0x400138, 0xffffffff);
 FUNC_6(VAR_1, 0x400118, 0xffffffff);
 FUNC_6(VAR_1, 0x400130, 0xffffffff);
 FUNC_6(VAR_1, 0x40011c, 0xffffffff);
 FUNC_6(VAR_1, 0x400134, 0xffffffff);

 FUNC_3(VAR_0);

 return FUNC_0(VAR_0);
}
