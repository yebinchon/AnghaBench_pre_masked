
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;
typedef enum amd_pp_task { ____Placeholder_amd_pp_task } amd_pp_task ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;





 int FUNC_0 (struct smu_context*,int,int) ;
 int FUNC_1 (struct smu_context*) ;
 int FUNC_2 (struct smu_context*) ;

int FUNC_3(struct smu_context *VAR_0,
      enum amd_dpm_forced_level VAR_1,
      enum amd_pp_task VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2) {
 case 129:
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_2(VAR_0);
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_0(VAR_0, VAR_1, 0);
  break;
 case 130:
 case 128:
  VAR_3 = FUNC_0(VAR_0, VAR_1, 1);
  break;
 default:
  break;
 }

 return VAR_3;
}
