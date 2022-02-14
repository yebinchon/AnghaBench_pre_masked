
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int table_count; } ;
struct smu_context {int smc_if_version; int * ppt_funcs; struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct smu_context *VAR_3)
{
 struct smu_table_context *VAR_4 = &VAR_3->smu_table;

 VAR_3->ppt_funcs = &VAR_2;
 VAR_3->smc_if_version = VAR_0;
 VAR_4->table_count = VAR_1;
}
