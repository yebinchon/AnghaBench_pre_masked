
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_table_context {TYPE_1__* driver_pptable; } ;
struct smu_context {int sensor_lock; struct smu_table_context smu_table; } ;
typedef enum amd_pp_sensors { ____Placeholder_amd_pp_sensors } amd_pp_sensors ;
struct TYPE_2__ {int FanMaximumRpm; } ;
typedef TYPE_1__ PPTable_t ;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smu_context*,int,int*) ;
 int FUNC_3 (struct smu_context*,int*) ;
 int FUNC_4 (struct smu_context*,int,int*) ;
 int FUNC_5 (struct smu_context*,int,void*,int*) ;

__attribute__((used)) static int FUNC_6(struct smu_context *VAR_1,
     enum amd_pp_sensors VAR_2,
     void *VAR_3, uint32_t *VAR_4)
{
 int VAR_5 = 0;
 struct smu_table_context *VAR_6 = &VAR_1->smu_table;
 PPTable_t *VAR_7 = VAR_6->driver_pptable;

 if(!VAR_3 || !VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_1->sensor_lock);
 switch (VAR_2) {
 case 130:
  *(uint32_t *)VAR_3 = VAR_7->FanMaximumRpm;
  *VAR_4 = 4;
  break;
 case 129:
 case 133:
  VAR_5 = FUNC_2(VAR_1, VAR_2, (uint32_t *)VAR_3);
  *VAR_4 = 4;
  break;
 case 132:
  VAR_5 = FUNC_3(VAR_1, (uint32_t *)VAR_3);
  *VAR_4 = 4;
  break;
 case 131:
 case 134:
 case 128:
  VAR_5 = FUNC_4(VAR_1, VAR_2, (uint32_t *)VAR_3);
  *VAR_4 = 4;
  break;
 default:
  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
 }
 FUNC_1(&VAR_1->sensor_lock);

 return VAR_5;
}
