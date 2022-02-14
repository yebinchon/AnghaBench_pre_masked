
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_vm_pt_cursor {struct amdgpu_vm_pt* entry; } ;
struct amdgpu_vm_pt {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct amdgpu_vm_pt_cursor *VAR_0,
          struct amdgpu_vm_pt *VAR_1)
{
 return VAR_1 && (!VAR_0 || VAR_1 != VAR_0->entry);
}
