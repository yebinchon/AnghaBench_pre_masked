
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_va_mapping {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,struct dma_fence*) ;
 int FUNC_1 (struct amdgpu_bo_va_mapping*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_1,
       struct amdgpu_vm *VAR_2,
       struct amdgpu_bo_va_mapping *VAR_3,
       struct dma_fence *VAR_4)
{
 if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_1, VAR_4);
 FUNC_1(VAR_3);
}
