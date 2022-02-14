
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct nvkm_timer {int dummy; } ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_therm {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {int bump_period; int slow_down_period; int max_duty; int min_duty; } ;
struct nvkm_fan {int percent; int (* get ) (struct nvkm_therm*) ;int (* set ) (struct nvkm_therm*,int) ;int alarm; TYPE_2__ bios; int lock; struct nvkm_therm* parent; } ;
struct TYPE_3__ {struct nvkm_timer* timer; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct nvkm_subdev*,char*,int) ;
 int FUNC_5 (struct nvkm_timer*,int,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct nvkm_therm*) ;
 int FUNC_9 (struct nvkm_therm*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_10(struct nvkm_fan *VAR_1, bool VAR_2, int VAR_3)
{
 struct nvkm_therm *VAR_4 = VAR_1->parent;
 struct nvkm_subdev *VAR_5 = &VAR_4->subdev;
 struct nvkm_timer *VAR_6 = VAR_5->device->timer;
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;


 FUNC_6(&VAR_1->lock, VAR_7);
 if (VAR_3 < 0)
  VAR_3 = VAR_1->percent;
 VAR_3 = FUNC_1(VAR_0, VAR_3, VAR_1->bios.min_duty);
 VAR_3 = FUNC_3(VAR_0, VAR_3, VAR_1->bios.max_duty);
 if (VAR_1->percent != VAR_3) {
  FUNC_4(VAR_5, "FAN target: %d\n", VAR_3);
  VAR_1->percent = VAR_3;
 }


 VAR_9 = VAR_1->get(VAR_4);
 if (VAR_9 == VAR_3) {
  FUNC_7(&VAR_1->lock, VAR_7);
  return 0;
 }


 if (!VAR_2 && VAR_9 >= 0) {




  if (VAR_9 < VAR_3)
   VAR_9 = FUNC_2(VAR_9 + 3, VAR_3);
  else if (VAR_9 > VAR_3)
   VAR_9 = FUNC_0(VAR_9 - 3, VAR_3);
 } else {
  VAR_9 = VAR_3;
 }

 FUNC_4(VAR_5, "FAN update: %d\n", VAR_9);
 VAR_8 = VAR_1->set(VAR_4, VAR_9);
 if (VAR_8) {
  FUNC_7(&VAR_1->lock, VAR_7);
  return VAR_8;
 }




 FUNC_7(&VAR_1->lock, VAR_7);


 if (VAR_3 != VAR_9) {
  u16 VAR_10 = VAR_1->bios.bump_period;
  u16 VAR_11 = VAR_1->bios.slow_down_period;
  u64 VAR_12;

  if (VAR_9 > VAR_3)
   VAR_12 = VAR_11;
  else if (VAR_9 == VAR_3)
   VAR_12 = FUNC_2(VAR_10, VAR_11) ;
  else
   VAR_12 = VAR_10;

  FUNC_5(VAR_6, VAR_12 * 1000 * 1000, &VAR_1->alarm);
 }

 return VAR_8;
}
