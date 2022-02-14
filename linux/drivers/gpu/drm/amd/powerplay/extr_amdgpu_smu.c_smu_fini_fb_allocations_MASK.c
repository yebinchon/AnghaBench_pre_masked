
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu_table_context {scalar_t__ table_count; struct smu_table* tables; } ;
struct smu_table {scalar_t__ size; int cpu_addr; int mc_address; int bo; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_0)
{
 struct smu_table_context *VAR_1 = &VAR_0->smu_table;
 struct smu_table *VAR_2 = VAR_1->tables;
 uint32_t VAR_3 = VAR_1->table_count;
 uint32_t VAR_4 = 0;

 if (VAR_3 == 0 || VAR_2 == ((void*)0))
  return 0;

 for (VAR_4 = 0 ; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].size == 0)
   continue;
  FUNC_0(&VAR_2[VAR_4].bo,
          &VAR_2[VAR_4].mc_address,
          &VAR_2[VAR_4].cpu_addr);
 }

 return 0;
}
