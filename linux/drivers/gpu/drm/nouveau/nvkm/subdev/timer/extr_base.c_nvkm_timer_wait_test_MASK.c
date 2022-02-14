
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nvkm_timer_wait {int reads; scalar_t__ time0; scalar_t__ time1; scalar_t__ limit; TYPE_1__* tmr; } ;
struct nvkm_subdev {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

s64
FUNC_2(struct nvkm_timer_wait *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_1->tmr->subdev;
 u64 VAR_3 = FUNC_1(VAR_1->tmr);

 if (VAR_1->reads == 0) {
  VAR_1->time0 = VAR_3;
  VAR_1->time1 = VAR_3;
 }

 if (VAR_1->time1 == VAR_3) {
  if (VAR_1->reads++ == 16) {
   FUNC_0(VAR_2, "stalled at %016llx\n", VAR_3);
   return -VAR_0;
  }
 } else {
  VAR_1->time1 = VAR_3;
  VAR_1->reads = 1;
 }

 if (VAR_1->time1 - VAR_1->time0 > VAR_1->limit)
  return -VAR_0;

 return VAR_1->time1 - VAR_1->time0;
}
