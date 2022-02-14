
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int uevent; int context_del; int context_new; int resume; int suspend; int (* dtor ) (struct nouveau_drm*) ;} ;
struct nv84_fence_priv {int bo; int mutex; TYPE_1__ base; } ;
struct TYPE_9__ {int nr; } ;
struct TYPE_7__ {scalar_t__ ram_size; } ;
struct TYPE_8__ {TYPE_2__ info; } ;
struct TYPE_10__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_4__ chan; TYPE_5__ client; struct nv84_fence_priv* fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nv84_fence_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct nouveau_drm*) ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_8(struct nouveau_drm *VAR_9)
{
 struct nv84_fence_priv *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_10 = VAR_9->fence = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->base.dtor = FUNC_7;
 VAR_10->base.suspend = VAR_8;
 VAR_10->base.resume = VAR_7;
 VAR_10->base.context_new = VAR_6;
 VAR_10->base.context_del = VAR_5;

 VAR_10->base.uevent = 1;

 FUNC_1(&VAR_10->mutex);


 VAR_11 = VAR_9->client.device.info.ram_size != 0 ? VAR_4 :




    VAR_2 | VAR_3;
 VAR_12 = FUNC_3(&VAR_9->client, 16 * VAR_9->chan.nr, 0,
        VAR_11, 0, 0, ((void*)0), ((void*)0), &VAR_10->bo);
 if (VAR_12 == 0) {
  VAR_12 = FUNC_4(VAR_10->bo, VAR_11, 0);
  if (VAR_12 == 0) {
   VAR_12 = FUNC_2(VAR_10->bo);
   if (VAR_12)
    FUNC_6(VAR_10->bo);
  }
  if (VAR_12)
   FUNC_5(((void*)0), &VAR_10->bo);
 }

 if (VAR_12)
  FUNC_7(VAR_9);
 return VAR_12;
}
