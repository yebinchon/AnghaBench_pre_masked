
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;
struct smu_11_0_cmn2aisc_mapping {int map_to; int valid_mapping; } ;
typedef enum PP_SMC_POWER_PROFILE { ____Placeholder_PP_SMC_POWER_PROFILE } PP_SMC_POWER_PROFILE ;


 int VAR_0 ;
 int VAR_1 ;
 struct smu_11_0_cmn2aisc_mapping* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct smu_context *VAR_3, enum PP_SMC_POWER_PROFILE VAR_4)
{
 struct smu_11_0_cmn2aisc_mapping VAR_5;

 if (VAR_4 > VAR_1)
  return -VAR_0;

 VAR_5 = VAR_2[VAR_4];
 if (!(VAR_5.valid_mapping)) {
  return -VAR_0;
 }

 return VAR_5.map_to;
}
