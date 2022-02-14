
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int fuse; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;

void
FUNC_3(struct nvkm_therm *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;


 if (FUNC_1(VAR_1->fuse, 0x1a8) == 1) {
  FUNC_2(VAR_1, 0x20008, 0x80008000, 0x80000000);
  FUNC_2(VAR_1, 0x2000c, 0x80000003, 0x00000000);
  FUNC_0(20);
 }
}
