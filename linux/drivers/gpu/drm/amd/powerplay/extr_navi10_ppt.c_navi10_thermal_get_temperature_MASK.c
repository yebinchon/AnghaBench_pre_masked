
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum amd_pp_sensors { ____Placeholder_amd_pp_sensors } amd_pp_sensors ;
struct TYPE_3__ {int TemperatureHotspot; int TemperatureEdge; int TemperatureMem; } ;
typedef TYPE_1__ SmuMetrics_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smu_context*,TYPE_1__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_2,
          enum amd_pp_sensors VAR_3,
          uint32_t *VAR_4)
{
 SmuMetrics_t VAR_5;
 int VAR_6 = 0;

 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 switch (VAR_3) {
 case 129:
  *VAR_4 = VAR_5.TemperatureHotspot *
   VAR_1;
  break;
 case 130:
  *VAR_4 = VAR_5.TemperatureEdge *
   VAR_1;
  break;
 case 128:
  *VAR_4 = VAR_5.TemperatureMem *
   VAR_1;
  break;
 default:
  FUNC_1("Invalid sensor for retrieving temp\n");
  return -VAR_0;
 }

 return 0;
}
