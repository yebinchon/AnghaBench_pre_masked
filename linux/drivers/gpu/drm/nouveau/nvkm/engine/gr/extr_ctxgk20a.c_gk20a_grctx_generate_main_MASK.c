
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct gf100_grctx_func {int (* bundle ) (struct gf100_grctx*) ;int (* pagepool ) (struct gf100_grctx*) ;int (* unkn ) (struct gf100_gr*) ;int (* attrib ) (struct gf100_grctx*) ;} ;
struct gf100_grctx {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gf100_gr {int tpc_total; int gpc_nr; int fuc_bundle; int fuc_method; int fuc_sw_ctx; TYPE_4__* func; TYPE_3__ base; } ;
struct TYPE_8__ {struct gf100_grctx_func* grctx; } ;


 int FUNC_0 (struct gf100_gr*,int ) ;
 int FUNC_1 (struct gf100_gr*,int ) ;
 int FUNC_2 (struct gf100_gr*,int ) ;
 int FUNC_3 (struct gf100_gr*) ;
 int FUNC_4 (struct gf100_gr*) ;
 int FUNC_5 (struct nvkm_device*,int,int,int) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;
 int FUNC_7 (struct gf100_grctx*) ;
 int FUNC_8 (struct gf100_gr*) ;
 int FUNC_9 (struct gf100_grctx*) ;
 int FUNC_10 (struct gf100_grctx*) ;

__attribute__((used)) static void
FUNC_11(struct gf100_gr *VAR_0, struct gf100_grctx *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.engine.subdev.device;
 const struct gf100_grctx_func *VAR_3 = VAR_0->func->grctx;
 u32 VAR_4;
 int VAR_5;

 FUNC_1(VAR_0, VAR_0->fuc_sw_ctx);

 FUNC_3(VAR_0);

 VAR_4 = FUNC_5(VAR_2, 0x404154, 0xffffffff, 0x00000000);

 VAR_3->attrib(VAR_1);

 VAR_3->unkn(VAR_0);

 FUNC_4(VAR_0);

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_6(VAR_2, 0x4064d0 + (VAR_5 * 0x04), 0x00000000);

 FUNC_6(VAR_2, 0x405b00, (VAR_0->tpc_total << 8) | VAR_0->gpc_nr);

 FUNC_5(VAR_2, 0x5044b0, 0x08000000, 0x08000000);

 FUNC_3(VAR_0);

 FUNC_6(VAR_2, 0x404154, VAR_4);
 FUNC_3(VAR_0);

 FUNC_2(VAR_0, VAR_0->fuc_method);
 FUNC_3(VAR_0);

 FUNC_0(VAR_0, VAR_0->fuc_bundle);
 VAR_3->pagepool(VAR_1);
 VAR_3->bundle(VAR_1);
}
