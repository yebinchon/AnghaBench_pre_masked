
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {scalar_t__ driver_pptable; struct smu_table* tables; } ;
struct smu_table {int size; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct smu_context*) ;
 int FUNC_2 (struct smu_context*) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_4)
{
 int VAR_5;

 struct smu_table_context *VAR_6 = &VAR_4->smu_table;
 struct smu_table *VAR_7 = &VAR_6->tables[VAR_3];

 if (VAR_6->driver_pptable)
  return -VAR_0;

 VAR_6->driver_pptable = FUNC_0(VAR_7->size, VAR_2);

 if (!VAR_6->driver_pptable)
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4);

 return VAR_5;
}
