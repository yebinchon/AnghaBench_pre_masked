
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
struct gf100_clk {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct gf100_clk*,int,int,int) ;
 int FUNC_2 (struct gf100_clk*,int) ;

__attribute__((used)) static u32
FUNC_3(struct gf100_clk *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.subdev.device;
 u32 VAR_3 = FUNC_0(VAR_2, 0x137250 + (VAR_1 * 4));
 u32 VAR_4 = FUNC_0(VAR_2, 0x137100);
 u32 VAR_5, VAR_6;

 if (VAR_4 & (1 << VAR_1)) {
  if (VAR_1 < 7)
   VAR_5 = FUNC_2(VAR_0, 0x137000 + (VAR_1 * 0x20));
  else
   VAR_5 = FUNC_2(VAR_0, 0x1370e0);
  VAR_6 = ((VAR_3 & 0x00003f00) >> 8) + 2;
 } else {
  VAR_5 = FUNC_1(VAR_0, VAR_1, 0x137160, 0x1371d0);
  VAR_6 = ((VAR_3 & 0x0000003f) >> 0) + 2;
 }

 if (VAR_3 & 0x80000000)
  return (VAR_5 * 2) / VAR_6;

 return VAR_5;
}
