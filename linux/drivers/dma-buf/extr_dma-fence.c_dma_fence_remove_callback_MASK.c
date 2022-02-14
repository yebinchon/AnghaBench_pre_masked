
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence_cb {int node; } ;
struct dma_fence {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

bool
FUNC_4(struct dma_fence *VAR_0, struct dma_fence_cb *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_2(VAR_0->lock, VAR_2);

 VAR_3 = !FUNC_1(&VAR_1->node);
 if (VAR_3)
  FUNC_0(&VAR_1->node);

 FUNC_3(VAR_0->lock, VAR_2);

 return VAR_3;
}
