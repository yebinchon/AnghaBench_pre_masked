
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


struct resource {unsigned long start; } ;
struct page {struct nouveau_dmem_chunk* zone_device_data; } ;
struct TYPE_8__ {scalar_t__ family; int ram_user; } ;
struct TYPE_9__ {TYPE_2__ info; } ;
struct TYPE_10__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_5__* dmem; TYPE_4__ client; TYPE_1__* dev; } ;
struct nouveau_dmem_chunk {unsigned long pfn_first; int list; struct nouveau_drm* drm; } ;
struct device {int dummy; } ;
struct TYPE_12__ {int * ops; struct resource res; int type; } ;
struct TYPE_11__ {int chunk_empty; TYPE_6__ pagemap; int chunk_full; int chunk_free; int mutex; struct nouveau_drm* drm; } ;
struct TYPE_7__ {struct device* dev; } ;


 unsigned long FUNC_0 (int ,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct resource*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct nouveau_drm*,char*,unsigned long) ;
 unsigned long VAR_5 ;
 struct resource* FUNC_4 (struct device*,TYPE_6__*) ;
 struct resource* FUNC_5 (struct device*,int *,unsigned long) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_5__*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nouveau_drm*) ;
 int FUNC_11 (struct nouveau_drm*) ;
 int VAR_7 ;
 struct page* FUNC_12 (unsigned long) ;

void
FUNC_13(struct nouveau_drm *VAR_8)
{
 struct device *VAR_9 = VAR_8->dev->dev;
 struct resource *VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;
 int VAR_14;


 if (VAR_8->client.device.info.family < VAR_4)
  return;

 if (!(VAR_8->dmem = FUNC_7(sizeof(*VAR_8->dmem), VAR_2)))
  return;

 VAR_8->dmem->drm = VAR_8;
 FUNC_9(&VAR_8->dmem->mutex);
 FUNC_1(&VAR_8->dmem->chunk_free);
 FUNC_1(&VAR_8->dmem->chunk_full);
 FUNC_1(&VAR_8->dmem->chunk_empty);

 VAR_12 = FUNC_0(VAR_8->client.device.info.ram_user, VAR_1);


 VAR_14 = FUNC_11(VAR_8);
 if (VAR_14)
  goto out_free;







 VAR_10 = FUNC_5(VAR_9, &VAR_6, VAR_12);
 if (FUNC_2(VAR_10))
  goto out_free;
 VAR_8->dmem->pagemap.type = VAR_3;
 VAR_8->dmem->pagemap.res = *VAR_10;
 VAR_8->dmem->pagemap.ops = &VAR_7;
 if (FUNC_2(FUNC_4(VAR_9, &VAR_8->dmem->pagemap)))
  goto out_free;

 VAR_13 = VAR_10->start >> VAR_5;
 for (VAR_11 = 0; VAR_11 < (VAR_12 / VAR_1); ++VAR_11) {
  struct nouveau_dmem_chunk *VAR_15;
  struct page *VAR_16;
  unsigned long VAR_17;

  VAR_15 = FUNC_7(sizeof(*VAR_15), VAR_2);
  if (VAR_15 == ((void*)0)) {
   FUNC_10(VAR_8);
   return;
  }

  VAR_15->drm = VAR_8;
  VAR_15->pfn_first = VAR_13 + (VAR_11 * VAR_0);
  FUNC_8(&VAR_15->list, &VAR_8->dmem->chunk_empty);

  VAR_16 = FUNC_12(VAR_15->pfn_first);
  for (VAR_17 = 0; VAR_17 < VAR_0; ++VAR_17, ++VAR_16)
   VAR_16->zone_device_data = VAR_15;
 }

 FUNC_3(VAR_8, "DMEM: registered %ldMB of device memory\n", VAR_12 >> 20);
 return;
out_free:
 FUNC_6(VAR_8->dmem);
 VAR_8->dmem = ((void*)0);
}
