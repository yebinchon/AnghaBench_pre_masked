
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
struct gt215_clk {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct gt215_clk*,int,int) ;

__attribute__((used)) static u32
FUNC_2(struct gt215_clk *VAR_0, int VAR_1, u32 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->base.subdev.device;
 u32 VAR_4 = FUNC_0(VAR_3, VAR_2 + 0);
 u32 VAR_5 = 0, VAR_6 = 1, VAR_7 = 1, VAR_8 = 1;
 u32 VAR_9;

 if (!(VAR_4 & 0x00000008)) {
  if (VAR_4 & 0x00000001) {
   u32 VAR_10 = FUNC_0(VAR_3, VAR_2 + 4);
   VAR_8 = (VAR_10 & 0x000000ff) >> 0;
   VAR_7 = (VAR_10 & 0x0000ff00) >> 8;
   VAR_6 = (VAR_10 & 0x003f0000) >> 16;




   if ((VAR_2 & 0x00ff00) == 0x00e800)
    VAR_6 = 1;

   VAR_5 = FUNC_1(VAR_0, 0x00 + VAR_1, 0);
  }
 } else {
  VAR_5 = FUNC_1(VAR_0, 0x10 + VAR_1, 0);
 }

 VAR_9 = VAR_8 * VAR_6;

 if (!VAR_9)
  return 0;

 return VAR_5 * VAR_7 / VAR_9;
}
