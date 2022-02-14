
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence_chain {struct dma_fence* fence; int prev; } ;
struct dma_fence {int refcount; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int *) ;
 struct dma_fence* FUNC_4 (int ,int) ;
 struct dma_fence_chain* FUNC_5 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_6(struct dma_fence *VAR_0)
{
 struct dma_fence_chain *VAR_1 = FUNC_5(VAR_0);
 struct dma_fence *VAR_2;




 while ((VAR_2 = FUNC_4(VAR_1->prev, 1))) {
  struct dma_fence_chain *VAR_3;

  if (FUNC_3(&VAR_2->refcount) > 1)
         break;

  VAR_3 = FUNC_5(VAR_2);
  if (!VAR_3)
   break;




  VAR_1->prev = VAR_3->prev;
  FUNC_0(VAR_3->prev, ((void*)0));
  FUNC_2(VAR_2);
 }
 FUNC_2(VAR_2);

 FUNC_2(VAR_1->fence);
 FUNC_1(VAR_0);
}
