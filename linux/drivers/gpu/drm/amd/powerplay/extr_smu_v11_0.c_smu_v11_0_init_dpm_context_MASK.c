
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_dpm_context {scalar_t__ dpm_context_size; scalar_t__ dpm_context; } ;
struct smu_context {struct smu_dpm_context smu_dpm; } ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1)
{
 struct smu_dpm_context *VAR_2 = &VAR_1->smu_dpm;

 if (VAR_2->dpm_context || VAR_2->dpm_context_size != 0)
  return -VAR_0;

 return FUNC_0(VAR_1);
}
