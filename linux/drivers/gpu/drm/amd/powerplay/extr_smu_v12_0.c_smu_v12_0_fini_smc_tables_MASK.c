
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {scalar_t__ table_count; int * tables; int * clocks_table; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1)
{
 struct smu_table_context *VAR_2 = &VAR_1->smu_table;

 if (!VAR_2->tables || VAR_2->table_count == 0)
  return -VAR_0;

 FUNC_0(VAR_2->clocks_table);
 FUNC_0(VAR_2->tables);

 VAR_2->clocks_table = ((void*)0);
 VAR_2->tables = ((void*)0);

 return 0;
}
