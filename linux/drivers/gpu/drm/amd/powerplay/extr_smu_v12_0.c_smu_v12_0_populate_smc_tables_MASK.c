
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int clocks_table; struct smu_table* tables; } ;
struct smu_table {int cpu_addr; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct smu_context*,size_t,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_2)
{
 struct smu_table_context *VAR_3 = &VAR_2->smu_table;
 struct smu_table *VAR_4 = ((void*)0);

 VAR_4 = &VAR_3->tables[VAR_1];
 if (!VAR_4)
  return -VAR_0;

 if (!VAR_4->cpu_addr)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_1, 0, VAR_3->clocks_table, 0);
}
