
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int thermal_controller_type; int driver_pptable; struct smu_11_0_powerplay_table* power_play_table; } ;
struct smu_baco_context {int platform_support; int mutex; } ;
struct smu_context {struct smu_baco_context smu_baco; struct smu_table_context smu_table; } ;
struct smu_11_0_powerplay_table {int platform_caps; int thermal_controller_type; int smc_pptable; } ;
typedef int PPTable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_3)
{
 struct smu_11_0_powerplay_table *VAR_4 = ((void*)0);
 struct smu_table_context *VAR_5 = &VAR_3->smu_table;
 struct smu_baco_context *VAR_6 = &VAR_3->smu_baco;

 if (!VAR_5->power_play_table)
  return -VAR_0;

 VAR_4 = VAR_5->power_play_table;

 FUNC_0(VAR_5->driver_pptable, &VAR_4->smc_pptable,
        sizeof(PPTable_t));

 VAR_5->thermal_controller_type = VAR_4->thermal_controller_type;

 FUNC_1(&VAR_6->mutex);
 if (VAR_4->platform_caps & VAR_1 ||
     VAR_4->platform_caps & VAR_2)
  VAR_6->platform_support = 1;
 FUNC_2(&VAR_6->mutex);

 return 0;
}
