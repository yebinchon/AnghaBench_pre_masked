
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint64_t ;
typedef scalar_t__ uint32_t ;
struct smu_table {scalar_t__ size; uintptr_t mc_address; int * cpu_addr; } ;
struct smu_table_context {struct smu_table memory_pool; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (struct smu_context*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (uintptr_t) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_5)
{
 struct smu_table_context *VAR_6 = &VAR_5->smu_table;
 struct smu_table *VAR_7 = &VAR_6->memory_pool;
 int VAR_8 = 0;
 uint64_t VAR_9;
 uint32_t VAR_10, VAR_11;

 if (VAR_7->size == 0 || VAR_7->cpu_addr == ((void*)0))
  return VAR_8;

 VAR_9 = (uintptr_t)VAR_7->cpu_addr;
 VAR_11 = (uint32_t)FUNC_2(VAR_9);
 VAR_10 = (uint32_t)FUNC_0(VAR_9);

 VAR_8 = FUNC_1(VAR_5,
       VAR_3,
       VAR_11);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_5,
       VAR_4,
       VAR_10);
 if (VAR_8)
  return VAR_8;

 VAR_9 = VAR_7->mc_address;
 VAR_11 = (uint32_t)FUNC_2(VAR_9);
 VAR_10 = (uint32_t)FUNC_0(VAR_9);

 VAR_8 = FUNC_1(VAR_5, VAR_0,
       VAR_11);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_5, VAR_1,
       VAR_10);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_5, VAR_2,
       (uint32_t)VAR_7->size);
 if (VAR_8)
  return VAR_8;

 return VAR_8;
}
