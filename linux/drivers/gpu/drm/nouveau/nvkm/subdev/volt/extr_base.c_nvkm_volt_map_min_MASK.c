
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_volt {TYPE_2__ subdev; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_vmap_entry {int link; int min; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvkm_bios*,int,int*,int*,struct nvbios_vmap_entry*) ;

int
FUNC_1(struct nvkm_volt *VAR_1, u8 VAR_2)
{
 struct nvkm_bios *VAR_3 = VAR_1->subdev.device->bios;
 struct nvbios_vmap_entry VAR_4;
 u8 VAR_5, VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_2, &VAR_5, &VAR_6, &VAR_4);
 if (VAR_7) {
  if (VAR_4.link != 0xff) {
   int VAR_8 = FUNC_1(VAR_1, VAR_4.link);
   if (VAR_8 < 0)
    return VAR_8;
   VAR_4.min += VAR_8;
  }
  return VAR_4.min;
 }

 return VAR_2 ? VAR_2 * 10000 : -VAR_0;
}
