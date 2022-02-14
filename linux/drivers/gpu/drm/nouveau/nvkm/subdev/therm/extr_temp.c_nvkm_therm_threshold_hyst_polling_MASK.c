
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {TYPE_1__* func; } ;
struct nvbios_therm_threshold {int temp; int hysteresis; } ;
typedef enum nvkm_therm_thrs_state { ____Placeholder_nvkm_therm_thrs_state } nvkm_therm_thrs_state ;
typedef enum nvkm_therm_thrs_direction { ____Placeholder_nvkm_therm_thrs_direction } nvkm_therm_thrs_direction ;
typedef enum nvkm_therm_thrs { ____Placeholder_nvkm_therm_thrs } nvkm_therm_thrs ;
struct TYPE_2__ {int (* temp_get ) (struct nvkm_therm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_therm*,int,int) ;
 int FUNC_1 (struct nvkm_therm*,int) ;
 int FUNC_2 (struct nvkm_therm*,int,int) ;
 int FUNC_3 (struct nvkm_therm*) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_therm *VAR_4,
      const struct nvbios_therm_threshold *VAR_5,
      enum nvkm_therm_thrs VAR_6)
{
 enum nvkm_therm_thrs_direction VAR_7;
 enum nvkm_therm_thrs_state VAR_8, VAR_9;
 int VAR_10 = VAR_4->func->temp_get(VAR_4);

 VAR_8 = FUNC_1(VAR_4, VAR_6);

 if (VAR_10 >= VAR_5->temp && VAR_8 == VAR_2) {
  VAR_7 = VAR_3;
  VAR_9 = VAR_1;
 } else if (VAR_10 <= VAR_5->temp - VAR_5->hysteresis &&
   VAR_8 == VAR_1) {
  VAR_7 = VAR_0;
  VAR_9 = VAR_2;
 } else
  return;

 FUNC_2(VAR_4, VAR_6, VAR_9);
 FUNC_0(VAR_4, VAR_6, VAR_7);
}
