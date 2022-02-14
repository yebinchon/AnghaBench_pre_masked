
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__* fan; struct nvkm_subdev subdev; } ;
struct nvkm_gpio {int dummy; } ;
struct nvkm_device {struct nvkm_bios* bios; struct nvkm_gpio* gpio; } ;
struct nvkm_bios {int dummy; } ;
struct dcb_gpio_func {int line; int* log; int func; } ;
struct TYPE_2__ {int bios; int perf; int lock; int alarm; struct nvkm_therm* parent; struct dcb_gpio_func tach; int percent; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvkm_bios*,int *) ;
 int FUNC_1 (struct nvkm_bios*,int *) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct nvkm_subdev*,char*,...) ;
 int FUNC_5 (struct nvkm_subdev*,char*) ;
 int VAR_5 ;
 int FUNC_6 (struct nvkm_therm*) ;
 int FUNC_7 (struct nvkm_therm*,struct dcb_gpio_func*) ;
 int FUNC_8 (struct nvkm_therm*,struct dcb_gpio_func*) ;
 int FUNC_9 (struct nvkm_gpio*,int ,int ,int,struct dcb_gpio_func*) ;
 int FUNC_10 (struct nvkm_therm*) ;
 int FUNC_11 (struct nvkm_therm*) ;
 int FUNC_12 (struct nvkm_therm*) ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct nvkm_therm *VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_6->subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 struct nvkm_gpio *VAR_9 = VAR_8->gpio;
 struct nvkm_bios *VAR_10 = VAR_8->bios;
 struct dcb_gpio_func VAR_11;
 int VAR_12;


 VAR_12 = FUNC_9(VAR_9, 0, VAR_0, 0xff, &VAR_11);
 if (VAR_12 == 0) {

  if (VAR_11.line != 16 && VAR_11.log[0] & VAR_2) {
   FUNC_4(VAR_7, "GPIO_FAN is in input mode\n");
   VAR_12 = -VAR_4;
  } else {
   VAR_12 = FUNC_7(VAR_6, &VAR_11);
   if (VAR_12 != 0)
    VAR_12 = FUNC_8(VAR_6, &VAR_11);
  }
 }


 if (VAR_12 != 0) {
  VAR_12 = FUNC_6(VAR_6);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_4(VAR_7, "FAN control: %s\n", VAR_6->fan->type);


 VAR_6->fan->percent = FUNC_10(VAR_6);


 VAR_12 = FUNC_9(VAR_9, 0, VAR_1, 0xff,
        &VAR_6->fan->tach);
 if (VAR_12)
  VAR_6->fan->tach.func = VAR_3;


 VAR_6->fan->parent = VAR_6;
 FUNC_3(&VAR_6->fan->alarm, VAR_5);
 FUNC_13(&VAR_6->fan->lock);


 FUNC_12(VAR_6);
 FUNC_1(VAR_10, &VAR_6->fan->perf);
 if (!FUNC_0(VAR_10, &VAR_6->fan->bios)) {
  FUNC_4(VAR_7, "parsing the fan table failed\n");
  if (FUNC_2(VAR_10, &VAR_6->fan->bios))
   FUNC_5(VAR_7, "parsing both fan tables failed\n");
 }
 FUNC_11(VAR_6);
 return 0;
}
