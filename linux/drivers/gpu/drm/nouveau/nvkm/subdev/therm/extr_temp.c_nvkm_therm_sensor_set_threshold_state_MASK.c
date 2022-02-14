
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* alarm_state; } ;
struct nvkm_therm {TYPE_1__ sensor; } ;
typedef enum nvkm_therm_thrs_state { ____Placeholder_nvkm_therm_thrs_state } nvkm_therm_thrs_state ;
typedef enum nvkm_therm_thrs { ____Placeholder_nvkm_therm_thrs } nvkm_therm_thrs ;



void
FUNC_0(struct nvkm_therm *VAR_0,
          enum nvkm_therm_thrs VAR_1,
          enum nvkm_therm_thrs_state VAR_2)
{
 VAR_0->sensor.alarm_state[VAR_1] = VAR_2;
}
