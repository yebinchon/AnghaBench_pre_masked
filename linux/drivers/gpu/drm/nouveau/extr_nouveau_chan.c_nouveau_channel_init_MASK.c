
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_12__ {scalar_t__ family; scalar_t__ ram_user; } ;
struct nvif_device {TYPE_1__ info; } ;
struct nv_dma_v0 {scalar_t__ limit; scalar_t__ start; void* access; void* target; } ;
struct TYPE_13__ {scalar_t__ size; scalar_t__ base; scalar_t__ bridge; } ;
struct nouveau_drm {TYPE_2__ agp; } ;
struct TYPE_18__ {int handle; } ;
struct TYPE_17__ {int oclass; } ;
struct TYPE_16__ {int max; int ib_base; int ib_max; int ib_put; int ib_free; int put; int cur; int free; } ;
struct nouveau_channel {int user_put; int user_get; int user_get_hi; struct nouveau_drm* drm; TYPE_8__ nvsw; TYPE_6__ user; TYPE_5__ dma; TYPE_8__ gart; TYPE_4__* vmm; TYPE_8__ vram; int kill; struct nvif_device* device; } ;
typedef int args ;
struct TYPE_14__ {scalar_t__ limit; } ;
struct TYPE_15__ {TYPE_3__ vmm; } ;
struct TYPE_11__ {int (* context_new ) (struct nouveau_channel*) ;} ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_2 (struct nouveau_drm*,char*,int) ;
 int VAR_13 ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (struct nouveau_channel*,int) ;
 int VAR_14 ;
 TYPE_10__* FUNC_5 (struct nouveau_drm*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*,int ,int,int ,int *,int ,int ,int *) ;
 int FUNC_8 (TYPE_6__*,int,int ,struct nv_dma_v0*,int,TYPE_8__*) ;
 int FUNC_9 (TYPE_6__*,int *,int ) ;
 int FUNC_10 (struct nouveau_channel*) ;

__attribute__((used)) static int
FUNC_11(struct nouveau_channel *VAR_15, u32 VAR_16, u32 VAR_17)
{
 struct nvif_device *VAR_18 = VAR_15->device;
 struct nouveau_drm *VAR_19 = VAR_15->drm;
 struct nv_dma_v0 VAR_20 = {};
 int VAR_21, VAR_22;

 FUNC_9(&VAR_15->user, ((void*)0), 0);

 if (VAR_15->user.oclass >= VAR_0) {
  VAR_21 = FUNC_7(&VAR_15->user, VAR_14,
           1, VAR_2,
           ((void*)0), 0, 0, &VAR_15->kill);
  if (VAR_21 == 0)
   VAR_21 = FUNC_6(&VAR_15->kill);
  if (VAR_21) {
   FUNC_2(VAR_19, "Failed to request channel kill "
          "notification: %d\n", VAR_21);
   return VAR_21;
  }
 }


 if (VAR_18->info.family < VAR_5) {
  if (VAR_18->info.family >= VAR_6) {
   VAR_20.target = VAR_11;
   VAR_20.access = VAR_9;
   VAR_20.start = 0;
   VAR_20.limit = VAR_15->vmm->vmm.limit - 1;
  } else {
   VAR_20.target = VAR_12;
   VAR_20.access = VAR_8;
   VAR_20.start = 0;
   VAR_20.limit = VAR_18->info.ram_user - 1;
  }

  VAR_21 = FUNC_8(&VAR_15->user, VAR_16, VAR_7,
           &VAR_20, sizeof(VAR_20), &VAR_15->vram);
  if (VAR_21)
   return VAR_21;

  if (VAR_18->info.family >= VAR_6) {
   VAR_20.target = VAR_11;
   VAR_20.access = VAR_9;
   VAR_20.start = 0;
   VAR_20.limit = VAR_15->vmm->vmm.limit - 1;
  } else
  if (VAR_15->drm->agp.bridge) {
   VAR_20.target = VAR_10;
   VAR_20.access = VAR_8;
   VAR_20.start = VAR_15->drm->agp.base;
   VAR_20.limit = VAR_15->drm->agp.base +
         VAR_15->drm->agp.size - 1;
  } else {
   VAR_20.target = VAR_11;
   VAR_20.access = VAR_8;
   VAR_20.start = 0;
   VAR_20.limit = VAR_15->vmm->vmm.limit - 1;
  }

  VAR_21 = FUNC_8(&VAR_15->user, VAR_17, VAR_7,
           &VAR_20, sizeof(VAR_20), &VAR_15->gart);
  if (VAR_21)
   return VAR_21;
 }


 switch (VAR_15->user.oclass & 0x00ff) {
 case 0x006b:
 case 0x006e:
  VAR_15->user_put = 0x40;
  VAR_15->user_get = 0x44;
  VAR_15->dma.max = (0x10000 / 4) - 2;
  break;
 default:
  VAR_15->user_put = 0x40;
  VAR_15->user_get = 0x44;
  VAR_15->user_get_hi = 0x60;
  VAR_15->dma.ib_base = 0x10000 / 4;
  VAR_15->dma.ib_max = (0x02000 / 8) - 1;
  VAR_15->dma.ib_put = 0;
  VAR_15->dma.ib_free = VAR_15->dma.ib_max - VAR_15->dma.ib_put;
  VAR_15->dma.max = VAR_15->dma.ib_base;
  break;
 }

 VAR_15->dma.put = 0;
 VAR_15->dma.cur = VAR_15->dma.put;
 VAR_15->dma.free = VAR_15->dma.max - VAR_15->dma.cur;

 VAR_21 = FUNC_4(VAR_15, VAR_1);
 if (VAR_21)
  return VAR_21;

 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++)
  FUNC_3(VAR_15, 0x00000000);


 if (VAR_18->info.family < VAR_4) {
  VAR_21 = FUNC_8(&VAR_15->user, 0x006e,
           VAR_3,
           ((void*)0), 0, &VAR_15->nvsw);
  if (VAR_21)
   return VAR_21;

  VAR_21 = FUNC_4(VAR_15, 2);
  if (VAR_21)
   return VAR_21;

  FUNC_0(VAR_15, VAR_13, 0x0000, 1);
  FUNC_3 (VAR_15, VAR_15->nvsw.handle);
  FUNC_1 (VAR_15);
 }


 return FUNC_5(VAR_15->drm)->context_new(VAR_15);
}
