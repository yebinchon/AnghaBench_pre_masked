
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_dpm_context {int dpm_context; } ;
struct smu_context {struct smu_dpm_context smu_dpm; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smu_context*,int*) ;
 int FUNC_1 (struct smu_context*,int,int ) ;

int FUNC_2(struct smu_context *VAR_2, enum amd_dpm_forced_level VAR_3)
{
 struct smu_dpm_context *VAR_4 = &(VAR_2->smu_dpm);
 int VAR_5 = 0;

 if (!VAR_4->dpm_context)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3,
         VAR_0);

 return VAR_5;
}
