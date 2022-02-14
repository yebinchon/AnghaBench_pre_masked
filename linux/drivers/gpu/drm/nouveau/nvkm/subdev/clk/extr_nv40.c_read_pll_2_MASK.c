
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
struct nv40_clk {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_1(struct nv40_clk *VAR_0, u32 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.subdev.device;
 u32 VAR_3 = FUNC_0(VAR_2, VAR_1 + 0x00);
 u32 VAR_4 = FUNC_0(VAR_2, VAR_1 + 0x04);
 int VAR_5 = (VAR_4 & 0xff000000) >> 24;
 int VAR_6 = (VAR_4 & 0x00ff0000) >> 16;
 int VAR_7 = (VAR_4 & 0x0000ff00) >> 8;
 int VAR_8 = (VAR_4 & 0x000000ff) >> 0;
 int VAR_9 = (VAR_3 & 0x00070000) >> 16;
 u32 VAR_10 = 27000, VAR_11 = 0;

 if ((VAR_3 & 0x80000000) && VAR_8) {
  VAR_11 = VAR_10 * VAR_7 / VAR_8;
  if ((VAR_3 & 0x40000100) == 0x40000000) {
   if (VAR_6)
    VAR_11 = VAR_11 * VAR_5 / VAR_6;
   else
    VAR_11 = 0;
  }
 }

 return VAR_11 >> VAR_9;
}
