
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;
struct amdgpu_amdkfd_fence {int mm; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (int ,struct dma_fence*) ;
 struct amdgpu_amdkfd_fence* FUNC_2 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_3(struct dma_fence *VAR_0)
{
 struct amdgpu_amdkfd_fence *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1)
  return 0;

 if (FUNC_0(VAR_0))
  return 1;

 if (!FUNC_1(VAR_1->mm, VAR_0))
  return 1;

 return 0;
}
