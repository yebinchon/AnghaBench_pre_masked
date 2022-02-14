
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_gr {int dummy; } ;
struct nvkm_device {int secboot; } ;
struct gf100_gr_func {int dummy; } ;
struct gf100_gr {int fuc_method; int fuc_bundle; int fuc_sw_ctx; int fuc_sw_nonctx; int fuc41ad; int fuc41ac; int fuc409d; int fuc409c; struct nvkm_gr base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gf100_gr_func const*,struct nvkm_device*,int,struct gf100_gr*) ;
 int FUNC_1 (struct gf100_gr*,char*,int *) ;
 int FUNC_2 (struct gf100_gr*,char*,int *) ;
 int FUNC_3 (struct gf100_gr*,char*,int *) ;
 int FUNC_4 (struct gf100_gr*,char*,int *) ;
 struct gf100_gr* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(const struct gf100_gr_func *VAR_4, struct nvkm_device *VAR_5,
       int VAR_6, struct nvkm_gr **VAR_7)
{
 struct gf100_gr *VAR_8;
 int VAR_9;

 if (!(VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 *VAR_7 = &VAR_8->base;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_8);
 if (VAR_9)
  return VAR_9;


 if (!FUNC_6(VAR_5->secboot,
         VAR_2)) {
  if ((VAR_9 = FUNC_1(VAR_8, "gr/fecs_inst", &VAR_8->fuc409c)) ||
      (VAR_9 = FUNC_1(VAR_8, "gr/fecs_data", &VAR_8->fuc409d)))
   return VAR_9;
 }
 if (!FUNC_6(VAR_5->secboot,
         VAR_3)) {
  if ((VAR_9 = FUNC_1(VAR_8, "gr/gpccs_inst", &VAR_8->fuc41ac)) ||
      (VAR_9 = FUNC_1(VAR_8, "gr/gpccs_data", &VAR_8->fuc41ad)))
   return VAR_9;
 }

 if ((VAR_9 = FUNC_3(VAR_8, "gr/sw_nonctx", &VAR_8->fuc_sw_nonctx)) ||
     (VAR_9 = FUNC_2(VAR_8, "gr/sw_ctx", &VAR_8->fuc_sw_ctx)) ||
     (VAR_9 = FUNC_3(VAR_8, "gr/sw_bundle_init", &VAR_8->fuc_bundle)) ||
     (VAR_9 = FUNC_4(VAR_8, "gr/sw_method_init", &VAR_8->fuc_method)))
  return VAR_9;

 return 0;
}
