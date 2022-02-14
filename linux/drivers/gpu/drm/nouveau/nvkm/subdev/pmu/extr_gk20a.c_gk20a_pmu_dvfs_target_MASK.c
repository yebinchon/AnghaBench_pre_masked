
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_clk {int dummy; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ subdev; } ;
struct gk20a_pmu {TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_clk* clk; } ;


 int FUNC_0 (struct nvkm_clk*,int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct gk20a_pmu *VAR_0, int *VAR_1)
{
 struct nvkm_clk *VAR_2 = VAR_0->base.subdev.device->clk;

 return FUNC_0(VAR_2, *VAR_1, 0, 0);
}
