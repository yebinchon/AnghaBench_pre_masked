
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct nvif_user {TYPE_5__* func; } ;
struct TYPE_12__ {int ib_put; int ib_base; int ib_free; int ib_max; } ;
struct TYPE_10__ {struct nouveau_bo* buffer; } ;
struct nouveau_channel {TYPE_6__ dma; int token; int user; TYPE_4__ push; TYPE_3__* drm; } ;
struct nouveau_bo {int dummy; } ;
struct TYPE_11__ {int (* doorbell ) (struct nvif_user*,int ) ;} ;
struct TYPE_7__ {struct nvif_user user; } ;
struct TYPE_8__ {TYPE_1__ device; } ;
struct TYPE_9__ {TYPE_2__ client; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct nouveau_bo*,int ) ;
 int FUNC_4 (struct nouveau_bo*,int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (struct nvif_user*,int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct nouveau_channel *VAR_0, u64 VAR_1, int VAR_2)
{
 struct nvif_user *VAR_3 = &VAR_0->drm->client.device.user;
 struct nouveau_bo *VAR_4 = VAR_0->push.buffer;
 int VAR_5 = (VAR_0->dma.ib_put * 2) + VAR_0->dma.ib_base;

 FUNC_0(VAR_0->dma.ib_free < 1);

 FUNC_4(VAR_4, VAR_5++, FUNC_1(VAR_1));
 FUNC_4(VAR_4, VAR_5++, FUNC_7(VAR_1) | VAR_2 << 8);

 VAR_0->dma.ib_put = (VAR_0->dma.ib_put + 1) & VAR_0->dma.ib_max;

 FUNC_2();

 FUNC_3(VAR_4, 0);

 FUNC_5(&VAR_0->user, 0x8c, VAR_0->dma.ib_put);
 if (VAR_3->func && VAR_3->func->doorbell)
  VAR_3->func->doorbell(VAR_3, VAR_0->token);
 VAR_0->dma.ib_free--;
}
