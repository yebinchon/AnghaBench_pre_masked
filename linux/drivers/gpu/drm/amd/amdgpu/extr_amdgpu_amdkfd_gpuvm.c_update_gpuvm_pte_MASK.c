
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_bo_va_list {struct amdgpu_bo_va* bo_va; } ;
struct amdgpu_sync {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_va {int last_pt_update; } ;


 int FUNC_0 (int *,struct amdgpu_sync*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_bo_va*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0,
  struct kfd_bo_va_list *VAR_1,
  struct amdgpu_sync *VAR_2)
{
 int VAR_3;
 struct amdgpu_bo_va *VAR_4 = VAR_1->bo_va;


 VAR_3 = FUNC_1(VAR_0, VAR_4, 0);
 if (VAR_3) {
  FUNC_2("amdgpu_vm_bo_update failed\n");
  return VAR_3;
 }

 return FUNC_0(((void*)0), VAR_2, VAR_4->last_pt_update, 0);
}
