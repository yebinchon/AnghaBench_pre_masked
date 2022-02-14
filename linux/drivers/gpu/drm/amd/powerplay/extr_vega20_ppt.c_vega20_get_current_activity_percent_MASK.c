
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum amd_pp_sensors { ____Placeholder_amd_pp_sensors } amd_pp_sensors ;
struct TYPE_3__ {int AverageUclkActivity; int AverageGfxActivity; } ;
typedef TYPE_1__ SmuMetrics_t ;




 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_1,
            enum amd_pp_sensors VAR_2,
            uint32_t *VAR_3)
{
 int VAR_4 = 0;
 SmuMetrics_t VAR_5;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 switch (VAR_2) {
 case 129:
  *VAR_3 = VAR_5.AverageGfxActivity;
  break;
 case 128:
  *VAR_3 = VAR_5.AverageUclkActivity;
  break;
 default:
  FUNC_0("Invalid sensor for retrieving clock activity\n");
  return -VAR_0;
 }

 return 0;
}
