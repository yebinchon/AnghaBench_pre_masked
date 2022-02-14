
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
struct mcp77_clk {TYPE_2__ base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_2(struct mcp77_clk *VAR_1, u32 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->base.subdev.device;
 u32 VAR_4 = FUNC_1(VAR_3, VAR_2 + 0);
 u32 VAR_5 = FUNC_1(VAR_3, VAR_2 + 4);
 u32 VAR_6 = FUNC_0(&VAR_1->base, VAR_0);
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 int VAR_9, VAR_10;

 switch (VAR_2){
 case 0x4020:
  VAR_7 = 1 << ((FUNC_1(VAR_3, 0x4070) & 0x000f0000) >> 16);
  break;
 case 0x4028:
  VAR_7 = (FUNC_1(VAR_3, 0x4040) & 0x000f0000) >> 16;
  break;
 default:
  break;
 }

 VAR_9 = (VAR_5 & 0x0000ff00) >> 8;
 VAR_10 = (VAR_5 & 0x000000ff);
 if ((VAR_4 & 0x80000000) && VAR_10) {
  VAR_8 = VAR_6 * VAR_9 / VAR_10;
  VAR_8 = VAR_8 / VAR_7;
 }

 return VAR_8;
}
