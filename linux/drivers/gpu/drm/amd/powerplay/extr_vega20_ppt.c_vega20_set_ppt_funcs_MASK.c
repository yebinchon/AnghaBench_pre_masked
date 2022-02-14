
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int table_count; } ;
struct smu_context {int * ppt_funcs; struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct smu_context *VAR_2)
{
 struct smu_table_context *VAR_3 = &VAR_2->smu_table;

 VAR_2->ppt_funcs = &VAR_1;
 VAR_3->table_count = VAR_0;
}
