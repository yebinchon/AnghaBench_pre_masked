
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kfd_bo_va_list {int va; int pte_flags; TYPE_2__* bo_va; } ;
struct amdgpu_sync {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {int bo; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct amdgpu_device*,struct kfd_bo_va_list*,struct amdgpu_sync*) ;
 int FUNC_4 (struct amdgpu_device*,struct kfd_bo_va_list*,struct amdgpu_sync*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_0,
  struct kfd_bo_va_list *VAR_1, struct amdgpu_sync *VAR_2,
  bool VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_0, VAR_1->bo_va, VAR_1->va, 0,
          FUNC_0(VAR_1->bo_va->base.bo),
          VAR_1->pte_flags);
 if (VAR_4) {
  FUNC_2("Failed to map VA 0x%llx in vm. ret %d\n",
    VAR_1->va, VAR_4);
  return VAR_4;
 }

 if (VAR_3)
  return 0;

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_2("update_gpuvm_pte() failed\n");
  goto update_gpuvm_pte_failed;
 }

 return 0;

update_gpuvm_pte_failed:
 FUNC_3(VAR_0, VAR_1, VAR_2);
 return VAR_4;
}
