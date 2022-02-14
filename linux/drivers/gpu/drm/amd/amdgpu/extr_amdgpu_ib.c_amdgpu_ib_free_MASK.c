
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;
struct amdgpu_ib {int sa_bo; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,int *,struct dma_fence*) ;

void FUNC_1(struct amdgpu_device *VAR_0, struct amdgpu_ib *VAR_1,
      struct dma_fence *VAR_2)
{
 FUNC_0(VAR_0, &VAR_1->sa_bo, VAR_2);
}
