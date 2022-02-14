
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

int FUNC_3(struct dma_fence *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;

 FUNC_1(VAR_1->lock, VAR_2);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_1->lock, VAR_2);

 return VAR_3;
}
