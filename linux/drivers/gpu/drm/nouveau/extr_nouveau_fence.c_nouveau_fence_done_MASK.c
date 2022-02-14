
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fence_chan {int lock; int notify; } ;
struct TYPE_2__ {int flags; int * ops; } ;
struct nouveau_fence {TYPE_1__ base; int channel; } ;
struct nouveau_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct nouveau_fence_chan* FUNC_2 (struct nouveau_fence*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct nouveau_channel*,struct nouveau_fence_chan*) ;
 int FUNC_4 (int *) ;
 struct nouveau_channel* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int *) ;

bool
FUNC_9(struct nouveau_fence *VAR_3)
{
 if (VAR_3->base.ops == &VAR_1 ||
     VAR_3->base.ops == &VAR_2) {
  struct nouveau_fence_chan *VAR_4 = FUNC_2(VAR_3);
  struct nouveau_channel *VAR_5;
  unsigned long VAR_6;

  if (FUNC_8(VAR_0, &VAR_3->base.flags))
   return 1;

  FUNC_6(&VAR_4->lock, VAR_6);
  VAR_5 = FUNC_5(VAR_3->channel, FUNC_1(&VAR_4->lock));
  if (VAR_5 && FUNC_3(VAR_5, VAR_4))
   FUNC_4(&VAR_4->notify);
  FUNC_7(&VAR_4->lock, VAR_6);
 }
 return FUNC_0(&VAR_3->base);
}
