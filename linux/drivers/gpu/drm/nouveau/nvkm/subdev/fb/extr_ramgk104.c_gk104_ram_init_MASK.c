
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_ram {TYPE_1__* fb; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (struct nvkm_subdev*,int) ;
 int FUNC_2 (struct nvkm_bios*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_3 (struct nvkm_bios*,int) ;
 int FUNC_4 (struct nvkm_bios*,int) ;
 int FUNC_5 (struct nvkm_device*,int,int,int) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (struct nvkm_device*,int,int) ;

int
FUNC_8(struct nvkm_ram *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_1->fb->subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 struct nvkm_bios *VAR_4 = VAR_3->bios;
 u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 int VAR_13;
 VAR_11 = FUNC_2(VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (!VAR_11 || VAR_6 < 0x15)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4, VAR_11 + 0x14);
 VAR_11 = FUNC_4(VAR_4, VAR_11 + 0x10);
 VAR_12 = FUNC_6(VAR_3, 0x10f65c) & 0x000000f0;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++, VAR_11 += 4) {
  if (VAR_13 != VAR_12 >> 4) {
   FUNC_5(VAR_3, 0x10f65c, 0x000000f0, VAR_13 << 4);
   FUNC_1(VAR_2, FUNC_4(VAR_4, VAR_11));
  }
 }
 FUNC_5(VAR_3, 0x10f65c, 0x000000f0, VAR_12);
 FUNC_5(VAR_3, 0x10f584, 0x11000000, 0x00000000);
 FUNC_7(VAR_3, 0x10ecc0, 0xffffffff);
 FUNC_5(VAR_3, 0x10f160, 0x00000010, 0x00000010);

 return FUNC_0(VAR_1);
}
