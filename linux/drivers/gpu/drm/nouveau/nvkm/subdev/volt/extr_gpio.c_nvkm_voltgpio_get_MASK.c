
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_volt {int vid_mask; TYPE_2__ subdev; } ;
struct nvkm_gpio {int dummy; } ;
struct TYPE_3__ {struct nvkm_gpio* gpio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_gpio*,int ,int ,int) ;
 int * VAR_0 ;

int
FUNC_2(struct nvkm_volt *VAR_1)
{
 struct nvkm_gpio *VAR_2 = VAR_1->subdev.device->gpio;
 u8 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_1->vid_mask & (1 << VAR_4)) {
   int VAR_5 = FUNC_1(VAR_2, 0, VAR_0[VAR_4], 0xff);
   if (VAR_5 < 0)
    return VAR_5;
   VAR_3 |= VAR_5 << VAR_4;
  }
 }

 return VAR_3;
}
