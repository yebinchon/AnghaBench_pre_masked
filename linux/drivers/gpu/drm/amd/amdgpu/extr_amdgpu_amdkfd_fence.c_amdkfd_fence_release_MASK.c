
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;
struct amdgpu_amdkfd_fence {int mm; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dma_fence*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct amdgpu_amdkfd_fence* FUNC_3 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_4(struct dma_fence *VAR_1)
{
 struct amdgpu_amdkfd_fence *VAR_2 = FUNC_3(VAR_1);




 if (FUNC_0(!VAR_2))
  return;

 FUNC_2(VAR_2->mm);
 FUNC_1(VAR_1, VAR_0);
}
