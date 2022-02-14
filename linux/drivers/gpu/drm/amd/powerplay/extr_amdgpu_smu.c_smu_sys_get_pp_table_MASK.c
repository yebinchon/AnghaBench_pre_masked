
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int power_play_table_size; void* power_play_table; void* hardcode_pptable; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;

int FUNC_0(struct smu_context *VAR_1, void **VAR_2)
{
 struct smu_table_context *VAR_3 = &VAR_1->smu_table;

 if (!VAR_3->power_play_table && !VAR_3->hardcode_pptable)
  return -VAR_0;

 if (VAR_3->hardcode_pptable)
  *VAR_2 = VAR_3->hardcode_pptable;
 else
  *VAR_2 = VAR_3->power_play_table;

 return VAR_3->power_play_table_size;
}
