
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_17__ {scalar_t__ client; } ;
struct TYPE_24__ {scalar_t__ family; scalar_t__ ram_user; } ;
struct nvif_device {TYPE_10__ object; TYPE_4__ info; } ;
struct nv_dma_v0 {scalar_t__ limit; scalar_t__ start; void* access; void* target; } ;
struct TYPE_25__ {scalar_t__ size; scalar_t__ base; scalar_t__ bridge; } ;
struct nouveau_drm {TYPE_5__ agp; } ;
struct TYPE_26__ {scalar_t__ limit; } ;
struct TYPE_19__ {TYPE_6__ vmm; int cli; } ;
struct nouveau_cli {TYPE_12__ vmm; TYPE_12__ svm; } ;
struct TYPE_27__ {int ctxdma; TYPE_11__* buffer; TYPE_13__* vma; int addr; } ;
struct nouveau_channel {TYPE_7__ push; TYPE_12__* vmm; struct nouveau_drm* drm; int killed; struct nvif_device* device; } ;
typedef int args ;
struct TYPE_28__ {TYPE_3__* func; } ;
struct TYPE_23__ {scalar_t__ (* resource_addr ) (TYPE_8__*,int) ;} ;
struct TYPE_21__ {scalar_t__ mem_type; } ;
struct TYPE_22__ {TYPE_1__ mem; int offset; } ;
struct TYPE_20__ {int addr; } ;
struct TYPE_18__ {TYPE_2__ bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int *,int ) ;
 struct nouveau_channel* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (struct nouveau_cli*,int,int ,int,int ,int ,int *,int *,TYPE_11__**) ;
 int FUNC_4 (TYPE_11__*,int,int) ;
 int FUNC_5 (struct nouveau_channel**) ;
 int FUNC_6 (TYPE_11__*,TYPE_12__*,TYPE_13__**) ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (TYPE_10__*,int ,int ,struct nv_dma_v0*,int,int *) ;
 TYPE_8__* FUNC_8 (struct nvif_device*) ;
 scalar_t__ FUNC_9 (TYPE_8__*,int) ;

__attribute__((used)) static int
FUNC_10(struct nouveau_drm *VAR_17, struct nvif_device *VAR_18,
       u32 VAR_19, struct nouveau_channel **VAR_20)
{
 struct nouveau_cli *VAR_21 = (void *)VAR_18->object.client;
 struct nv_dma_v0 VAR_22 = {};
 struct nouveau_channel *VAR_23;
 u32 VAR_24;
 int VAR_25;

 VAR_23 = *VAR_20 = FUNC_1(sizeof(*VAR_23), VAR_1);
 if (!VAR_23)
  return -VAR_0;

 VAR_23->device = VAR_18;
 VAR_23->drm = VAR_17;
 VAR_23->vmm = VAR_21->svm.cli ? &VAR_21->svm : &VAR_21->vmm;
 FUNC_0(&VAR_23->killed, 0);


 VAR_24 = VAR_12 | VAR_13;
 if (VAR_16)
  VAR_24 = VAR_14;

 VAR_25 = FUNC_3(VAR_21, VAR_19, 0, VAR_24, 0, 0, ((void*)0), ((void*)0),
       &VAR_23->push.buffer);
 if (VAR_25 == 0) {
  VAR_25 = FUNC_4(VAR_23->push.buffer, VAR_24, 0);
  if (VAR_25 == 0)
   VAR_25 = FUNC_2(VAR_23->push.buffer);
 }

 if (VAR_25) {
  FUNC_5(VAR_20);
  return VAR_25;
 }





 VAR_23->push.addr = VAR_23->push.buffer->bo.offset;

 if (VAR_18->info.family >= VAR_3) {
  VAR_25 = FUNC_6(VAR_23->push.buffer, VAR_23->vmm,
          &VAR_23->push.vma);
  if (VAR_25) {
   FUNC_5(VAR_20);
   return VAR_25;
  }

  VAR_23->push.addr = VAR_23->push.vma->addr;

  if (VAR_18->info.family >= VAR_2)
   return 0;

  VAR_22.target = VAR_10;
  VAR_22.access = VAR_7;
  VAR_22.start = 0;
  VAR_22.limit = VAR_23->vmm->vmm.limit - 1;
 } else
 if (VAR_23->push.buffer->bo.mem.mem_type == VAR_15) {
  if (VAR_18->info.family == VAR_4) {




   VAR_22.target = VAR_9;
   VAR_22.access = VAR_6;
   VAR_22.start = FUNC_8(VAR_18)->func->
    resource_addr(FUNC_8(VAR_18), 1);
   VAR_22.limit = VAR_22.start + VAR_18->info.ram_user - 1;
  } else {
   VAR_22.target = VAR_11;
   VAR_22.access = VAR_6;
   VAR_22.start = 0;
   VAR_22.limit = VAR_18->info.ram_user - 1;
  }
 } else {
  if (VAR_23->drm->agp.bridge) {
   VAR_22.target = VAR_8;
   VAR_22.access = VAR_6;
   VAR_22.start = VAR_23->drm->agp.base;
   VAR_22.limit = VAR_23->drm->agp.base +
         VAR_23->drm->agp.size - 1;
  } else {
   VAR_22.target = VAR_10;
   VAR_22.access = VAR_6;
   VAR_22.start = 0;
   VAR_22.limit = VAR_23->vmm->vmm.limit - 1;
  }
 }

 VAR_25 = FUNC_7(&VAR_18->object, 0, VAR_5,
          &VAR_22, sizeof(VAR_22), &VAR_23->push.ctxdma);
 if (VAR_25) {
  FUNC_5(VAR_20);
  return VAR_25;
 }

 return 0;
}
