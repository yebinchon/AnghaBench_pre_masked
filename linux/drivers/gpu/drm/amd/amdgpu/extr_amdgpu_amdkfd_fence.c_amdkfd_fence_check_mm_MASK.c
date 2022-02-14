
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_amdkfd_fence {struct mm_struct* mm; } ;


 struct amdgpu_amdkfd_fence* FUNC_0 (struct dma_fence*) ;

bool FUNC_1(struct dma_fence *VAR_0, struct mm_struct *VAR_1)
{
 struct amdgpu_amdkfd_fence *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return 0;
 else if (VAR_2->mm == VAR_1)
  return 1;

 return 0;
}
