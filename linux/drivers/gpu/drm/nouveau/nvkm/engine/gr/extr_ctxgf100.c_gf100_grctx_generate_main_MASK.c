
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
struct gf100_grctx_func {int (* r408840 ) (struct gf100_gr*) ;int (* r419a3c ) (struct gf100_gr*) ;int (* r418e94 ) (struct gf100_gr*) ;int (* r419e00 ) (struct gf100_gr*) ;int (* r419eb0 ) (struct gf100_gr*) ;int (* r418800 ) (struct gf100_gr*) ;int (* r419cb8 ) (struct gf100_gr*) ;scalar_t__ mthd; int (* r400088 ) (struct gf100_gr*,int) ;scalar_t__ sw_veid_bundle_init; scalar_t__ icmd; int (* unkn ) (struct gf100_gr*) ;int (* patch_ltc ) (struct gf100_grctx*) ;int (* attrib ) (struct gf100_grctx*) ;int (* bundle ) (struct gf100_grctx*) ;int (* pagepool ) (struct gf100_grctx*) ;int ppc; int tpc; int gpc_1; int zcull; int gpc_0; int hub; } ;
struct gf100_grctx {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gf100_gr {scalar_t__ fuc_method; scalar_t__ fuc_bundle; int fuc_sw_ctx; TYPE_4__* func; TYPE_3__ base; } ;
struct TYPE_8__ {struct gf100_grctx_func* grctx; } ;


 int FUNC_0 (struct gf100_gr*,scalar_t__) ;
 int FUNC_1 (struct gf100_gr*,int ) ;
 int FUNC_2 (struct gf100_gr*,scalar_t__) ;
 int FUNC_3 (struct gf100_gr*) ;
 int FUNC_4 (struct gf100_gr*) ;
 int FUNC_5 (struct nvkm_device*,int,int,int) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (struct nvkm_device*,int,int ) ;
 int FUNC_8 (struct gf100_grctx*) ;
 int FUNC_9 (struct gf100_gr*) ;
 int FUNC_10 (struct gf100_gr*) ;
 int FUNC_11 (struct gf100_gr*) ;
 int FUNC_12 (struct gf100_gr*) ;
 int FUNC_13 (struct gf100_gr*) ;
 int FUNC_14 (struct gf100_grctx*) ;
 int FUNC_15 (struct gf100_grctx*) ;
 int FUNC_16 (struct gf100_grctx*) ;
 int FUNC_17 (struct gf100_gr*) ;
 int FUNC_18 (struct gf100_gr*,int) ;
 int FUNC_19 (struct gf100_gr*,int) ;
 int FUNC_20 (struct gf100_gr*) ;
 int FUNC_21 (struct gf100_gr*) ;

void
FUNC_22(struct gf100_gr *VAR_0, struct gf100_grctx *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.engine.subdev.device;
 const struct gf100_grctx_func *VAR_3 = VAR_0->func->grctx;
 u32 VAR_4;

 FUNC_6(VAR_2, 0);

 if (!VAR_0->fuc_sw_ctx) {
  FUNC_1(VAR_0, VAR_3->hub);
  FUNC_1(VAR_0, VAR_3->gpc_0);
  FUNC_1(VAR_0, VAR_3->zcull);
  FUNC_1(VAR_0, VAR_3->gpc_1);
  FUNC_1(VAR_0, VAR_3->tpc);
  FUNC_1(VAR_0, VAR_3->ppc);
 } else {
  FUNC_1(VAR_0, VAR_0->fuc_sw_ctx);
 }

 FUNC_3(VAR_0);

 VAR_4 = FUNC_5(VAR_2, 0x404154, 0xffffffff, 0x00000000);

 VAR_3->pagepool(VAR_1);
 VAR_3->bundle(VAR_1);
 VAR_3->attrib(VAR_1);
 if (VAR_3->patch_ltc)
  VAR_3->patch_ltc(VAR_1);
 VAR_3->unkn(VAR_0);

 FUNC_4(VAR_0);

 FUNC_3(VAR_0);

 if (VAR_3->r400088) VAR_3->r400088(VAR_0, 0);
 if (VAR_0->fuc_bundle)
  FUNC_0(VAR_0, VAR_0->fuc_bundle);
 else
  FUNC_0(VAR_0, VAR_3->icmd);
 if (VAR_3->sw_veid_bundle_init)
  FUNC_0(VAR_0, VAR_3->sw_veid_bundle_init);
 if (VAR_3->r400088) VAR_3->r400088(VAR_0, 1);

 FUNC_7(VAR_2, 0x404154, VAR_4);

 if (VAR_0->fuc_method)
  FUNC_2(VAR_0, VAR_0->fuc_method);
 else
  FUNC_2(VAR_0, VAR_3->mthd);
 FUNC_6(VAR_2, 1);

 if (VAR_3->r419cb8)
  VAR_3->r419cb8(VAR_0);
 if (VAR_3->r418800)
  VAR_3->r418800(VAR_0);
 if (VAR_3->r419eb0)
  VAR_3->r419eb0(VAR_0);
 if (VAR_3->r419e00)
  VAR_3->r419e00(VAR_0);
 if (VAR_3->r418e94)
  VAR_3->r418e94(VAR_0);
 if (VAR_3->r419a3c)
  VAR_3->r419a3c(VAR_0);
 if (VAR_3->r408840)
  VAR_3->r408840(VAR_0);
}
