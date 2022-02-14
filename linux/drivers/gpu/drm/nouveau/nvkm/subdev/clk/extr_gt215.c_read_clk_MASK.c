
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int chipset; int crystal; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_3__ {TYPE_2__ subdev; } ;
struct gt215_clk {TYPE_1__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct gt215_clk*,int) ;

__attribute__((used)) static u32
FUNC_2(struct gt215_clk *VAR_0, int VAR_1, bool VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->base.subdev.device;
 u32 VAR_4, VAR_5, VAR_6;


 if (VAR_1 >= 0x40) {
  if (VAR_3->chipset == 0xaf) {

   return FUNC_0(VAR_3, 0x00471c) * 1000;
  }

  return VAR_3->crystal;
 }

 VAR_4 = FUNC_0(VAR_3, 0x4120 + (VAR_1 * 4));
 if (!VAR_2 && !(VAR_4 & 0x00000100))
  return 0;


 if (VAR_4 & 0x00000400)
  return 108000;


 switch (VAR_4 & 0x00003000) {
 case 0x00000000:
  if (!(VAR_4 & 0x00000200))
   return VAR_3->crystal;
  return 0;
 case 0x00002000:
  if (VAR_4 & 0x00000040)
   return 108000;
  return 100000;
 case 0x00003000:

  if (!(VAR_4 & 0x00000001))
   return 0;

  VAR_6 = FUNC_1(VAR_0, VAR_1);
  VAR_5 = ((VAR_4 & 0x003f0000) >> 16) + 2;
  return (VAR_6 * 2) / VAR_5;
 default:
  return 0;
 }
}
