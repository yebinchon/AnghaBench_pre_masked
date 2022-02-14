
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0203E {int group; } ;
struct bit_entry {int version; int length; scalar_t__ offset; } ;
struct TYPE_2__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int,int*,int*,struct nvbios_M0203E*) ;
 int FUNC_2 (struct nvkm_subdev*) ;
 int FUNC_3 (struct nvkm_bios*,int) ;
 int FUNC_4 (struct nvkm_bios*,scalar_t__) ;

u8
FUNC_5(struct nvkm_subdev *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->device->bios;
 u8 VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3 = 0x00000000;
 struct bit_entry VAR_4;
 struct nvbios_M0203E VAR_5;
 u8 VAR_6, VAR_7;

 if (!FUNC_0(VAR_1, 'M', &VAR_4)) {
  if (VAR_4.version == 1 && VAR_4.length >= 5)
   VAR_3 = FUNC_4(VAR_1, VAR_4.offset + 3);
  if (VAR_4.version == 2 && VAR_4.length >= 3) {




   if (VAR_4.length >= 7 &&
       FUNC_1(VAR_1, VAR_2, &VAR_6, &VAR_7, &VAR_5))
    return VAR_5.group;
   VAR_3 = FUNC_4(VAR_1, VAR_4.offset + 1);
  }
 }

 if (VAR_3)
  VAR_2 = FUNC_3(VAR_1, VAR_3 + VAR_2);
 return VAR_2;
}
