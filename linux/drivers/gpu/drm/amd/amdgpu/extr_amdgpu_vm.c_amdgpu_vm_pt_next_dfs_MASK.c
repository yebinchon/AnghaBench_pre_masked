
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_vm_pt_cursor {int * entry; int parent; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_vm_pt_cursor*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,struct amdgpu_vm_pt_cursor*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*,struct amdgpu_vm_pt_cursor*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_0,
      struct amdgpu_vm_pt_cursor *VAR_1)
{
 if (!VAR_1->entry)
  return;

 if (!VAR_1->parent)
  VAR_1->entry = ((void*)0);
 else if (FUNC_2(VAR_0, VAR_1))
  while (FUNC_1(VAR_0, VAR_1));
 else
  FUNC_0(VAR_1);
}
