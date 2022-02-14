
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_therm {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct gk104_therm {TYPE_3__* idle_filter; struct gk104_clkgate_engine_info* clkgate_order; TYPE_2__ base; } ;
struct gk104_clkgate_engine_info {scalar_t__ engine; scalar_t__ offset; } ;
struct TYPE_6__ {int hubmmu; int fecs; } ;


 scalar_t__ VAR_0 ;
 struct gk104_therm* FUNC_0 (struct nvkm_therm*) ;
 int FUNC_1 (struct nvkm_device*,scalar_t__) ;
 int FUNC_2 (struct nvkm_device*,scalar_t__,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int ) ;

void
FUNC_4(struct nvkm_therm *VAR_1)
{
 struct gk104_therm *VAR_2 = FUNC_0(VAR_1);
 struct nvkm_device *VAR_3 = VAR_2->base.subdev.device;
 const struct gk104_clkgate_engine_info *VAR_4 = VAR_2->clkgate_order;
 int VAR_5;


 for (VAR_5 = 0; VAR_4[VAR_5].engine != VAR_0; VAR_5++) {
  if (!FUNC_1(VAR_3, VAR_4[VAR_5].engine))
   continue;

  FUNC_2(VAR_3, 0x20200 + VAR_4[VAR_5].offset, 0xff00, 0x4500);
 }


 FUNC_3(VAR_3, 0x020288, VAR_2->idle_filter->fecs);
 FUNC_3(VAR_3, 0x02028c, VAR_2->idle_filter->hubmmu);


 for (VAR_5 = 0; VAR_4[VAR_5].engine != VAR_0; VAR_5++) {
  if (!FUNC_1(VAR_3, VAR_4[VAR_5].engine))
   continue;

  FUNC_2(VAR_3, 0x20200 + VAR_4[VAR_5].offset, 0x00ff, 0x0045);
 }
}
