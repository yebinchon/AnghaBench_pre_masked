
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_2__* func; TYPE_1__ subdev; scalar_t__ fan; } ;
struct nvkm_gpio {int dummy; } ;
struct TYPE_6__ {int* log; int line; int func; } ;
struct nvkm_fanpwm {TYPE_3__ func; } ;
struct nvkm_device {int card_type; struct nvkm_gpio* gpio; } ;
struct TYPE_5__ {int (* pwm_get ) (struct nvkm_therm*,int ,int*,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvkm_gpio*,int ,int ,int ) ;
 int FUNC_2 (struct nvkm_therm*,int ,int*,int*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_therm *VAR_1)
{
 struct nvkm_fanpwm *VAR_2 = (void *)VAR_1->fan;
 struct nvkm_device *VAR_3 = VAR_1->subdev.device;
 struct nvkm_gpio *VAR_4 = VAR_3->gpio;
 int VAR_5 = VAR_3->card_type;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = VAR_1->func->pwm_get(VAR_1, VAR_2->func.line, &VAR_6, &VAR_7);
 if (VAR_8 == 0 && VAR_6) {
  VAR_6 = FUNC_0(VAR_6, VAR_7);
  if (VAR_5 <= VAR_0 || (VAR_2->func.log[0] & 1))
   VAR_7 = VAR_6 - VAR_7;
  return (VAR_7 * 100) / VAR_6;
 }

 return FUNC_1(VAR_4, 0, VAR_2->func.func, VAR_2->func.line) * 100;
}
