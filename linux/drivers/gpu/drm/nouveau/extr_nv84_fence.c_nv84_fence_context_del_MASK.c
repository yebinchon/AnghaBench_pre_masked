
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv84_fence_priv {int mutex; int bo; } ;
struct TYPE_5__ {int sequence; } ;
struct nv84_fence_chan {TYPE_2__ base; int vma; } ;
struct nouveau_channel {int chid; struct nv84_fence_chan* fence; TYPE_1__* drm; } ;
struct TYPE_4__ {struct nv84_fence_priv* fence; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct nouveau_channel *VAR_0)
{
 struct nv84_fence_priv *VAR_1 = VAR_0->drm->fence;
 struct nv84_fence_chan *VAR_2 = VAR_0->fence;

 FUNC_2(VAR_1->bo, VAR_0->chid * 16 / 4, VAR_2->base.sequence);
 FUNC_0(&VAR_1->mutex);
 FUNC_5(&VAR_2->vma);
 FUNC_1(&VAR_1->mutex);
 FUNC_3(&VAR_2->base);
 VAR_0->fence = ((void*)0);
 FUNC_4(&VAR_2->base);
}
