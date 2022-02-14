
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;
struct amdgpu_flip_work {int cb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*,int *,int ) ;
 int FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_flip_work *VAR_1,
          struct dma_fence **VAR_2)
{
 struct dma_fence *VAR_3= *VAR_2;

 if (VAR_3 == ((void*)0))
  return 0;

 *VAR_2 = ((void*)0);

 if (!FUNC_0(VAR_3, &VAR_1->cb,
        VAR_0))
  return 1;

 FUNC_1(VAR_3);
 return 0;
}
