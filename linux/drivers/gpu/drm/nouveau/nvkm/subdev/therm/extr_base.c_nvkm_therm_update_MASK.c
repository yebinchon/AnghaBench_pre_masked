
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_timer {int dummy; } ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_therm {int mode; int cstate; int lock; int alarm; TYPE_3__* fan; struct nvkm_subdev subdev; } ;
struct TYPE_5__ {int fan_mode; } ;
struct TYPE_6__ {TYPE_2__ bios; } ;
struct TYPE_4__ {struct nvkm_timer* timer; } ;
 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_therm*) ;
 int FUNC_2 (struct nvkm_therm*,int,int) ;
 int FUNC_3 (struct nvkm_therm*) ;
 int FUNC_4 (struct nvkm_therm*) ;
 int FUNC_5 (struct nvkm_therm*) ;
 int FUNC_6 (struct nvkm_timer*,unsigned long long,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_9(struct nvkm_therm *VAR_0, int VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_0->subdev;
 struct nvkm_timer *VAR_3 = VAR_2->device->timer;
 unsigned long VAR_4;
 bool VAR_5 = 1;
 bool VAR_6 = 1;
 int VAR_7 = -1;

 FUNC_7(&VAR_0->lock, VAR_4);
 if (VAR_1 < 0)
  VAR_1 = VAR_0->mode;
 VAR_0->mode = VAR_1;

 switch (VAR_1) {
 case 129:
  FUNC_6(VAR_3, 0, &VAR_0->alarm);
  VAR_7 = FUNC_1(VAR_0);
  if (VAR_7 < 0)
   VAR_7 = 100;
  VAR_6 = 0;
  break;
 case 130:
  switch(VAR_0->fan->bios.fan_mode) {
  case 131:
   VAR_7 = FUNC_5(VAR_0);
   break;
  case 133:
   VAR_7 = FUNC_3(VAR_0);
   break;
  case 132:
   if (VAR_0->cstate) {
    VAR_7 = VAR_0->cstate;
    VAR_6 = 0;
   } else {
    VAR_7 = FUNC_4(VAR_0);
   }
   break;
  }
  VAR_5 = 0;
  break;
 case 128:
 default:
  FUNC_6(VAR_3, 0, &VAR_0->alarm);
  VAR_6 = 0;
 }

 if (VAR_6)
  FUNC_6(VAR_3, 1000000000ULL, &VAR_0->alarm);
 FUNC_8(&VAR_0->lock, VAR_4);

 if (VAR_7 >= 0) {
  FUNC_0(VAR_2, "FAN target request: %d%%\n", VAR_7);
  FUNC_2(VAR_0, VAR_5, VAR_7);
 }
}
