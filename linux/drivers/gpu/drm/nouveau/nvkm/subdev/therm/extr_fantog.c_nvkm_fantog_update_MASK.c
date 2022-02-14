
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_timer {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_2__ subdev; } ;
struct nvkm_gpio {int dummy; } ;
struct TYPE_3__ {struct nvkm_therm* parent; } ;
struct nvkm_fantog {int percent; int period_us; int lock; int alarm; TYPE_1__ base; } ;
struct nvkm_device {struct nvkm_gpio* gpio; struct nvkm_timer* timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_gpio*,int ,int ,int) ;
 int FUNC_1 (struct nvkm_gpio*,int ,int ,int,int) ;
 int FUNC_2 (struct nvkm_timer*,int,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_fantog *VAR_1, int VAR_2)
{
 struct nvkm_therm *VAR_3 = VAR_1->base.parent;
 struct nvkm_device *VAR_4 = VAR_3->subdev.device;
 struct nvkm_timer *VAR_5 = VAR_4->timer;
 struct nvkm_gpio *VAR_6 = VAR_4->gpio;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_3(&VAR_1->lock, VAR_7);
 if (VAR_2 < 0)
  VAR_2 = VAR_1->percent;
 VAR_1->percent = VAR_2;

 VAR_8 = !FUNC_0(VAR_6, 0, VAR_0, 0xff);
 FUNC_1(VAR_6, 0, VAR_0, 0xff, VAR_8);

 if (VAR_2 != (VAR_8 * 100)) {
  u64 VAR_9 = (VAR_2 * VAR_1->period_us) / 100;
  if (!VAR_8)
   VAR_9 = VAR_1->period_us - VAR_9;
  FUNC_2(VAR_5, VAR_9 * 1000, &VAR_1->alarm);
 }
 FUNC_4(&VAR_1->lock, VAR_7);
}
