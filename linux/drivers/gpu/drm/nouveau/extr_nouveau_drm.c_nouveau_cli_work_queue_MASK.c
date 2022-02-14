
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_cli_work {int cb; int head; struct nouveau_cli* cli; int fence; } ;
struct nouveau_cli {int lock; int worker; } ;
struct dma_fence {int dummy; } ;


 scalar_t__ FUNC_0 (struct dma_fence*,int *,int (*) (struct dma_fence*,int *)) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dma_fence*,int *) ;

void
FUNC_6(struct nouveau_cli *VAR_0, struct dma_fence *VAR_1,
         struct nouveau_cli_work *VAR_2)
{
 VAR_2->fence = FUNC_1(VAR_1);
 VAR_2->cli = VAR_0;
 FUNC_3(&VAR_0->lock);
 FUNC_2(&VAR_2->head, &VAR_0->worker);
 if (FUNC_0(VAR_1, &VAR_2->cb, FUNC_5))
  FUNC_5(VAR_1, &VAR_2->cb);
 FUNC_4(&VAR_0->lock);
}
