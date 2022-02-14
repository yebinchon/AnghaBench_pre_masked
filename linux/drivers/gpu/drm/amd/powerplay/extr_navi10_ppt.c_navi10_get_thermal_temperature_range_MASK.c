
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_temperature_range {int max; } ;
struct smu_table_context {struct smu_11_0_powerplay_table* power_play_table; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct smu_11_0_powerplay_table {int software_shutdown_temp; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct smu_context *VAR_2,
      struct smu_temperature_range *VAR_3)
{
 struct smu_table_context *VAR_4 = &VAR_2->smu_table;
 struct smu_11_0_powerplay_table *VAR_5 = VAR_4->power_play_table;

 if (!VAR_3 || !VAR_5)
  return -VAR_0;

 VAR_3->max = VAR_5->software_shutdown_temp *
  VAR_1;

 return 0;
}
