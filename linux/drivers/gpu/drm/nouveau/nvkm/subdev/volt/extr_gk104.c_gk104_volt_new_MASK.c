
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_volt_func {int dummy; } ;
struct nvkm_volt {int subdev; } ;
struct nvkm_device {int gpio; int bios; } ;
struct nvbios_volt {scalar_t__ type; } ;
struct gk104_volt {struct nvkm_volt base; struct nvbios_volt bios; } ;
struct dcb_gpio_func {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nvkm_volt_func const VAR_4 ;
 struct nvkm_volt_func const VAR_5 ;
 struct gk104_volt* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *,struct nvbios_volt*) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int ,int ,int,struct dcb_gpio_func*) ;
 int FUNC_5 (struct nvkm_volt_func const*,struct nvkm_device*,int,struct nvkm_volt*) ;
 int FUNC_6 (struct nvkm_volt*) ;

int
FUNC_7(struct nvkm_device *VAR_6, int VAR_7, struct nvkm_volt **VAR_8)
{
 const struct nvkm_volt_func *VAR_9 = &VAR_4;
 struct dcb_gpio_func VAR_10;
 struct nvbios_volt VAR_11;
 struct gk104_volt *VAR_12;
 u8 VAR_13, VAR_14, VAR_15, VAR_16;
 const char *VAR_17;

 if (!FUNC_1(VAR_6->bios, &VAR_13, &VAR_14, &VAR_15, &VAR_16, &VAR_11))
  return 0;

 if (!FUNC_4(VAR_6->gpio, 0, VAR_0, 0xff, &VAR_10) &&
     VAR_11.type == VAR_3) {
  VAR_9 = &VAR_5;
 }

 if (!(VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_2)))
  return -VAR_1;
 FUNC_5(VAR_9, VAR_6, VAR_7, &VAR_12->base);
 *VAR_8 = &VAR_12->base;
 VAR_12->bios = VAR_11;





 if (VAR_11.type == VAR_3 && VAR_9 != &VAR_5) {
  FUNC_3(&VAR_12->base.subdev,
      "Type mismatch between the voltage table type and "
      "the GPIO table. Fallback to GPIO mode.\n");
 }

 if (VAR_9 == &VAR_4) {
  FUNC_6(&VAR_12->base);
  VAR_17 = "GPIO";
 } else
  VAR_17 = "PWM";

 FUNC_2(&VAR_12->base.subdev, "Using %s mode\n", VAR_17);

 return 0;
}
