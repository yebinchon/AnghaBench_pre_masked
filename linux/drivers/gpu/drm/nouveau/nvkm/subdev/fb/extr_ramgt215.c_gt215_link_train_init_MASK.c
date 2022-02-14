
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0205E {int type; } ;
struct gt215_ltrain {void* r_111400; void* r_1111e0; void* r_100720; int memory; int state; } ;
struct TYPE_6__ {TYPE_2__* fb; } ;
struct gt215_ram {struct gt215_ltrain ltrain; TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_bios*,int,int *,int *,int *,int *,struct nvbios_M0205E*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvkm_device*,int ,int,int,int,int,int,int *) ;
 void* FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int,int const) ;

__attribute__((used)) static int
FUNC_6(struct gt215_ram *VAR_4)
{
 static const u32 VAR_5[16] = {
  0xaaaaaaaa, 0xcccccccc, 0xdddddddd, 0xeeeeeeee,
  0x00000000, 0x11111111, 0x44444444, 0xdddddddd,
  0x33333333, 0x55555555, 0x77777777, 0x66666666,
  0x99999999, 0x88888888, 0xeeeeeeee, 0xbbbbbbbb,
 };
 struct gt215_ltrain *VAR_6 = &VAR_4->ltrain;
 struct nvkm_device *VAR_7 = VAR_4->base.fb->subdev.device;
 struct nvkm_bios *VAR_8 = VAR_7->bios;
 struct nvbios_M0205E VAR_9;
 u8 VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14;
 u64 VAR_15;
 int VAR_16, VAR_17 = 0;

 VAR_6->state = VAR_2;



 if (!FUNC_0(VAR_8, VAR_17, &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_9))
  return -VAR_0;

 if (VAR_9.type != 5)
  return 0;

 VAR_6->state = VAR_1;

 VAR_16 = FUNC_3(VAR_7, VAR_3, 0x01, 16, 0x8000,
      1, 1, &VAR_4->ltrain.memory);
 if (VAR_16)
  return VAR_16;

 VAR_15 = FUNC_2(VAR_4->ltrain.memory);

 FUNC_5(VAR_7, 0x100538, 0x10000000 | (VAR_15 >> 16));
 FUNC_5(VAR_7, 0x1005a8, 0x0000ffff);
 FUNC_1(VAR_7, 0x10f800, 0x00000001, 0x00000001);

 for (VAR_17 = 0; VAR_17 < 0x30; VAR_17++) {
  FUNC_5(VAR_7, 0x10f8c0, (VAR_17 << 8) | VAR_17);
  FUNC_5(VAR_7, 0x10f900, VAR_5[VAR_17 % 16]);
 }

 for (VAR_17 = 0; VAR_17 < 0x30; VAR_17++) {
  FUNC_5(VAR_7, 0x10f8e0, (VAR_17 << 8) | VAR_17);
  FUNC_5(VAR_7, 0x10f920, VAR_5[VAR_17 % 16]);
 }


 VAR_14 = FUNC_4(VAR_7, 0x1700);
 FUNC_5(VAR_7, 0x1700, VAR_15 >> 16);
 for (VAR_17 = 0; VAR_17 < 16; VAR_17++)
  FUNC_5(VAR_7, 0x700000 + (VAR_17 << 2), VAR_5[VAR_17]);
 for (VAR_17 = 0; VAR_17 < 16; VAR_17++)
  FUNC_5(VAR_7, 0x700100 + (VAR_17 << 2), VAR_5[VAR_17]);
 FUNC_5(VAR_7, 0x1700, VAR_14);

 VAR_6->r_100720 = FUNC_4(VAR_7, 0x100720);
 VAR_6->r_1111e0 = FUNC_4(VAR_7, 0x1111e0);
 VAR_6->r_111400 = FUNC_4(VAR_7, 0x111400);
 return 0;
}
