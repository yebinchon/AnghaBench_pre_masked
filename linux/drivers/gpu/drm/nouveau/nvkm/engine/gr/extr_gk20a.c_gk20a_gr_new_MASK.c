
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_gr {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct gf100_gr {int fuc_method; int fuc_bundle; int fuc_sw_ctx; int fuc_sw_nonctx; int fuc41ad; int fuc41ac; int fuc409d; int fuc409c; struct nvkm_gr base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct nvkm_device*,int,struct gf100_gr*) ;
 scalar_t__ FUNC_1 (struct gf100_gr*,char*,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct gf100_gr*,char*,int *) ;
 int FUNC_3 (struct gf100_gr*,char*,int *) ;
 int FUNC_4 (struct gf100_gr*,char*,int *) ;
 struct gf100_gr* FUNC_5 (int,int ) ;

int
FUNC_6(struct nvkm_device *VAR_4, int VAR_5, struct nvkm_gr **VAR_6)
{
 struct gf100_gr *VAR_7;
 int VAR_8;

 if (!(VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2)))
  return -VAR_1;
 *VAR_6 = &VAR_7->base;

 VAR_8 = FUNC_0(&VAR_3, VAR_4, VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (FUNC_1(VAR_7, "fecs_inst", &VAR_7->fuc409c) ||
     FUNC_1(VAR_7, "fecs_data", &VAR_7->fuc409d) ||
     FUNC_1(VAR_7, "gpccs_inst", &VAR_7->fuc41ac) ||
     FUNC_1(VAR_7, "gpccs_data", &VAR_7->fuc41ad))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7, "sw_nonctx", &VAR_7->fuc_sw_nonctx);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, "sw_ctx", &VAR_7->fuc_sw_ctx);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_7, "sw_bundle_init", &VAR_7->fuc_bundle);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_7, "sw_method_init", &VAR_7->fuc_method);
 if (VAR_8)
  return VAR_8;

 return 0;
}
