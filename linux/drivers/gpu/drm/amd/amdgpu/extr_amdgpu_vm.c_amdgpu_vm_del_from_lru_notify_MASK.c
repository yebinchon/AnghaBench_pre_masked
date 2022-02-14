
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


struct TYPE_16__ {int placement; } ;
struct ttm_buffer_object {TYPE_8__ mem; } ;
struct amdgpu_vm_bo_base {struct amdgpu_vm* vm; struct amdgpu_vm_bo_base* next; } ;
struct TYPE_14__ {TYPE_5__* bo; } ;
struct TYPE_15__ {TYPE_6__ base; } ;
struct amdgpu_vm {int bulk_moveable; TYPE_7__ root; } ;
struct TYPE_9__ {scalar_t__ resv; } ;
struct TYPE_10__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; struct amdgpu_vm_bo_base* vm_bo; int parent; } ;
struct TYPE_11__ {scalar_t__ resv; } ;
struct TYPE_12__ {TYPE_3__ base; } ;
struct TYPE_13__ {TYPE_4__ tbo; } ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_buffer_object*) ;
 struct amdgpu_bo* FUNC_1 (struct ttm_buffer_object*) ;

void FUNC_2(struct ttm_buffer_object *VAR_1)
{
 struct amdgpu_bo *VAR_2;
 struct amdgpu_vm_bo_base *VAR_3;

 if (!FUNC_0(VAR_1))
  return;

 if (VAR_1->mem.placement & VAR_0)
  return;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2->parent)
  return;
 for (VAR_3 = VAR_2->vm_bo; VAR_3; VAR_3 = VAR_3->next) {
  struct amdgpu_vm *VAR_4 = VAR_3->vm;

  if (VAR_2->tbo.base.resv == VAR_4->root.base.bo->tbo.base.resv)
   VAR_4->bulk_moveable = 0;
 }

}
