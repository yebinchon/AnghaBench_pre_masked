
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_power_context {int power_context_size; scalar_t__ power_context; } ;
struct smu_context {int pm_enabled; struct smu_power_context smu_power; } ;
struct smu_11_0_dpm_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_3)
{
 struct smu_power_context *VAR_4 = &VAR_3->smu_power;

 if (!VAR_3->pm_enabled)
  return 0;
 if (VAR_4->power_context || VAR_4->power_context_size != 0)
  return -VAR_0;

 VAR_4->power_context = FUNC_0(sizeof(struct smu_11_0_dpm_context),
        VAR_2);
 if (!VAR_4->power_context)
  return -VAR_1;
 VAR_4->power_context_size = sizeof(struct smu_11_0_dpm_context);

 return 0;
}
