
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct gm20b_pll {int sdm_din; int base; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct gm20b_clk {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (struct nvkm_device*,int ) ;

__attribute__((used)) static void
FUNC_3(struct gm20b_clk *VAR_3, struct gm20b_pll *VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_3->base.base.subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 u32 VAR_7;

 FUNC_1(&VAR_3->base, &VAR_4->base);
 VAR_7 = FUNC_2(VAR_6, VAR_0);
 VAR_4->sdm_din = (VAR_7 >> VAR_1) &
         FUNC_0(VAR_2);
}
