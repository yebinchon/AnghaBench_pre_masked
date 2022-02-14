
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct smu_table {int size; int cpu_addr; int mc_address; int bo; int domain; int align; } ;
struct smu_table_context {struct smu_table memory_pool; } ;
struct smu_context {int pool_size; struct smu_table_context smu_table; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 struct smu_table_context *VAR_5 = &VAR_3->smu_table;
 struct smu_table *VAR_6 = &VAR_5->memory_pool;
 uint64_t VAR_7 = VAR_3->pool_size;
 int VAR_8 = 0;

 if (VAR_7 == VAR_2)
  return VAR_8;

 VAR_6->size = VAR_7;
 VAR_6->align = VAR_1;
 VAR_6->domain = VAR_0;

 switch (VAR_7) {
 case 130:
 case 128:
 case 131:
 case 129:
  VAR_8 = FUNC_0(VAR_4,
           VAR_6->size,
           VAR_6->align,
           VAR_6->domain,
           &VAR_6->bo,
           &VAR_6->mc_address,
           &VAR_6->cpu_addr);
  break;
 default:
  break;
 }

 return VAR_8;
}
