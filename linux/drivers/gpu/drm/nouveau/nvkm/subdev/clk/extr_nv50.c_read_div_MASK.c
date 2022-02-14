
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int chipset; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv50_clk {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_1(struct nv50_clk *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.subdev.device;
 switch (VAR_1->chipset) {
 case 0x50:
 case 0x84:
 case 0x86:
 case 0x98:
 case 0xa0:
  return FUNC_0(VAR_1, 0x004700);
 case 0x92:
 case 0x94:
 case 0x96:
  return FUNC_0(VAR_1, 0x004800);
 default:
  return 0x00000000;
 }
}
