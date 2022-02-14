
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega20_dpm_table {int mem_table; } ;
struct TYPE_2__ {struct vega20_dpm_table* dpm_context; } ;
struct smu_context {TYPE_1__ smu_dpm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*,int ,int ) ;
 int FUNC_2 (struct smu_context*,int *) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_2)
{
 int VAR_3 = 0;
 struct vega20_dpm_table *VAR_4 = VAR_2->smu_dpm.dpm_context;

 if (!VAR_2->smu_dpm.dpm_context)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_1, 0);
 VAR_3 = FUNC_2(VAR_2,
         &VAR_4->mem_table);
 if (VAR_3)
  FUNC_0("Failed to set uclk to highest dpm level");
 return VAR_3;
}
