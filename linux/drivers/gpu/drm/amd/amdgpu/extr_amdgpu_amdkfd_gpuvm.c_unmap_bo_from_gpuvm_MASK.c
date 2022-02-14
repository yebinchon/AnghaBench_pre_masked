
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_bo_va_list {int va; struct amdgpu_bo_va* bo_va; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_sync {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {struct amdgpu_vm* vm; } ;
struct amdgpu_bo_va {int last_pt_update; TYPE_1__ base; } ;


 int FUNC_0 (int *,struct amdgpu_sync*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_bo_va*,int ) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_vm*,int *) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0,
    struct kfd_bo_va_list *VAR_1,
    struct amdgpu_sync *VAR_2)
{
 struct amdgpu_bo_va *VAR_3 = VAR_1->bo_va;
 struct amdgpu_vm *VAR_4 = VAR_3->base.vm;

 FUNC_1(VAR_0, VAR_3, VAR_1->va);

 FUNC_2(VAR_0, VAR_4, &VAR_3->last_pt_update);

 FUNC_0(((void*)0), VAR_2, VAR_3->last_pt_update, 0);

 return 0;
}
