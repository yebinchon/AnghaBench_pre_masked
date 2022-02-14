
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {TYPE_3__* device; } ;
struct TYPE_4__ {scalar_t__ max_freq; } ;
struct nvbios_pll {int refclk; TYPE_1__ vco2; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct nv50_clk {TYPE_2__ base; } ;
struct TYPE_6__ {int bios; } ;


 int FUNC_0 (struct nvkm_subdev*,struct nvbios_pll*,int ,int*,int*,int *,int *,int*) ;
 int FUNC_1 (int ,int ,struct nvbios_pll*) ;
 int FUNC_2 (struct nv50_clk*,int ) ;

__attribute__((used)) static u32
FUNC_3(struct nv50_clk *VAR_0, u32 VAR_1, u32 VAR_2, int *VAR_3, int *VAR_4, int *VAR_5)
{
 struct nvkm_subdev *VAR_6 = &VAR_0->base.subdev;
 struct nvbios_pll VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6->device->bios, VAR_1, &VAR_7);
 if (VAR_8)
  return 0;

 VAR_7.vco2.max_freq = 0;
 VAR_7.refclk = FUNC_2(VAR_0, VAR_1);
 if (!VAR_7.refclk)
  return 0;

 return FUNC_0(VAR_6, &VAR_7, VAR_2, VAR_3, VAR_4, ((void*)0), ((void*)0), VAR_5);
}
