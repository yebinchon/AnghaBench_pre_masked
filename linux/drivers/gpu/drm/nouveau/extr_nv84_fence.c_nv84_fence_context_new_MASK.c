
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv84_fence_priv {int mutex; int bo; } ;
struct TYPE_4__ {int sequence; int sync32; int emit32; int (* read ) (struct nouveau_channel*) ;int sync; int emit; } ;
struct nv84_fence_chan {int vma; TYPE_2__ base; } ;
struct nouveau_channel {int vmm; struct nv84_fence_chan* fence; TYPE_1__* drm; } ;
struct TYPE_3__ {struct nv84_fence_priv* fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv84_fence_chan* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nouveau_channel*,TYPE_2__*) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct nouveau_channel*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct nouveau_channel*) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_7(struct nouveau_channel *VAR_6)
{
 struct nv84_fence_priv *VAR_7 = VAR_6->drm->fence;
 struct nv84_fence_chan *VAR_8;
 int VAR_9;

 VAR_8 = VAR_6->fence = FUNC_0(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_6, &VAR_8->base);
 VAR_8->base.emit = VAR_2;
 VAR_8->base.sync = VAR_4;
 VAR_8->base.read = FUNC_6;
 VAR_8->base.emit32 = VAR_3;
 VAR_8->base.sync32 = VAR_5;
 VAR_8->base.sequence = FUNC_6(VAR_6);

 FUNC_1(&VAR_7->mutex);
 VAR_9 = FUNC_4(VAR_7->bo, VAR_6->vmm, &VAR_8->vma);
 FUNC_2(&VAR_7->mutex);

 if (VAR_9)
  FUNC_5(VAR_6);
 return VAR_9;
}
