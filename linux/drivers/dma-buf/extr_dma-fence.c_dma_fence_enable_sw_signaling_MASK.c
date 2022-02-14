
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence {int lock; TYPE_1__* ops; int flags; } ;
struct TYPE_2__ {int (* enable_signaling ) (struct dma_fence*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct dma_fence*) ;

void FUNC_7(struct dma_fence *VAR_2)
{
 unsigned long VAR_3;

 if (!FUNC_4(VAR_0,
         &VAR_2->flags) &&
     !FUNC_5(VAR_1, &VAR_2->flags) &&
     VAR_2->ops->enable_signaling) {
  FUNC_6(VAR_2);

  FUNC_1(VAR_2->lock, VAR_3);

  if (!VAR_2->ops->enable_signaling(VAR_2))
   FUNC_0(VAR_2);

  FUNC_2(VAR_2->lock, VAR_3);
 }
}
