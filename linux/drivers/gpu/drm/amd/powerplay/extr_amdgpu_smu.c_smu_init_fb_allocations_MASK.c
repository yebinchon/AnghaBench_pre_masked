
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu_table_context {scalar_t__ table_count; struct smu_table* tables; } ;
struct smu_table {scalar_t__ size; int cpu_addr; int mc_address; int bo; int domain; int align; } ;
struct smu_context {struct smu_table_context smu_table; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 struct smu_table_context *VAR_3 = &VAR_1->smu_table;
 struct smu_table *VAR_4 = VAR_3->tables;
 uint32_t VAR_5 = VAR_3->table_count;
 uint32_t VAR_6 = 0;
 int32_t VAR_7 = 0;

 if (VAR_5 <= 0)
  return -VAR_0;

 for (VAR_6 = 0 ; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6].size == 0)
   continue;
  VAR_7 = FUNC_0(VAR_2,
           VAR_4[VAR_6].size,
           VAR_4[VAR_6].align,
           VAR_4[VAR_6].domain,
           &VAR_4[VAR_6].bo,
           &VAR_4[VAR_6].mc_address,
           &VAR_4[VAR_6].cpu_addr);
  if (VAR_7)
   goto failed;
 }

 return 0;
failed:
 for (; VAR_6 > 0; VAR_6--) {
  if (VAR_4[VAR_6].size == 0)
   continue;
  FUNC_1(&VAR_4[VAR_6].bo,
          &VAR_4[VAR_6].mc_address,
          &VAR_4[VAR_6].cpu_addr);

 }
 return VAR_7;
}
