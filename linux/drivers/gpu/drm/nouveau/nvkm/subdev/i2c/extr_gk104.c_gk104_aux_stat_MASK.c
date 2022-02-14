
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
FUNC_2(struct nvkm_i2c *VAR_0, u32 *VAR_1, u32 *VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_0->subdev.device;
 u32 VAR_6 = FUNC_0(VAR_5, 0x00dc60);
 u32 VAR_7 = FUNC_0(VAR_5, 0x00dc68) & VAR_6, VAR_8;
 for (VAR_8 = 0, *VAR_1 = *VAR_2 = *VAR_3 = *VAR_4 = 0; VAR_8 < 8; VAR_8++) {
  if ((VAR_7 & (1 << (VAR_8 * 4)))) *VAR_1 |= 1 << VAR_8;
  if ((VAR_7 & (2 << (VAR_8 * 4)))) *VAR_2 |= 1 << VAR_8;
  if ((VAR_7 & (4 << (VAR_8 * 4)))) *VAR_3 |= 1 << VAR_8;
  if ((VAR_7 & (8 << (VAR_8 * 4)))) *VAR_4 |= 1 << VAR_8;
 }
 FUNC_1(VAR_5, 0x00dc60, VAR_6);
}
