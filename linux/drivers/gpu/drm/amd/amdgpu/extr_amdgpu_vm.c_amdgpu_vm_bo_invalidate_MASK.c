
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct amdgpu_vm_bo_base {int moved; struct amdgpu_vm* vm; struct amdgpu_vm_bo_base* next; } ;
struct TYPE_13__ {TYPE_5__* bo; } ;
struct TYPE_14__ {TYPE_6__ base; } ;
struct amdgpu_vm {TYPE_7__ root; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ resv; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; struct amdgpu_vm_bo_base* vm_bo; struct amdgpu_bo* parent; struct amdgpu_bo* shadow; } ;
struct TYPE_10__ {scalar_t__ resv; } ;
struct TYPE_11__ {TYPE_3__ base; } ;
struct TYPE_12__ {TYPE_4__ tbo; } ;


 int FUNC_0 (struct amdgpu_vm_bo_base*) ;
 int FUNC_1 (struct amdgpu_vm_bo_base*) ;
 int FUNC_2 (struct amdgpu_vm_bo_base*) ;
 int FUNC_3 (struct amdgpu_vm_bo_base*) ;
 scalar_t__ VAR_0 ;

void FUNC_4(struct amdgpu_device *VAR_1,
        struct amdgpu_bo *VAR_2, bool VAR_3)
{
 struct amdgpu_vm_bo_base *VAR_4;


 if (VAR_2->parent && VAR_2->parent->shadow == VAR_2)
  VAR_2 = VAR_2->parent;

 for (VAR_4 = VAR_2->vm_bo; VAR_4; VAR_4 = VAR_4->next) {
  struct amdgpu_vm *VAR_5 = VAR_4->vm;

  if (VAR_3 && VAR_2->tbo.base.resv == VAR_5->root.base.bo->tbo.base.resv) {
   FUNC_0(VAR_4);
   continue;
  }

  if (VAR_4->moved)
   continue;
  VAR_4->moved = 1;

  if (VAR_2->tbo.type == VAR_0)
   FUNC_3(VAR_4);
  else if (VAR_2->tbo.base.resv == VAR_5->root.base.bo->tbo.base.resv)
   FUNC_2(VAR_4);
  else
   FUNC_1(VAR_4);
 }
}
