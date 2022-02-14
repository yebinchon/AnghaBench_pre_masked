
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nv50_clk {TYPE_1__ base; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int) ;
 int FUNC_3 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_4(struct nv50_clk *VAR_2, u32 VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_2->base.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6, VAR_7 = FUNC_1(&VAR_2->base, VAR_0);
 u32 VAR_8 = FUNC_3(VAR_5, 0x00e18c);
 int VAR_9, VAR_10, VAR_11, VAR_12;

 switch (VAR_5->chipset) {
 case 0x50:
 case 0xa0:
  switch (VAR_3) {
  case 0x4020:
  case 0x4028: VAR_12 = !!(VAR_8 & 0x00000004); break;
  case 0x4008: VAR_12 = !!(VAR_8 & 0x00000008); break;
  case 0x4030: VAR_12 = 0; break;
  default:
   FUNC_2(VAR_4, "ref: bad pll %06x\n", VAR_3);
   return 0;
  }

  VAR_6 = FUNC_3(VAR_5, 0x00e81c + (VAR_12 * 0x0c));
  VAR_7 *= (VAR_6 & 0x01000000) ? 2 : 4;
  VAR_9 = (VAR_6 & 0x00070000) >> 16;
  VAR_10 = ((VAR_6 & 0x0000ff00) >> 8) + 1;
  VAR_11 = ((VAR_6 & 0x000000ff) >> 0) + 1;
  break;
 case 0x84:
 case 0x86:
 case 0x92:
  VAR_6 = FUNC_3(VAR_5, 0x00e81c);
  VAR_9 = (VAR_6 & 0x00070000) >> 16;
  VAR_10 = (VAR_6 & 0x0000ff00) >> 8;
  VAR_11 = (VAR_6 & 0x000000ff) >> 0;
  break;
 case 0x94:
 case 0x96:
 case 0x98:
  VAR_8 = FUNC_3(VAR_5, 0x00c050);
  switch (VAR_3) {
  case 0x4020: VAR_8 = (VAR_8 & 0x00000003) >> 0; break;
  case 0x4008: VAR_8 = (VAR_8 & 0x0000000c) >> 2; break;
  case 0x4028: VAR_8 = (VAR_8 & 0x00001800) >> 11; break;
  case 0x4030: VAR_8 = 3; break;
  default:
   FUNC_2(VAR_4, "ref: bad pll %06x\n", VAR_3);
   return 0;
  }

  switch (VAR_8) {
  case 0: VAR_12 = 1; break;
  case 1: return FUNC_1(&VAR_2->base, VAR_0);
  case 2: return FUNC_1(&VAR_2->base, VAR_1);
  case 3: VAR_12 = 0; break;
  }

  VAR_6 = FUNC_3(VAR_5, 0x00e81c + (VAR_12 * 0x28));
  VAR_9 = (FUNC_3(VAR_5, 0x00e824 + (VAR_12 * 0x28)) >> 16) & 7;
  VAR_9 += (VAR_6 & 0x00070000) >> 16;
  VAR_10 = (VAR_6 & 0x0000ff00) >> 8;
  VAR_11 = (VAR_6 & 0x000000ff) >> 0;
  break;
 default:
  FUNC_0();
 }

 if (VAR_11)
  return (VAR_7 * VAR_10 / VAR_11) >> VAR_9;

 return 0;
}
