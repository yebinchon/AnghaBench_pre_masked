
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct nvkm_therm {struct nvbios_therm_trip_point* last_trip; TYPE_3__* fan; TYPE_1__* func; } ;
struct nvbios_therm_trip_point {scalar_t__ temp; scalar_t__ hysteresis; size_t fan_duty; } ;
struct TYPE_5__ {size_t nr_fan_trip; struct nvbios_therm_trip_point* trip; } ;
struct TYPE_6__ {TYPE_2__ bios; } ;
struct TYPE_4__ {scalar_t__ (* temp_get ) (struct nvkm_therm*) ;} ;


 scalar_t__ FUNC_0 (struct nvkm_therm*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_therm *VAR_0)
{
 struct nvbios_therm_trip_point *VAR_1 = VAR_0->fan->bios.trip,
           *VAR_2 = ((void*)0),
           *VAR_3 = VAR_0->last_trip;
 u8 VAR_4 = VAR_0->func->temp_get(VAR_0);
 u16 VAR_5, VAR_6;


 VAR_2 = ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_0->fan->bios.nr_fan_trip; VAR_6++) {
  if (VAR_4 >= VAR_1[VAR_6].temp)
   VAR_2 = &VAR_1[VAR_6];
 }


 if (VAR_3 && VAR_4 <= (VAR_3->temp) &&
     VAR_4 > (VAR_3->temp - VAR_3->hysteresis))
  VAR_2 = VAR_3;

 if (VAR_2) {
  VAR_5 = VAR_2->fan_duty;
  VAR_0->last_trip = VAR_2;
 } else {
  VAR_5 = 0;
  VAR_0->last_trip = ((void*)0);
 }

 return VAR_5;
}
