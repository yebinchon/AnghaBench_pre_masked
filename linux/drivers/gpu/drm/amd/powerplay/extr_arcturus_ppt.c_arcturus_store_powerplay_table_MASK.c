
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int thermal_controller_type; int driver_pptable; struct smu_11_0_powerplay_table* power_play_table; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct smu_11_0_powerplay_table {int thermal_controller_type; int smc_pptable; } ;
typedef int PPTable_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1)
{
 struct smu_11_0_powerplay_table *VAR_2 = ((void*)0);
 struct smu_table_context *VAR_3 = &VAR_1->smu_table;
 int VAR_4 = 0;

 if (!VAR_3->power_play_table)
  return -VAR_0;

 VAR_2 = VAR_3->power_play_table;

 FUNC_0(VAR_3->driver_pptable, &VAR_2->smc_pptable,
        sizeof(PPTable_t));

 VAR_3->thermal_controller_type = VAR_2->thermal_controller_type;

 return VAR_4;
}
