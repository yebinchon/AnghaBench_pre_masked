
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gk104_clk {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct gk104_clk*,int) ;

__attribute__((used)) static u32
FUNC_2(struct gk104_clk *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.subdev.device;
 switch (FUNC_0(VAR_1, 0x1373f4) & 0x0000000f) {
 case 1: return FUNC_1(VAR_0, 0x132020);
 case 2: return FUNC_1(VAR_0, 0x132000);
 default:
  return 0;
 }
}
