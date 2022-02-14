
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nvkm_device {int crystal; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gk104_clk {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct gk104_clk*,int,int,int) ;

__attribute__((used)) static u32
FUNC_2(struct gk104_clk *VAR_0, u32 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.subdev.device;
 u32 VAR_3 = FUNC_0(VAR_2, VAR_1 + 0x00);
 u32 VAR_4 = FUNC_0(VAR_2, VAR_1 + 0x04);
 u32 VAR_5 = (VAR_4 & 0x003f0000) >> 16;
 u32 VAR_6 = (VAR_4 & 0x0000ff00) >> 8;
 u32 VAR_7 = (VAR_4 & 0x000000ff) >> 0;
 u32 VAR_8;
 u16 VAR_9 = 0xf000;

 if (!(VAR_3 & 0x00000001))
  return 0;

 switch (VAR_1) {
 case 0x00e800:
 case 0x00e820:
  VAR_8 = VAR_2->crystal;
  VAR_5 = 1;
  break;
 case 0x132000:
  VAR_8 = FUNC_2(VAR_0, 0x132020);
  VAR_5 = (VAR_4 & 0x10000000) ? 2 : 1;
  break;
 case 0x132020:
  VAR_8 = FUNC_1(VAR_0, 0, 0x137320, 0x137330);
  VAR_9 = FUNC_0(VAR_2, VAR_1 + 0x10) >> 16;
  break;
 case 0x137000:
 case 0x137020:
 case 0x137040:
 case 0x1370e0:
  VAR_8 = FUNC_1(VAR_0, (VAR_1 & 0xff) / 0x20, 0x137120, 0x137140);
  break;
 default:
  return 0;
 }

 if (VAR_5 == 0)
  VAR_5 = 1;

 VAR_8 = (VAR_8 * VAR_6) + (((u16)(VAR_9 + 4096) * VAR_8) >> 13);
 return VAR_8 / (VAR_7 * VAR_5);
}
