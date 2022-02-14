
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_dpm_context {int dpm_context_size; scalar_t__ dpm_context; } ;
struct smu_context {struct smu_dpm_context smu_dpm; } ;
struct smu_11_0_dpm_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_3)
{
 struct smu_dpm_context *VAR_4 = &VAR_3->smu_dpm;

 if (VAR_4->dpm_context)
  return -VAR_0;

 VAR_4->dpm_context = FUNC_0(sizeof(struct smu_11_0_dpm_context),
           VAR_2);
 if (!VAR_4->dpm_context)
  return -VAR_1;

 VAR_4->dpm_context_size = sizeof(struct smu_11_0_dpm_context);

 return 0;
}
