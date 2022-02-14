
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_2__* func; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
struct nvbios_therm_threshold {int temp; int hysteresis; } ;
typedef enum nvkm_therm_thrs_state { ____Placeholder_nvkm_therm_thrs_state } nvkm_therm_thrs_state ;
typedef enum nvkm_therm_thrs_direction { ____Placeholder_nvkm_therm_thrs_direction } nvkm_therm_thrs_direction ;
typedef enum nvkm_therm_thrs { ____Placeholder_nvkm_therm_thrs } nvkm_therm_thrs ;
struct TYPE_4__ {int (* temp_get ) (struct nvkm_therm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_device*,int ) ;
 int FUNC_1 (struct nvkm_therm*,int,int) ;
 int FUNC_2 (struct nvkm_therm*,int) ;
 int FUNC_3 (struct nvkm_therm*,int,int) ;
 int FUNC_4 (struct nvkm_device*,int ,int) ;
 int FUNC_5 (struct nvkm_therm*) ;

__attribute__((used)) static void
FUNC_6(struct nvkm_therm *VAR_4,
       uint32_t VAR_5, u8 VAR_6,
       const struct nvbios_therm_threshold *VAR_7,
       enum nvkm_therm_thrs VAR_8)
{
 struct nvkm_device *VAR_9 = VAR_4->subdev.device;
 enum nvkm_therm_thrs_direction VAR_10;
 enum nvkm_therm_thrs_state VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_2(VAR_4, VAR_8);
 VAR_13 = FUNC_0(VAR_9, VAR_5);


 if (VAR_13 == VAR_7->temp) {
  FUNC_4(VAR_9, VAR_5, VAR_7->temp - VAR_7->hysteresis);
  VAR_12 = VAR_1;
 } else {
  FUNC_4(VAR_9, VAR_5, VAR_7->temp);
  VAR_12 = VAR_2;
 }


 VAR_14 = VAR_4->func->temp_get(VAR_4);
 if (VAR_12 == VAR_2 && VAR_14 > VAR_7->temp)
  VAR_12 = VAR_1;
 else if (VAR_12 == VAR_1 &&
  VAR_14 < VAR_7->temp - VAR_7->hysteresis)
  VAR_12 = VAR_2;
 FUNC_3(VAR_4, VAR_8, VAR_12);


 if (VAR_11 < VAR_12)
  VAR_10 = VAR_3;
 else if (VAR_11 > VAR_12)
  VAR_10 = VAR_0;
 else
  return;


 FUNC_1(VAR_4, VAR_8, VAR_10);
}
