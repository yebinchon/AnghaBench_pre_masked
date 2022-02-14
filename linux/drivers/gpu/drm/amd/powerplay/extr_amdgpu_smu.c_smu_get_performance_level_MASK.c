
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_dpm_context {int dpm_level; int dpm_context; } ;
struct smu_context {int mutex; struct smu_dpm_context smu_dpm; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

enum amd_dpm_forced_level FUNC_2(struct smu_context *VAR_1)
{
 struct smu_dpm_context *VAR_2 = &(VAR_1->smu_dpm);
 enum amd_dpm_forced_level VAR_3;

 if (!VAR_2->dpm_context)
  return -VAR_0;

 FUNC_0(&(VAR_1->mutex));
 VAR_3 = VAR_2->dpm_level;
 FUNC_1(&(VAR_1->mutex));

 return VAR_3;
}
