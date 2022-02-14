
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table {scalar_t__ size; int cpu_addr; int mc_address; int bo; } ;
struct smu_table_context {struct smu_table memory_pool; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct smu_table*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_1)
{
 struct smu_table_context *VAR_2 = &VAR_1->smu_table;
 struct smu_table *VAR_3 = &VAR_2->memory_pool;
 int VAR_4 = 0;

 if (VAR_3->size == VAR_0)
  return VAR_4;

 FUNC_0(&VAR_3->bo,
         &VAR_3->mc_address,
         &VAR_3->cpu_addr);

 FUNC_1(VAR_3, 0, sizeof(struct smu_table));

 return VAR_4;
}
