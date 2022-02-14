
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence_work_ops {int dummy; } ;
struct dma_fence_work {struct dma_fence_work_ops const* ops; int work; int chain; int lock; int dma; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dma_fence_work *VAR_3,
    const struct dma_fence_work_ops *VAR_4)
{
 FUNC_3(&VAR_3->lock);
 FUNC_1(&VAR_3->dma, &VAR_1, &VAR_3->lock, 0, 0);
 FUNC_2(&VAR_3->chain, VAR_0);
 FUNC_0(&VAR_3->work, VAR_2);

 VAR_3->ops = VAR_4;
}
