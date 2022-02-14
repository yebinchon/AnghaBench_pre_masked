
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_3__* fan; TYPE_2__* func; TYPE_1__ subdev; } ;
struct dcb_gpio_func {int line; int param; } ;
struct TYPE_6__ {char* type; int set; int get; } ;
struct nvkm_fanpwm {struct dcb_gpio_func func; TYPE_3__ base; } ;
struct nvkm_device {int cfgopt; struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_therm_fan {scalar_t__ type; } ;
struct TYPE_5__ {int (* pwm_get ) (struct nvkm_therm*,int ,int *,int *) ;int pwm_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nvkm_fanpwm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_bios*,struct nvbios_therm_fan*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct nvkm_therm*,int ,int *,int *) ;

int
FUNC_4(struct nvkm_therm *VAR_6, struct dcb_gpio_func *VAR_7)
{
 struct nvkm_device *VAR_8 = VAR_6->subdev.device;
 struct nvkm_bios *VAR_9 = VAR_8->bios;
 struct nvkm_fanpwm *VAR_10;
 struct nvbios_therm_fan VAR_11 = {};
 u32 VAR_12, VAR_13;

 FUNC_1(VAR_9, &VAR_11);

 if (!FUNC_2(VAR_8->cfgopt, "NvFanPWM", VAR_7->param) ||
     !VAR_6->func->pwm_ctrl || VAR_11.type == VAR_3 ||
      VAR_6->func->pwm_get(VAR_6, VAR_7->line, &VAR_12, &VAR_13) == -VAR_0)
  return -VAR_0;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_2);
 VAR_6->fan = &VAR_10->base;
 if (!VAR_10)
  return -VAR_1;

 VAR_10->base.type = "PWM";
 VAR_10->base.get = VAR_4;
 VAR_10->base.set = VAR_5;
 VAR_10->func = *VAR_7;
 return 0;
}
