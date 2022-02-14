
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_power_context {scalar_t__ power_context_size; int * power_context; } ;
struct smu_context {int pm_enabled; struct smu_power_context smu_power; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1)
{
 struct smu_power_context *VAR_2 = &VAR_1->smu_power;

 if (!VAR_1->pm_enabled)
  return 0;
 if (!VAR_2->power_context || VAR_2->power_context_size == 0)
  return -VAR_0;

 FUNC_0(VAR_2->power_context);
 VAR_2->power_context = ((void*)0);
 VAR_2->power_context_size = 0;

 return 0;
}
