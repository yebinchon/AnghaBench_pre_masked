
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_power_gate {int vcn_gated; } ;
struct smu_power_context {struct smu_power_gate power_gate; } ;
struct smu_context {int pstate_sclk; int pstate_mclk; struct smu_power_context smu_power; } ;
typedef enum amd_pp_sensors { ____Placeholder_amd_pp_sensors } amd_pp_sensors ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_context*,int*,int) ;
 int FUNC_1 (struct smu_context*,int ) ;

int FUNC_2(struct smu_context *VAR_3, enum amd_pp_sensors VAR_4,
      void *VAR_5, uint32_t *VAR_6)
{
 struct smu_power_context *VAR_7 = &VAR_3->smu_power;
 struct smu_power_gate *VAR_8 = &VAR_7->power_gate;
 int VAR_9 = 0;

 if(!VAR_5 || !VAR_6)
  return -VAR_0;

 switch (VAR_4) {
 case 131:
  *((uint32_t *)VAR_5) = VAR_3->pstate_sclk;
  *VAR_6 = 4;
  break;
 case 132:
  *((uint32_t *)VAR_5) = VAR_3->pstate_mclk;
  *VAR_6 = 4;
  break;
 case 133:
  VAR_9 = FUNC_0(VAR_3, (uint32_t *)VAR_5, 2);
  *VAR_6 = 8;
  break;
 case 130:
  *(uint32_t *)VAR_5 = FUNC_1(VAR_3, VAR_1) ? 1 : 0;
  *VAR_6 = 4;
  break;
 case 129:
  *(uint32_t *)VAR_5 = FUNC_1(VAR_3, VAR_2) ? 1 : 0;
  *VAR_6 = 4;
  break;
 case 128:
  *(uint32_t *)VAR_5 = VAR_8->vcn_gated ? 0 : 1;
  *VAR_6 = 4;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 if (VAR_9)
  *VAR_6 = 0;

 return VAR_9;
}
