
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int chipset; int crystal; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

int
FUNC_1(struct nvkm_therm *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 int VAR_3;


 if (VAR_2->chipset > 0x50 && VAR_2->chipset < 0x94) {
  u8 VAR_4 = FUNC_0(VAR_2, 0x410c);
  if (FUNC_0(VAR_2, 0xc040) & 0x800000) {


   VAR_3 = (100000000 >> VAR_4) * 10 / 24;
  } else {

   VAR_3 = (VAR_2->crystal * 1000) >> VAR_4;
   VAR_3 /= 20;
  }
 } else {
  VAR_3 = (VAR_2->crystal * 1000) / 20;
 }

 return VAR_3;
}
