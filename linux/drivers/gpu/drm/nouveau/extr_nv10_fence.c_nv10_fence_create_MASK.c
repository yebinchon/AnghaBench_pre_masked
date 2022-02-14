
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context_del; int context_new; int dtor; } ;
struct nv10_fence_priv {int lock; TYPE_1__ base; } ;
struct nouveau_drm {struct nv10_fence_priv* fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv10_fence_priv* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct nouveau_drm *VAR_5)
{
 struct nv10_fence_priv *VAR_6;

 VAR_6 = VAR_5->fence = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->base.dtor = VAR_4;
 VAR_6->base.context_new = VAR_3;
 VAR_6->base.context_del = VAR_2;
 FUNC_1(&VAR_6->lock);
 return 0;
}
