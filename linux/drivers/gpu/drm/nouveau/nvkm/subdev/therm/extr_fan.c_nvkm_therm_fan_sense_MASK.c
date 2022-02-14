
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_timer {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_4__* fan; TYPE_2__* func; TYPE_1__ subdev; } ;
struct nvkm_gpio {int dummy; } ;
struct nvkm_device {struct nvkm_gpio* gpio; struct nvkm_timer* timer; } ;
struct TYPE_7__ {int line; int func; } ;
struct TYPE_8__ {TYPE_3__ tach; } ;
struct TYPE_6__ {int (* fan_sense ) (struct nvkm_therm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvkm_gpio*,int ,int ,int ) ;
 int FUNC_2 (struct nvkm_timer*) ;
 int FUNC_3 (struct nvkm_therm*) ;
 int FUNC_4 (int,int) ;

int
FUNC_5(struct nvkm_therm *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_2->subdev.device;
 struct nvkm_timer *VAR_4 = VAR_3->timer;
 struct nvkm_gpio *VAR_5 = VAR_3->gpio;
 u32 VAR_6, VAR_7, VAR_8;
 u64 VAR_9, VAR_10, VAR_11;

 if (VAR_2->func->fan_sense)
  return VAR_2->func->fan_sense(VAR_2);

 if (VAR_2->fan->tach.func == VAR_0)
  return -VAR_1;





 VAR_9 = FUNC_2(VAR_4);
 VAR_8 = FUNC_1(VAR_5, 0, VAR_2->fan->tach.func,
          VAR_2->fan->tach.line);
 VAR_6 = 0;
 do {
  FUNC_4(500, 1000);

  VAR_7 = FUNC_1(VAR_5, 0, VAR_2->fan->tach.func,
          VAR_2->fan->tach.line);
  if (VAR_8 != VAR_7) {
   if (!VAR_9)
    VAR_9 = FUNC_2(VAR_4);
   VAR_6++;
   VAR_8 = VAR_7;
  }
 } while (VAR_6 < 5 && FUNC_2(VAR_4) - VAR_9 < 250000000);
 VAR_10 = FUNC_2(VAR_4);

 if (VAR_6 == 5) {
  VAR_11 = (u64)60000000000ULL;
  FUNC_0(VAR_11, (VAR_10 - VAR_9));
  return VAR_11;
 } else
  return 0;
}
