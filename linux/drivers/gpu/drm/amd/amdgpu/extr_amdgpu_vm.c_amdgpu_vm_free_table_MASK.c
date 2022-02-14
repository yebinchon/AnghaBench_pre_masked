
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* bo; int vm_status; } ;
struct amdgpu_vm_pt {int * entries; TYPE_1__ base; } ;
struct TYPE_4__ {struct TYPE_4__* shadow; int * vm_bo; } ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_vm_pt *VAR_0)
{
 if (VAR_0->base.bo) {
  VAR_0->base.bo->vm_bo = ((void*)0);
  FUNC_2(&VAR_0->base.vm_status);
  FUNC_0(&VAR_0->base.bo->shadow);
  FUNC_0(&VAR_0->base.bo);
 }
 FUNC_1(VAR_0->entries);
 VAR_0->entries = ((void*)0);
}
