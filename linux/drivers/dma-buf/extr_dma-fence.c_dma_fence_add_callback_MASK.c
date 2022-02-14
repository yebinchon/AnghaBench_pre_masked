
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence_cb {int node; scalar_t__ func; } ;
struct dma_fence {int lock; int cb_list; TYPE_1__* ops; int flags; } ;
typedef scalar_t__ dma_fence_func_t ;
struct TYPE_2__ {int (* enable_signaling ) (struct dma_fence*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct dma_fence*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct dma_fence*) ;

int FUNC_10(struct dma_fence *VAR_4, struct dma_fence_cb *VAR_5,
      dma_fence_func_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;
 bool VAR_9;

 if (FUNC_1(!VAR_4 || !VAR_6))
  return -VAR_2;

 if (FUNC_8(VAR_1, &VAR_4->flags)) {
  FUNC_0(&VAR_5->node);
  return -VAR_3;
 }

 FUNC_4(VAR_4->lock, VAR_7);

 VAR_9 = FUNC_7(VAR_0,
       &VAR_4->flags);

 if (FUNC_8(VAR_1, &VAR_4->flags))
  VAR_8 = -VAR_3;
 else if (!VAR_9 && VAR_4->ops->enable_signaling) {
  FUNC_9(VAR_4);

  if (!VAR_4->ops->enable_signaling(VAR_4)) {
   FUNC_2(VAR_4);
   VAR_8 = -VAR_3;
  }
 }

 if (!VAR_8) {
  VAR_5->func = VAR_6;
  FUNC_3(&VAR_5->node, &VAR_4->cb_list);
 } else
  FUNC_0(&VAR_5->node);
 FUNC_5(VAR_4->lock, VAR_7);

 return VAR_8;
}
