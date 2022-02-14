
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct gf100_clk*,int,int,int) ;

__attribute__((used)) static u32
FUNC_3(struct gf100_clk *VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_2->base.subdev.device;
 u32 VAR_5 = FUNC_1(VAR_4, VAR_3 + 0x00);
 u32 VAR_6 = FUNC_1(VAR_4, VAR_3 + 0x04);
 u32 VAR_7 = (VAR_6 & 0x003f0000) >> 16;
 u32 VAR_8 = (VAR_6 & 0x0000ff00) >> 8;
 u32 VAR_9 = (VAR_6 & 0x000000ff) >> 0;
 u32 VAR_10;

 if (!(VAR_5 & 0x00000001))
  return 0;

 switch (VAR_3) {
 case 0x00e800:
 case 0x00e820:
  VAR_10 = VAR_4->crystal;
  VAR_7 = 1;
  break;
 case 0x132000:
  VAR_10 = FUNC_0(&VAR_2->base, VAR_0);
  break;
 case 0x132020:
  VAR_10 = FUNC_0(&VAR_2->base, VAR_1);
  break;
 case 0x137000:
 case 0x137020:
 case 0x137040:
 case 0x1370e0:
  VAR_10 = FUNC_2(VAR_2, (VAR_3 & 0xff) / 0x20, 0x137120, 0x137140);
  break;
 default:
  return 0;
 }

 return VAR_10 * VAR_8 / VAR_9 / VAR_7;
}
