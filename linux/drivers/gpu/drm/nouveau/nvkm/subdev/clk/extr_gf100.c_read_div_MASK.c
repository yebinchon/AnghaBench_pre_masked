
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
struct gf100_clk {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct gf100_clk*,int) ;

__attribute__((used)) static u32
FUNC_2(struct gf100_clk *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->base.subdev.device;
 u32 VAR_5 = FUNC_0(VAR_4, VAR_2 + (VAR_1 * 4));
 u32 VAR_6, VAR_7, VAR_8 = 2;

 switch (VAR_5 & 0x00000003) {
 case 0:
  if ((VAR_5 & 0x00030000) != 0x00030000)
   return VAR_4->crystal;
  return 108000;
 case 2:
  return 100000;
 case 3:
  VAR_6 = FUNC_1(VAR_0, VAR_2 + (VAR_1 * 4));


  if (VAR_1 <= 2) {
   VAR_7 = FUNC_0(VAR_4, VAR_3 + (VAR_1 * 4));

   if (VAR_7 & 0x80000000) {
    if (VAR_5 & 0x100)
     VAR_7 >>= 8;

    VAR_8 = (VAR_7 & 0x3f) + 2;
   }
  }

  return (VAR_6 * 2) / VAR_8;
 default:
  return 0;
 }
}
