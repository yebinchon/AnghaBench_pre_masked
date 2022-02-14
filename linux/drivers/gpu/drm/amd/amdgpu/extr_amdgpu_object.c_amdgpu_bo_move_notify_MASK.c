
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_reg {int mem_type; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; int bdev; } ;
struct amdgpu_device {int num_evictions; } ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_bo*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct amdgpu_bo*,int ,int ) ;
 struct amdgpu_bo* FUNC_6 (struct ttm_buffer_object*) ;

void FUNC_7(struct ttm_buffer_object *VAR_0,
      bool VAR_1,
      struct ttm_mem_reg *VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_2(VAR_0->bdev);
 struct amdgpu_bo *VAR_4;
 struct ttm_mem_reg *VAR_5 = &VAR_0->mem;

 if (!FUNC_0(VAR_0))
  return;

 VAR_4 = FUNC_6(VAR_0);
 FUNC_3(VAR_3, VAR_4, VAR_1);

 FUNC_1(VAR_4);


 if (VAR_1)
  FUNC_4(&VAR_3->num_evictions);


 if (!VAR_2)
  return;


 FUNC_5(VAR_4, VAR_2->mem_type, VAR_5->mem_type);
}
