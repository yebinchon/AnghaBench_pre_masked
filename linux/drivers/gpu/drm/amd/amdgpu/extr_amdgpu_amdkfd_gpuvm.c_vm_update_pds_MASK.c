
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct amdgpu_bo* bo; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct amdgpu_vm {int last_update; TYPE_2__ root; } ;
struct amdgpu_sync {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_6__ {int bdev; } ;
struct amdgpu_bo {TYPE_3__ tbo; } ;


 int FUNC_0 (int *,struct amdgpu_sync*,int ,int) ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_vm*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_vm *VAR_0, struct amdgpu_sync *VAR_1)
{
 struct amdgpu_bo *VAR_2 = VAR_0->root.base.bo;
 struct amdgpu_device *VAR_3 = FUNC_1(VAR_2->tbo.bdev);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(((void*)0), VAR_1, VAR_0->last_update, 0);
}
