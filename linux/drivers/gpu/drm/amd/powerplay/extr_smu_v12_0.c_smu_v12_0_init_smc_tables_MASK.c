
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {scalar_t__ table_count; struct smu_table* tables; } ;
struct smu_table {int dummy; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct smu_table* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct smu_context*,struct smu_table*) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_4)
{
 struct smu_table_context *VAR_5 = &VAR_4->smu_table;
 struct smu_table *VAR_6 = ((void*)0);

 if (VAR_5->tables || VAR_5->table_count == 0)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3, sizeof(struct smu_table),
    VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_5->tables = VAR_6;

 return FUNC_1(VAR_4, VAR_6);
}
