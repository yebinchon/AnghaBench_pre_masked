
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence_chain {int prev; struct dma_fence* fence; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 (void**,void*,void*) ;
 struct dma_fence* FUNC_1 (struct dma_fence_chain*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*) ;
 struct dma_fence_chain* FUNC_4 (struct dma_fence*) ;

struct dma_fence *FUNC_5(struct dma_fence *VAR_0)
{
 struct dma_fence_chain *VAR_1, *VAR_2;
 struct dma_fence *VAR_3, *VAR_4, *VAR_5;

 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1) {
  FUNC_3(VAR_0);
  return ((void*)0);
 }

 while ((VAR_3 = FUNC_1(VAR_1))) {

  VAR_2 = FUNC_4(VAR_3);
  if (VAR_2) {
   if (!FUNC_2(VAR_2->fence))
    break;

   VAR_4 = FUNC_1(VAR_2);
  } else {
   if (!FUNC_2(VAR_3))
    break;

   VAR_4 = ((void*)0);
  }

  VAR_5 = FUNC_0((void **)&VAR_1->prev, (void *)VAR_3, (void *)VAR_4);
  if (VAR_5 == VAR_3)
   FUNC_3(VAR_5);
  else
   FUNC_3(VAR_4);
  FUNC_3(VAR_3);
 }

 FUNC_3(VAR_0);
 return VAR_3;
}
