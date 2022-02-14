
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_2__* fan; TYPE_1__ subdev; } ;
struct nvkm_device {int crystal; } ;
struct TYPE_6__ {scalar_t__ func; int line; } ;
struct TYPE_5__ {TYPE_3__ tach; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_therm*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct nvkm_therm *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;

 FUNC_0(VAR_1);


 FUNC_1(VAR_2, 0x00e720, 0x00000003, 0x00000002);
 if (VAR_1->fan->tach.func != VAR_0) {
  FUNC_1(VAR_2, 0x00d79c, 0x000000ff, VAR_1->fan->tach.line);
  FUNC_2(VAR_2, 0x00e724, VAR_2->crystal * 1000);
  FUNC_1(VAR_2, 0x00e720, 0x00000001, 0x00000001);
 }
 FUNC_1(VAR_2, 0x00e720, 0x00000002, 0x00000000);
}
