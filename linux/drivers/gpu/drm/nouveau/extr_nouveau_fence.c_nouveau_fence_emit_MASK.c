
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fence_priv {scalar_t__ uevent; } ;
struct nouveau_fence_chan {int (* emit ) (struct nouveau_fence*) ;int lock; int pending; int notify; int fence_ref; int sequence; int context; } ;
struct nouveau_fence {int head; int base; scalar_t__ timeout; struct nouveau_channel* channel; } ;
struct nouveau_channel {TYPE_1__* drm; struct nouveau_fence_chan* fence; } ;
struct TYPE_2__ {scalar_t__ fence; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct nouveau_channel*,struct nouveau_fence_chan*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nouveau_fence*) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct nouveau_fence *VAR_4, struct nouveau_channel *VAR_5)
{
 struct nouveau_fence_chan *VAR_6 = VAR_5->fence;
 struct nouveau_fence_priv *VAR_7 = (void*)VAR_5->drm->fence;
 int VAR_8;

 VAR_4->channel = VAR_5;
 VAR_4->timeout = VAR_1 + (15 * VAR_0);

 if (VAR_7->uevent)
  FUNC_1(&VAR_4->base, &VAR_3,
          &VAR_6->lock, VAR_6->context, ++VAR_6->sequence);
 else
  FUNC_1(&VAR_4->base, &VAR_2,
          &VAR_6->lock, VAR_6->context, ++VAR_6->sequence);
 FUNC_2(&VAR_6->fence_ref);

 FUNC_9(&VAR_4->base);
 VAR_8 = VAR_6->emit(VAR_4);
 if (!VAR_8) {
  FUNC_0(&VAR_4->base);
  FUNC_6(&VAR_6->lock);

  if (FUNC_4(VAR_5, VAR_6))
   FUNC_5(&VAR_6->notify);

  FUNC_3(&VAR_4->head, &VAR_6->pending);
  FUNC_7(&VAR_6->lock);
 }

 return VAR_8;
}
