
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_therm {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gk104_therm {struct gk104_clkgate_engine_info* clkgate_order; TYPE_2__ base; } ;
struct gk104_clkgate_engine_info {scalar_t__ engine; scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 struct gk104_therm* FUNC_0 (struct nvkm_therm*) ;
 int FUNC_1 (struct nvkm_device*,scalar_t__) ;
 int FUNC_2 (struct nvkm_device*,scalar_t__,int,int) ;

void
FUNC_3(struct nvkm_therm *VAR_1, bool VAR_2)
{
 struct gk104_therm *VAR_3 = FUNC_0(VAR_1);
 struct nvkm_device *VAR_4 = VAR_3->base.subdev.device;
 const struct gk104_clkgate_engine_info *VAR_5 = VAR_3->clkgate_order;
 int VAR_6;


 for (VAR_6 = 0; VAR_5[VAR_6].engine != VAR_0; VAR_6++) {
  if (!FUNC_1(VAR_4, VAR_5[VAR_6].engine))
   continue;

  FUNC_2(VAR_4, 0x20200 + VAR_5[VAR_6].offset, 0xff, 0x54);
 }
}
