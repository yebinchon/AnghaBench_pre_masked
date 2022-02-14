
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {TYPE_2__* device; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_pll {int refclk; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct gk104_clk {TYPE_1__ base; } ;
struct TYPE_4__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvkm_subdev*,struct nvbios_pll*,int,int*,int *,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int,struct nvbios_pll*) ;
 int FUNC_2 (struct gk104_clk*,int,int,int) ;

__attribute__((used)) static u32
FUNC_3(struct gk104_clk *VAR_0, int VAR_1, u32 VAR_2, u32 *VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_0->base.subdev;
 struct nvkm_bios *VAR_5 = VAR_4->device->bios;
 struct nvbios_pll VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_5, 0x137000 + (VAR_1 * 0x20), &VAR_6);
 if (VAR_10)
  return 0;

 VAR_6.refclk = FUNC_2(VAR_0, VAR_1, 0x137120, 0x137140);
 if (!VAR_6.refclk)
  return 0;

 VAR_10 = FUNC_0(VAR_4, &VAR_6, VAR_2, &VAR_7, ((void*)0), &VAR_8, &VAR_9);
 if (VAR_10 <= 0)
  return 0;

 *VAR_3 = (VAR_9 << 16) | (VAR_7 << 8) | VAR_8;
 return VAR_10;
}
