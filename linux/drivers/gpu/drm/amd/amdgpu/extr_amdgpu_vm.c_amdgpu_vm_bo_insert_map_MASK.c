
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* bo; } ;
struct TYPE_15__ {TYPE_6__ base; } ;
struct amdgpu_vm {int moved; TYPE_7__ root; int va; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_va_mapping {int flags; int list; struct amdgpu_bo_va* bo_va; } ;
struct TYPE_16__ {int vm_status; int moved; struct amdgpu_bo* bo; struct amdgpu_vm* vm; } ;
struct amdgpu_bo_va {TYPE_8__ base; int invalids; } ;
struct TYPE_9__ {scalar_t__ resv; } ;
struct TYPE_10__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;
struct TYPE_11__ {scalar_t__ resv; } ;
struct TYPE_12__ {TYPE_3__ base; } ;
struct TYPE_13__ {TYPE_4__ tbo; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_bo_va_mapping*,int *) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct amdgpu_bo_va*,struct amdgpu_bo_va_mapping*) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_1,
        struct amdgpu_bo_va *VAR_2,
        struct amdgpu_bo_va_mapping *VAR_3)
{
 struct amdgpu_vm *VAR_4 = VAR_2->base.vm;
 struct amdgpu_bo *VAR_5 = VAR_2->base.bo;

 VAR_3->bo_va = VAR_2;
 FUNC_2(&VAR_3->list, &VAR_2->invalids);
 FUNC_0(VAR_3, &VAR_4->va);

 if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_1);

 if (VAR_5 && VAR_5->tbo.base.resv == VAR_4->root.base.bo->tbo.base.resv &&
     !VAR_2->base.moved) {
  FUNC_3(&VAR_2->base.vm_status, &VAR_4->moved);
 }
 FUNC_4(VAR_2, VAR_3);
}
