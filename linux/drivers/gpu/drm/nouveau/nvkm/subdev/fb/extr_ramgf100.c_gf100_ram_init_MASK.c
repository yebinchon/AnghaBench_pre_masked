
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_ram {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {int type; TYPE_2__* fb; } ;
struct gf100_ram {TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;



 struct gf100_ram* FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (struct nvkm_device*,int,int const) ;

int
FUNC_2(struct nvkm_ram *VAR_0)
{
 static const u8 VAR_1[] = {
  0x00, 0xff, 0x55, 0xaa, 0x33, 0xcc,
  0x00, 0xff, 0xff, 0x00, 0xff, 0x00,
 };
 static const u32 VAR_2[] = {
  0x00000000, 0xffffffff,
  0x55555555, 0xaaaaaaaa,
  0x33333333, 0xcccccccc,
  0xf0f0f0f0, 0x0f0f0f0f,
  0x00ff00ff, 0xff00ff00,
  0x0000ffff, 0xffff0000,
 };
 struct gf100_ram *VAR_3 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_4 = VAR_3->base.fb->subdev.device;
 int VAR_5;

 switch (VAR_3->base.type) {
 case 128:
  break;
 default:
  return 0;
 }


 for (VAR_5 = 0; VAR_5 < 0x30; VAR_5++) {
  FUNC_1(VAR_4, 0x10f968, 0x00000000 | (VAR_5 << 8));
  FUNC_1(VAR_4, 0x10f96c, 0x00000000 | (VAR_5 << 8));
  FUNC_1(VAR_4, 0x10f920, 0x00000100 | VAR_1[VAR_5 % 12]);
  FUNC_1(VAR_4, 0x10f924, 0x00000100 | VAR_1[VAR_5 % 12]);
  FUNC_1(VAR_4, 0x10f918, VAR_2[VAR_5 % 12]);
  FUNC_1(VAR_4, 0x10f91c, VAR_2[VAR_5 % 12]);
  FUNC_1(VAR_4, 0x10f920, 0x00000000 | VAR_1[VAR_5 % 12]);
  FUNC_1(VAR_4, 0x10f924, 0x00000000 | VAR_1[VAR_5 % 12]);
  FUNC_1(VAR_4, 0x10f918, VAR_2[VAR_5 % 12]);
  FUNC_1(VAR_4, 0x10f91c, VAR_2[VAR_5 % 12]);
 }

 return 0;
}
