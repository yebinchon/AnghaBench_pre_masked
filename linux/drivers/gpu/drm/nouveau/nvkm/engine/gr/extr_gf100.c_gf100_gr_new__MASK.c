
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_gr {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct gf100_gr_func {int dummy; } ;
struct gf100_gr {int fuc41ad; int fuc41ac; int fuc409d; int fuc409c; scalar_t__ firmware; struct nvkm_gr base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gf100_gr_func const*,struct nvkm_device*,int,struct gf100_gr*) ;
 scalar_t__ FUNC_1 (struct gf100_gr*,char*,int *) ;
 struct gf100_gr* FUNC_2 (int,int ) ;

int
FUNC_3(const struct gf100_gr_func *VAR_3, struct nvkm_device *VAR_4,
       int VAR_5, struct nvkm_gr **VAR_6)
{
 struct gf100_gr *VAR_7;
 int VAR_8;

 if (!(VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2)))
  return -VAR_1;
 *VAR_6 = &VAR_7->base;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->firmware) {
  if (FUNC_1(VAR_7, "fecs_inst", &VAR_7->fuc409c) ||
      FUNC_1(VAR_7, "fecs_data", &VAR_7->fuc409d) ||
      FUNC_1(VAR_7, "gpccs_inst", &VAR_7->fuc41ac) ||
      FUNC_1(VAR_7, "gpccs_data", &VAR_7->fuc41ad))
   return -VAR_0;
 }

 return 0;
}
