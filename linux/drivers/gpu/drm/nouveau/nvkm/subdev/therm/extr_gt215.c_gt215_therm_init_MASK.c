
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_2__* fan; TYPE_1__ subdev; } ;
struct nvkm_device {int crystal; } ;
struct dcb_gpio_func {scalar_t__ func; int line; } ;
struct TYPE_4__ {struct dcb_gpio_func tach; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_therm*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct nvkm_therm *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 struct dcb_gpio_func *VAR_3 = &VAR_1->fan->tach;

 FUNC_0(VAR_1);


 FUNC_1(VAR_2, 0x00e720, 0x00000003, 0x00000002);
 if (VAR_3->func != VAR_0) {
  FUNC_2(VAR_2, 0x00e724, VAR_2->crystal * 1000);
  FUNC_1(VAR_2, 0x00e720, 0x001f0000, VAR_3->line << 16);
  FUNC_1(VAR_2, 0x00e720, 0x00000001, 0x00000001);
 }
 FUNC_1(VAR_2, 0x00e720, 0x00000002, 0x00000000);
}
