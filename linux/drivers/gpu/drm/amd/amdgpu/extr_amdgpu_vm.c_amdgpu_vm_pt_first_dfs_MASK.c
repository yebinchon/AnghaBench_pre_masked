
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_vm_pt_cursor {int dummy; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*,struct amdgpu_vm_pt_cursor*) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_vm*,int ,struct amdgpu_vm_pt_cursor*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
       struct amdgpu_vm *VAR_1,
       struct amdgpu_vm_pt_cursor *VAR_2,
       struct amdgpu_vm_pt_cursor *VAR_3)
{
 if (VAR_2)
  *VAR_3 = *VAR_2;
 else
  FUNC_1(VAR_0, VAR_1, 0, VAR_3);
 while (FUNC_0(VAR_0, VAR_3));
}
