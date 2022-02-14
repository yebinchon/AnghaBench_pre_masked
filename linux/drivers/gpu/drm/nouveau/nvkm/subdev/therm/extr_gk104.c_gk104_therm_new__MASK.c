
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_therm_func {int dummy; } ;
struct nvkm_therm {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct gk104_therm {struct gf100_idle_filter const* idle_filter; struct gk104_clkgate_engine_info const* clkgate_order; struct nvkm_therm base; } ;
struct gk104_clkgate_engine_info {int dummy; } ;
struct gf100_idle_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gk104_therm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_therm*,struct nvkm_device*,int,struct nvkm_therm_func const*) ;

__attribute__((used)) static int
FUNC_2(const struct nvkm_therm_func *VAR_2,
   struct nvkm_device *VAR_3,
   int VAR_4,
   const struct gk104_clkgate_engine_info *VAR_5,
   const struct gf100_idle_filter *VAR_6,
   struct nvkm_therm **VAR_7)
{
 struct gk104_therm *VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);

 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_8->base, VAR_3, VAR_4, VAR_2);
 *VAR_7 = &VAR_8->base;
 VAR_8->clkgate_order = VAR_5;
 VAR_8->idle_filter = VAR_6;

 return 0;
}
