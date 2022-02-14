
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence_cb {int dummy; } ;
struct dma_fence {int dummy; } ;
struct dma_buf_poll_cb_t {TYPE_1__* poll; scalar_t__ active; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dma_fence *VAR_0, struct dma_fence_cb *VAR_1)
{
 struct dma_buf_poll_cb_t *VAR_2 = (struct dma_buf_poll_cb_t *)VAR_1;
 unsigned long VAR_3;

 FUNC_0(&VAR_2->poll->lock, VAR_3);
 FUNC_2(VAR_2->poll, VAR_2->active);
 VAR_2->active = 0;
 FUNC_1(&VAR_2->poll->lock, VAR_3);
}
