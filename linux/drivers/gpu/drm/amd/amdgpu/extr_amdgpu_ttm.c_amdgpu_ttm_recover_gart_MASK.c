
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_buffer_object {int mem; int ttm; int bdev; } ;
struct amdgpu_device {int dummy; } ;


 struct amdgpu_device* FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*,struct ttm_buffer_object*,int ) ;
 int FUNC_2 (struct amdgpu_device*,int ,int *) ;

int FUNC_3(struct ttm_buffer_object *VAR_0)
{
 struct amdgpu_device *VAR_1 = FUNC_0(VAR_0->bdev);
 uint64_t VAR_2;
 int VAR_3;

 if (!VAR_0->ttm)
  return 0;

 VAR_2 = FUNC_2(VAR_1, VAR_0->ttm, &VAR_0->mem);
 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);

 return VAR_3;
}
