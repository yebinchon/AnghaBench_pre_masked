
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_table_context {int table_count; struct smu_table* tables; } ;
struct smu_table {void* cpu_addr; int size; int mc_address; } ;
struct smu_context {struct amdgpu_device* adev; struct smu_table_context smu_table; } ;
struct amdgpu_device {TYPE_1__* nbio_funcs; } ;
typedef enum smu_table_id { ____Placeholder_smu_table_id } smu_table_id ;
struct TYPE_2__ {int (* hdp_flush ) (struct amdgpu_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (struct smu_context*,int ,int) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (struct amdgpu_device*,int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct smu_context *VAR_5, enum smu_table_id VAR_6, int VAR_7,
       void *VAR_8, bool VAR_9)
{
 struct smu_table_context *VAR_10 = &VAR_5->smu_table;
 struct amdgpu_device *VAR_11 = VAR_5->adev;
 struct smu_table *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 int VAR_14 = FUNC_3(VAR_5, VAR_6);

 if (!VAR_8 || VAR_14 >= VAR_10->table_count || VAR_14 < 0)
  return -VAR_0;

 VAR_12 = &VAR_10->tables[VAR_6];

 if (VAR_9)
  FUNC_1(VAR_12->cpu_addr, VAR_8, VAR_12->size);

 VAR_13 = FUNC_2(VAR_5, VAR_1,
       FUNC_5(VAR_12->mc_address));
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_2(VAR_5, VAR_2,
       FUNC_0(VAR_12->mc_address));
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_2(VAR_5, VAR_9 ?
       VAR_3 :
       VAR_4,
       VAR_14 | ((VAR_7 & 0xFFFF) << 16));
 if (VAR_13)
  return VAR_13;


 VAR_11->nbio_funcs->hdp_flush(VAR_11, ((void*)0));

 if (!VAR_9)
  FUNC_1(VAR_8, VAR_12->cpu_addr, VAR_12->size);

 return VAR_13;
}
