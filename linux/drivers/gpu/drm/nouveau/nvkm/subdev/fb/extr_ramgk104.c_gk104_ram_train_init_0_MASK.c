
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_ram {TYPE_1__* fb; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_16__ {int* data; } ;
struct TYPE_15__ {int* data; } ;
struct TYPE_14__ {int* data; } ;
struct TYPE_13__ {int* data; } ;
struct TYPE_12__ {int* data; } ;
struct TYPE_11__ {int* data; } ;
struct TYPE_10__ {int* data; } ;
struct gk104_ram_train {int mask; TYPE_8__ type04; TYPE_7__ type01; TYPE_6__ type07; TYPE_5__ type09; TYPE_4__ type00; TYPE_3__ type06; TYPE_2__ type08; } ;
struct TYPE_9__ {struct nvkm_subdev subdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_ram *VAR_1, struct gk104_ram_train *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->fb->subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 int VAR_5, VAR_6;

 if ((VAR_2->mask & 0x03d3) != 0x03d3) {
  FUNC_0(VAR_3, "missing link training data\n");
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < 0x30; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < 8; VAR_6 += 4) {
   FUNC_1(VAR_4, 0x10f968 + VAR_6, 0x00000000 | (VAR_5 << 8));
   FUNC_1(VAR_4, 0x10f920 + VAR_6, 0x00000000 |
         VAR_2->type08.data[VAR_5] << 4 |
         VAR_2->type06.data[VAR_5]);
   FUNC_1(VAR_4, 0x10f918 + VAR_6, VAR_2->type00.data[VAR_5]);
   FUNC_1(VAR_4, 0x10f920 + VAR_6, 0x00000100 |
         VAR_2->type09.data[VAR_5] << 4 |
         VAR_2->type07.data[VAR_5]);
   FUNC_1(VAR_4, 0x10f918 + VAR_6, VAR_2->type01.data[VAR_5]);
  }
 }

 for (VAR_6 = 0; VAR_6 < 8; VAR_6 += 4) {
  for (VAR_5 = 0; VAR_5 < 0x100; VAR_5++) {
   FUNC_1(VAR_4, 0x10f968 + VAR_6, VAR_5);
   FUNC_1(VAR_4, 0x10f900 + VAR_6, VAR_2->type04.data[VAR_5]);
  }
 }

 return 0;
}
