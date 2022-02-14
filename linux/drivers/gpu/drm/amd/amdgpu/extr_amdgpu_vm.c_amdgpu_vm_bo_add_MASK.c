
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_vm {int dummy; } ;
struct TYPE_4__ {int xgmi_map_counter; int lock_pstate; } ;
struct amdgpu_device {TYPE_2__ vm_manager; } ;
struct amdgpu_bo_va {int ref_count; int is_xgmi; int invalids; int valids; int base; } ;
struct TYPE_3__ {int bdev; } ;
struct amdgpu_bo {int preferred_domains; TYPE_1__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct amdgpu_vm*,struct amdgpu_bo*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,int ) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 struct amdgpu_bo_va* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct amdgpu_bo_va *FUNC_8(struct amdgpu_device *VAR_2,
          struct amdgpu_vm *VAR_3,
          struct amdgpu_bo *VAR_4)
{
 struct amdgpu_bo_va *VAR_5;

 VAR_5 = FUNC_5(sizeof(struct amdgpu_bo_va), VAR_1);
 if (VAR_5 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_2(&VAR_5->base, VAR_3, VAR_4);

 VAR_5->ref_count = 1;
 FUNC_0(&VAR_5->valids);
 FUNC_0(&VAR_5->invalids);

 if (VAR_4 && FUNC_3(VAR_2, FUNC_1(VAR_4->tbo.bdev)) &&
     (VAR_4->preferred_domains & VAR_0)) {
  VAR_5->is_xgmi = 1;
  FUNC_6(&VAR_2->vm_manager.lock_pstate);

  if (++VAR_2->vm_manager.xgmi_map_counter == 1)
   FUNC_4(VAR_2, 1);
  FUNC_7(&VAR_2->vm_manager.lock_pstate);
 }

 return VAR_5;
}
