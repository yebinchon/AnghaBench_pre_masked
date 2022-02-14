
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int index; TYPE_1__* device; } ;
struct nvkm_engine {TYPE_2__ subdev; } ;
struct TYPE_3__ {int chipset; } ;






 int FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_engine *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 switch (VAR_0->subdev.index) {
 case 131:
 case 128:
  return 0;
 case 130:
  *VAR_1 = 0x0032e0;
  *VAR_2 = 0x38;
  return 1;
 case 129:
  if (VAR_0->subdev.device->chipset < 0x44)
   return 0;
  *VAR_1 = 0x00330c;
  *VAR_2 = 0x54;
  return 1;
 default:
  FUNC_0(1);
  return 0;
 }
}
