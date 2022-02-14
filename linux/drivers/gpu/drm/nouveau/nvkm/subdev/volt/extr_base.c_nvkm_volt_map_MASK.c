
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_volt {int speedo; TYPE_2__ subdev; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_vmap_entry {int mode; int min; int max; int link; scalar_t__* arg; } ;
typedef int s64 ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,int,int*,int*,struct nvbios_vmap_entry*) ;

int
FUNC_4(struct nvkm_volt *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct nvkm_bios *VAR_4 = VAR_1->subdev.device->bios;
 struct nvbios_vmap_entry VAR_5;
 u8 VAR_6, VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_3(VAR_4, VAR_2, &VAR_6, &VAR_7, &VAR_5);
 if (VAR_8) {
  s64 VAR_9;

  if (VAR_1->speedo < 0)
   return VAR_1->speedo;

  if (VAR_6 == 0x10 || (VAR_6 == 0x20 && VAR_5.mode == 0)) {
   VAR_9 = FUNC_0((s64)VAR_5.arg[0], 10);
   VAR_9 += FUNC_0((s64)VAR_5.arg[1] * VAR_1->speedo, 10);
   VAR_9 += FUNC_0((s64)VAR_5.arg[2] * VAR_1->speedo * VAR_1->speedo, 100000);
  } else if (VAR_6 == 0x20) {
   switch (VAR_5.mode) {

   case 0x1:
    VAR_9 = ((s64)VAR_5.arg[0] * 15625) >> 18;
    VAR_9 += ((s64)VAR_5.arg[1] * VAR_1->speedo * 15625) >> 18;
    VAR_9 += ((s64)VAR_5.arg[2] * VAR_3 * 15625) >> 10;
    VAR_9 += ((s64)VAR_5.arg[3] * VAR_1->speedo * VAR_3 * 15625) >> 18;
    VAR_9 += ((s64)VAR_5.arg[4] * VAR_1->speedo * VAR_1->speedo * 15625) >> 30;
    VAR_9 += ((s64)VAR_5.arg[5] * VAR_3 * VAR_3 * 15625) >> 18;
    break;
   case 0x3:
    VAR_9 = (VAR_5.min + VAR_5.max) / 2;
    break;
   case 0x2:
   default:
    VAR_9 = VAR_5.min;
    break;
   }
  } else {
   return -VAR_0;
  }

  VAR_9 = FUNC_2(FUNC_1(VAR_9, (s64)VAR_5.min), (s64)VAR_5.max);

  if (VAR_5.link != 0xff) {
   int VAR_10 = FUNC_4(VAR_1, VAR_5.link, VAR_3);
   if (VAR_10 < 0)
    return VAR_10;
   VAR_9 += VAR_10;
  }
  return VAR_9;
 }

 return VAR_2 ? VAR_2 * 10000 : -VAR_0;
}
