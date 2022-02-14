
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
 int FUNC_0 (struct nvkm_subdev*,int) ;
 int FUNC_1 (struct nvkm_bios*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 int FUNC_3 (struct nvkm_bios*,int) ;
 int FUNC_4 (struct nvkm_device*,int,int,int) ;
 int FUNC_5 (struct nvkm_device*,int) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_ram *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_1->fb->subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 struct nvkm_bios *VAR_4 = VAR_3->bios;
 u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 int VAR_12;
 VAR_11 = FUNC_1(VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (!VAR_11 || VAR_6 < 0x15)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_4, VAR_11 + 0x14);
 VAR_11 = FUNC_3(VAR_4, VAR_11 + 0x10);
 if (VAR_7) {
  u32 VAR_13 = FUNC_5(VAR_3, 0x9a065c) & 0x000000f0;
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++, VAR_11 += 4) {
   if (VAR_12 != VAR_13 >> 4) {
    FUNC_4(VAR_3, 0x9a065c, 0x000000f0, VAR_12 << 4);
    FUNC_0(VAR_2, FUNC_3(VAR_4, VAR_11));
   }
  }
  FUNC_4(VAR_3, 0x9a065c, 0x000000f0, VAR_13);
 }

 FUNC_4(VAR_3, 0x9a0584, 0x11000000, 0x00000000);
 FUNC_6(VAR_3, 0x10ecc0, 0xffffffff);
 FUNC_4(VAR_3, 0x9a0160, 0x00000010, 0x00000010);
 return 0;
}
