
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {TYPE_2__* device; } ;
struct TYPE_4__ {scalar_t__ max_freq; } ;
struct nvbios_pll {int refclk; TYPE_1__ vco2; } ;
struct TYPE_6__ {struct nvkm_subdev subdev; } ;
struct mcp77_clk {TYPE_3__ base; } ;
struct TYPE_5__ {int bios; } ;


 int FUNC_0 (struct nvkm_subdev*,struct nvbios_pll*,int ,int*,int*,int *,int *,int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct nvbios_pll*) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static u32
FUNC_3(struct mcp77_clk *VAR_1, u32 VAR_2,
  u32 VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_1->base.subdev;
 struct nvbios_pll VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7->device->bios, VAR_2, &VAR_8);
 if (VAR_9)
  return 0;

 VAR_8.vco2.max_freq = 0;
 VAR_8.refclk = FUNC_2(&VAR_1->base, VAR_0);
 if (!VAR_8.refclk)
  return 0;

 return FUNC_0(VAR_7, &VAR_8, VAR_3, VAR_4, VAR_5, ((void*)0), ((void*)0), VAR_6);
}
