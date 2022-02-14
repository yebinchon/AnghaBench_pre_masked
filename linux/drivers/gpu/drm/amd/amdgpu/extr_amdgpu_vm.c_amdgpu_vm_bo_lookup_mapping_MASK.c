
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct amdgpu_vm {int va; } ;
struct amdgpu_bo_va_mapping {int dummy; } ;


 struct amdgpu_bo_va_mapping* FUNC_0 (int *,int ,int ) ;

struct amdgpu_bo_va_mapping *FUNC_1(struct amdgpu_vm *VAR_0,
        uint64_t VAR_1)
{
 return FUNC_0(&VAR_0->va, VAR_1, VAR_1);
}
