
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


struct amdgpu_vm_bo_base {struct amdgpu_vm_bo_base* next; int vm_status; struct amdgpu_bo* bo; struct amdgpu_vm* vm; } ;
struct TYPE_13__ {TYPE_4__* bo; } ;
struct TYPE_14__ {TYPE_5__ base; } ;
struct amdgpu_vm {int bulk_moveable; TYPE_6__ root; } ;
struct TYPE_15__ {int mem_type; } ;
struct TYPE_9__ {scalar_t__ resv; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_7__ mem; TYPE_1__ base; } ;
struct amdgpu_bo {int preferred_domains; TYPE_8__ tbo; scalar_t__ parent; struct amdgpu_vm_bo_base* vm_bo; } ;
struct TYPE_10__ {scalar_t__ resv; } ;
struct TYPE_11__ {TYPE_2__ base; } ;
struct TYPE_12__ {TYPE_3__ tbo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_vm_bo_base*) ;
 int FUNC_3 (struct amdgpu_vm_bo_base*) ;
 int FUNC_4 (struct amdgpu_vm_bo_base*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_5(struct amdgpu_vm_bo_base *VAR_1,
       struct amdgpu_vm *VAR_2,
       struct amdgpu_bo *VAR_3)
{
 VAR_1->vm = VAR_2;
 VAR_1->bo = VAR_3;
 VAR_1->next = ((void*)0);
 FUNC_0(&VAR_1->vm_status);

 if (!VAR_3)
  return;
 VAR_1->next = VAR_3->vm_bo;
 VAR_3->vm_bo = VAR_1;

 if (VAR_3->tbo.base.resv != VAR_2->root.base.bo->tbo.base.resv)
  return;

 VAR_2->bulk_moveable = 0;
 if (VAR_3->tbo.type == VAR_0 && VAR_3->parent)
  FUNC_4(VAR_1);
 else
  FUNC_3(VAR_1);

 if (VAR_3->preferred_domains &
     FUNC_1(VAR_3->tbo.mem.mem_type))
  return;






 FUNC_2(VAR_1);
}
