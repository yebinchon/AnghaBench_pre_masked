
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv10_fence_priv {int sequence; int lock; } ;
struct TYPE_6__ {int handle; } ;
struct nv10_fence_chan {TYPE_3__ sema; } ;
struct nouveau_fence {int dummy; } ;
struct nouveau_cli {int mutex; } ;
struct TYPE_4__ {scalar_t__ client; } ;
struct nouveau_channel {struct nv10_fence_chan* fence; TYPE_2__* drm; TYPE_1__ user; } ;
struct TYPE_5__ {struct nv10_fence_priv* fence; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct nouveau_fence *VAR_2,
  struct nouveau_channel *VAR_3, struct nouveau_channel *VAR_4)
{
 struct nouveau_cli *VAR_5 = (void *)VAR_3->user.client;
 struct nv10_fence_priv *VAR_6 = VAR_4->drm->fence;
 struct nv10_fence_chan *VAR_7 = VAR_4->fence;
 u32 VAR_8;
 int VAR_9;

 if (!FUNC_4(&VAR_5->mutex))
  return -VAR_0;

 FUNC_6(&VAR_6->lock);
 VAR_8 = VAR_6->sequence;
 VAR_6->sequence += 2;
 FUNC_7(&VAR_6->lock);

 VAR_9 = FUNC_3(VAR_3, 5);
 if (!VAR_9) {
  FUNC_0(VAR_3, 0, VAR_1, 4);
  FUNC_2 (VAR_3, VAR_7->sema.handle);
  FUNC_2 (VAR_3, 0);
  FUNC_2 (VAR_3, VAR_8 + 0);
  FUNC_2 (VAR_3, VAR_8 + 1);
  FUNC_1 (VAR_3);
 }

 if (!VAR_9 && !(VAR_9 = FUNC_3(VAR_4, 5))) {
  FUNC_0(VAR_4, 0, VAR_1, 4);
  FUNC_2 (VAR_4, VAR_7->sema.handle);
  FUNC_2 (VAR_4, 0);
  FUNC_2 (VAR_4, VAR_8 + 1);
  FUNC_2 (VAR_4, VAR_8 + 2);
  FUNC_1 (VAR_4);
 }

 FUNC_5(&VAR_5->mutex);
 return 0;
}
