
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_volt {int vid_mask; struct nvkm_subdev subdev; } ;
struct nvkm_gpio {int dummy; } ;
struct dcb_gpio_func {int dummy; } ;
struct TYPE_2__ {struct nvkm_gpio* gpio; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct nvkm_gpio*,int ,int ,int,struct dcb_gpio_func*) ;
 int * VAR_1 ;

int
FUNC_3(struct nvkm_volt *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_2->subdev;
 struct nvkm_gpio *VAR_4 = VAR_3->device->gpio;
 struct dcb_gpio_func VAR_5;
 int VAR_6;







 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (VAR_2->vid_mask & (1 << VAR_6)) {
   int VAR_7 = FUNC_2(VAR_4, 0, VAR_1[VAR_6], 0xff, &VAR_5);
   if (VAR_7) {
    if (VAR_7 != -VAR_0)
     return VAR_7;
    FUNC_1(VAR_3, "VID bit %d has no GPIO\n", VAR_6);
    VAR_2->vid_mask &= ~(1 << VAR_6);
   }
  }
 }

 return 0;
}
