
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int crystal; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gt215_clk {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct gt215_clk*,int,int) ;

__attribute__((used)) static u32
FUNC_2(struct gt215_clk *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.subdev.device;
 u32 VAR_3 = FUNC_0(VAR_2, 0x4120 + (VAR_1 * 4));

 switch (VAR_3 & 0x00000030) {
 case 0x00000000:
  return VAR_2->crystal;
 case 0x00000020:
  return FUNC_1(VAR_0, 0x41, 0x00e820);
 case 0x00000030:
  return FUNC_1(VAR_0, 0x42, 0x00e8a0);
 default:
  return 0;
 }
}
