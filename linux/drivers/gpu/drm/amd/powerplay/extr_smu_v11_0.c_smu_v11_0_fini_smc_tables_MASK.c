
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {scalar_t__ table_count; scalar_t__ metrics_time; int * metrics_table; int * tables; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct smu_context*) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_1)
{
 struct smu_table_context *VAR_2 = &VAR_1->smu_table;
 int VAR_3 = 0;

 if (!VAR_2->tables || VAR_2->table_count == 0)
  return -VAR_0;

 FUNC_0(VAR_2->tables);
 FUNC_0(VAR_2->metrics_table);
 VAR_2->tables = ((void*)0);
 VAR_2->table_count = 0;
 VAR_2->metrics_table = ((void*)0);
 VAR_2->metrics_time = 0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;
 return 0;
}
