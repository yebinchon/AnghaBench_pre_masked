
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_vm_update_params {TYPE_2__* adev; } ;
struct TYPE_7__ {struct amdgpu_bo* bo; } ;
struct amdgpu_vm_pt {struct amdgpu_vm_pt* entries; TYPE_3__ base; } ;
struct amdgpu_vm {TYPE_4__* update_funcs; } ;
struct amdgpu_bo {struct amdgpu_bo* parent; } ;
struct TYPE_8__ {int (* update ) (struct amdgpu_vm_update_params*,struct amdgpu_bo*,int,int,int,int ,int) ;} ;
struct TYPE_5__ {scalar_t__ root_level; } ;
struct TYPE_6__ {TYPE_1__ vm_manager; } ;


 int FUNC_0 (struct amdgpu_bo*,unsigned int,int*,int*) ;
 struct amdgpu_vm_pt* FUNC_1 (struct amdgpu_vm_pt*) ;
 int FUNC_2 (struct amdgpu_vm_update_params*,struct amdgpu_bo*,int,int,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_vm_update_params *VAR_0,
    struct amdgpu_vm *VAR_1,
    struct amdgpu_vm_pt *VAR_2)
{
 struct amdgpu_vm_pt *VAR_3 = FUNC_1(VAR_2);
 struct amdgpu_bo *VAR_4 = VAR_3->base.bo, *VAR_5;
 uint64_t VAR_6, VAR_7, VAR_8;
 unsigned VAR_9;

 for (VAR_9 = 0, VAR_5 = VAR_4->parent; VAR_5; ++VAR_9)
  VAR_5 = VAR_5->parent;

 VAR_9 += VAR_0->adev->vm_manager.root_level;
 FUNC_0(VAR_2->base.bo, VAR_9, &VAR_7, &VAR_8);
 VAR_6 = (VAR_2 - VAR_3->entries) * 8;
 return VAR_1->update_funcs->update(VAR_0, VAR_4, VAR_6, VAR_7, 1, 0, VAR_8);
}
