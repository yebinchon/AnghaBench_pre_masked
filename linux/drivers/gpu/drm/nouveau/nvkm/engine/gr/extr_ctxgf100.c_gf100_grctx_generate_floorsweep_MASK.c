
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct gf100_grctx_func {int (* smid_config ) (struct gf100_gr*) ;int (* tpc_mask ) (struct gf100_gr*) ;int (* r419f78 ) (struct gf100_gr*) ;int (* gpc_tpc_nr ) (struct gf100_gr*) ;int (* r406500 ) (struct gf100_gr*) ;int (* dist_skip_table ) (struct gf100_gr*) ;int (* max_ways_evict ) (struct gf100_gr*) ;int (* alpha_beta_tables ) (struct gf100_gr*) ;int (* rop_mapping ) (struct gf100_gr*) ;int (* r4060a8 ) (struct gf100_gr*) ;int (* tpc_nr ) (struct gf100_gr*,int ) ;int (* sm_id ) (struct gf100_gr*,int ,int ,int) ;} ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;
struct gf100_gr {int sm_nr; int gpc_nr; int* tpc_nr; TYPE_5__* sm; TYPE_4__* func; TYPE_3__ base; } ;
struct TYPE_10__ {int gpc; int tpc; } ;
struct TYPE_9__ {struct gf100_grctx_func* grctx; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;
 int FUNC_1 (struct gf100_gr*,int ,int ,int) ;
 int FUNC_2 (struct gf100_gr*) ;
 int FUNC_3 (struct gf100_gr*) ;
 int FUNC_4 (struct gf100_gr*) ;
 int FUNC_5 (struct gf100_gr*,int ) ;
 int FUNC_6 (struct gf100_gr*) ;
 int FUNC_7 (struct gf100_gr*) ;
 int FUNC_8 (struct gf100_gr*) ;
 int FUNC_9 (struct gf100_gr*) ;
 int FUNC_10 (struct gf100_gr*) ;
 int FUNC_11 (struct gf100_gr*) ;
 int FUNC_12 (struct gf100_gr*) ;

void
FUNC_13(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 const struct gf100_grctx_func *VAR_2 = VAR_0->func->grctx;
 int VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_0->sm_nr; VAR_4++) {
  VAR_2->sm_id(VAR_0, VAR_0->sm[VAR_4].gpc, VAR_0->sm[VAR_4].tpc, VAR_4);
  if (VAR_2->tpc_nr)
   VAR_2->tpc_nr(VAR_0, VAR_0->sm[VAR_4].gpc);
 }

 for (VAR_3 = 0, VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  for (VAR_7 = 0, VAR_6 = 0; VAR_6 < 8 && VAR_3 < VAR_0->gpc_nr; VAR_6++, VAR_3++)
   VAR_7 |= VAR_0->tpc_nr[VAR_3] << (VAR_6 * 4);
  FUNC_0(VAR_1, 0x406028 + (VAR_5 * 4), VAR_7);
  FUNC_0(VAR_1, 0x405870 + (VAR_5 * 4), VAR_7);
 }

 if (VAR_2->r4060a8)
  VAR_2->r4060a8(VAR_0);

 VAR_2->rop_mapping(VAR_0);

 if (VAR_2->alpha_beta_tables)
  VAR_2->alpha_beta_tables(VAR_0);
 if (VAR_2->max_ways_evict)
  VAR_2->max_ways_evict(VAR_0);
 if (VAR_2->dist_skip_table)
  VAR_2->dist_skip_table(VAR_0);
 if (VAR_2->r406500)
  VAR_2->r406500(VAR_0);
 if (VAR_2->gpc_tpc_nr)
  VAR_2->gpc_tpc_nr(VAR_0);
 if (VAR_2->r419f78)
  VAR_2->r419f78(VAR_0);
 if (VAR_2->tpc_mask)
  VAR_2->tpc_mask(VAR_0);
 if (VAR_2->smid_config)
  VAR_2->smid_config(VAR_0);
}
