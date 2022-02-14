
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int super; } ;
struct nouveau_cli {TYPE_3__ base; } ;
struct TYPE_12__ {scalar_t__ client; } ;
struct TYPE_10__ {TYPE_6__* buffer; int vma; TYPE_4__ ctxdma; } ;
struct nouveau_channel {TYPE_2__ push; TYPE_4__ user; int kill; TYPE_4__ vram; TYPE_4__ gart; TYPE_4__ nvsw; int inst; TYPE_1__* vmm; int drm; scalar_t__ fence; } ;
struct TYPE_14__ {scalar_t__ pin_refcnt; } ;
struct TYPE_13__ {int (* context_del ) (struct nouveau_channel*) ;} ;
struct TYPE_9__ {int svmm; } ;


 int FUNC_0 (struct nouveau_channel*) ;
 int FUNC_1 (int *,TYPE_6__**) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct nouveau_channel*) ;

void
FUNC_10(struct nouveau_channel **VAR_0)
{
 struct nouveau_channel *VAR_1 = *VAR_0;
 if (VAR_1) {
  struct nouveau_cli *VAR_2 = (void *)VAR_1->user.client;
  bool VAR_3;

  if (VAR_2) {
   VAR_3 = VAR_2->base.super;
   VAR_2->base.super = 1;
  }

  if (VAR_1->fence)
   FUNC_4(VAR_1->drm)->context_del(VAR_1);

  if (VAR_2)
   FUNC_5(VAR_1->vmm->svmm, VAR_1->inst);

  FUNC_8(&VAR_1->nvsw);
  FUNC_8(&VAR_1->gart);
  FUNC_8(&VAR_1->vram);
  FUNC_7(&VAR_1->kill);
  FUNC_8(&VAR_1->user);
  FUNC_8(&VAR_1->push.ctxdma);
  FUNC_6(&VAR_1->push.vma);
  FUNC_2(VAR_1->push.buffer);
  if (VAR_1->push.buffer && VAR_1->push.buffer->pin_refcnt)
   FUNC_3(VAR_1->push.buffer);
  FUNC_1(((void*)0), &VAR_1->push.buffer);
  FUNC_0(VAR_1);

  if (VAR_2)
   VAR_2->base.super = VAR_3;
 }
 *VAR_0 = ((void*)0);
}
