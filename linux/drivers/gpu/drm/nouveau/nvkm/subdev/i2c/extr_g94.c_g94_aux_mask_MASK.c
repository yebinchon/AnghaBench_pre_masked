
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_i2c {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

void
FUNC_2(struct nvkm_i2c *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->subdev.device;
 u32 VAR_5 = FUNC_0(VAR_4, 0x00e068), VAR_6;
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if (VAR_2 & (1 << VAR_6)) {
   if (!(VAR_3 & (1 << VAR_6))) {
    VAR_5 &= ~(VAR_1 << (VAR_6 * 4));
    continue;
   }
   VAR_5 |= VAR_1 << (VAR_6 * 4);
  }
 }
 FUNC_1(VAR_4, 0x00e068, VAR_5);
}
