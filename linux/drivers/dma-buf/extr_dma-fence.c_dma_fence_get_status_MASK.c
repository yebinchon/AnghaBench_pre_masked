
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int lock; } ;


 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

int FUNC_3(struct dma_fence *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_1(VAR_0->lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(VAR_0->lock, VAR_1);

 return VAR_2;
}
