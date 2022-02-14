
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_timer {int dummy; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct nvkm_therm {TYPE_3__* fan; TYPE_2__ subdev; } ;
struct TYPE_6__ {int alarm; } ;
struct TYPE_4__ {struct nvkm_timer* timer; } ;


 int FUNC_0 (struct nvkm_timer*,int ,int *) ;

int
FUNC_1(struct nvkm_therm *VAR_0, bool VAR_1)
{
 struct nvkm_timer *VAR_2 = VAR_0->subdev.device->timer;
 if (VAR_1)
  FUNC_0(VAR_2, 0, &VAR_0->fan->alarm);
 return 0;
}
