
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence_chan {int fence_ref; } ;
struct nouveau_fence {int base; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (int *) ;
 struct nouveau_fence* FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (int *,int ) ;
 struct nouveau_fence_chan* FUNC_3 (struct nouveau_fence*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct dma_fence *VAR_1)
{
 struct nouveau_fence *VAR_2 = FUNC_1(VAR_1);
 struct nouveau_fence_chan *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(&VAR_3->fence_ref, VAR_0);
 FUNC_0(&VAR_2->base);
}
